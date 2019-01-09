#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player_ = new QMediaPlayer;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete player_;
}

void MainWindow::on_pushButton_clicked()
{
    player_->setMedia(QUrl::fromLocalFile(ui->filePathLineEdit->text()));
    player_->setVolume(50);
    player_->play();
}
