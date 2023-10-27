#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<opencv2/opencv.hpp>

#include <QMainWindow>
#include <QImage>
#include<QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
using namespace cv;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QImage imageCenter(QImage qimage, QLabel *qlabel);
private slots:
    void on_btn_loadImage_clicked();

    void on_btn_Gray_clicked();

    void on_btn_Filter_clicked();

    void on_btn_Edge_clicked();

private:
    Ui::MainWindow *ui;
    Mat srcImage;
};
#endif // MAINWINDOW_H
