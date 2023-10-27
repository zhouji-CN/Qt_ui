#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_loadImage_clicked()
{
    QString imgPath = QFileDialog::getOpenFileName(this, tr("打开图片"), "E:/Learning/ZHOUJI/Code/QT/","file (*.png *.jpg *.bmp)");
    // 读取图像
    srcImage = imread(imgPath.toStdString()); // 路径从Qsstring转换为string,不能加Mat了，不然就不是全局变量了
    Mat dstImage;
    //把cv图像抓换为QImage图像
    cvtColor(srcImage, dstImage, COLOR_BGR2RGB);
    QImage displayImg = QImage(dstImage.data, dstImage.cols, dstImage.rows, dstImage.cols * dstImage.channels(), QImage::Format_RGB888);
    QImage disimage = imageCenter(displayImg, ui->lbl_show1);

    //显示图像到页面
    ui->lbl_show1->setPixmap(QPixmap::fromImage(disimage));
}


// 灰度化
void MainWindow::on_btn_Gray_clicked()
{
    Mat resultImage;
    cvtColor(srcImage, resultImage, COLOR_BGR2GRAY); // 转换为灰度图，单通道
    cvtColor(resultImage, resultImage, COLOR_GRAY2RGB); // 需要转为彩色图，不然不能转换为QImage

    QImage displayImg = QImage(resultImage.data, resultImage.cols, resultImage.rows, resultImage.cols * resultImage.channels(), QImage::Format_RGB888);
    QImage disimage = imageCenter(displayImg, ui->lbl_show2);

    //显示图像到页面
    ui->lbl_show2->setPixmap(QPixmap::fromImage(disimage));
}



// 图片居中显示，图片的大小与label的大小相适应
QImage MainWindow::imageCenter(QImage qimage, QLabel *qlabel)
{
    QImage image;
    QSize imageSize = qimage.size();
    QSize labelSize = qlabel->size();

    double dWidthRatio = 1.0 * imageSize.width() / labelSize.width();
    double dHeightRatio = 1.0 * imageSize.height() / labelSize.height();

    if (dWidthRatio > dHeightRatio)
    {
        image = qimage.scaledToWidth(labelSize.width());
    }
    else {

        image = qimage.scaledToHeight(labelSize.height());
    }
    return image;
}

// 滤波
void MainWindow::on_btn_Filter_clicked()
{
    Mat blurImage;
    blur(srcImage, blurImage, Size(7, 7));
    cvtColor(blurImage, blurImage, COLOR_BGR2RGB);
    QImage displayImg = QImage(blurImage.data, blurImage.cols, blurImage.rows, blurImage.cols * blurImage.channels(), QImage::Format_RGB888);
    QImage disimage = imageCenter(displayImg, ui->lbl_show2);
    //显示图像到页面
    ui->lbl_show2->setPixmap(QPixmap::fromImage(disimage));
}


// 边缘检测
void MainWindow::on_btn_Edge_clicked()
{
    Mat edgeImage, grayImage;
    cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
    Canny(grayImage, edgeImage, 200, 1);
    cvtColor(edgeImage, edgeImage, COLOR_GRAY2RGB);
    QImage displayImg = QImage(edgeImage.data, edgeImage.cols, edgeImage.rows, edgeImage.cols * edgeImage.channels(), QImage::Format_RGB888);
    QImage disimage = imageCenter(displayImg, ui->lbl_show2);
    //显示图像到页面
    ui->lbl_show2->setPixmap(QPixmap::fromImage(disimage));
}

