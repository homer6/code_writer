#include "codewritermainwindow.h"
#include "ui_codewritermainwindow.h"

CodeWriterMainWindow::CodeWriterMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CodeWriterMainWindow)
{
    ui->setupUi(this);
}

CodeWriterMainWindow::~CodeWriterMainWindow()
{
    delete ui;
}
