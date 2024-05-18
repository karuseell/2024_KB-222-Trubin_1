#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(7);
    ui->tableWidget->setColumnCount(7);

    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Пн" << "Вт" << "Ср" << "Чт" << "Пт" << "Сб" << "Вс"); //Задание имени столбцов
    ui->tableWidget->setVerticalHeaderLabels(QStringList() << "Неделя 1" << "Неделя 2" << "Неделя 3" << "Неделя 4" << "Неделя 5" << "Неделя 6" << "Неделя 7"); //Задание имени строк
}

MainWindow::~MainWindow()
{
    delete ui;
}
