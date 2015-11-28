#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setStyleSheet("background-image:url(:/Image/Map_of_South_Korea-blank.png)");
    QImage bg(":/Image/Map_of_South_Korea-blank.png");

    int height = bg.height();
    int width = bg.width();
    ui->graphicsView->setFixedSize(width, height);
    centralWidget()->setFixedSize(width, height);
    this->setFixedSize(width, height);

}
MainWindow::~MainWindow()
{
    delete ui;
}
