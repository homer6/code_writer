#ifndef CODEWRITERMAINWINDOW_H
#define CODEWRITERMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class CodeWriterMainWindow;
}

class CodeWriterMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CodeWriterMainWindow(QWidget *parent = 0);
    ~CodeWriterMainWindow();

private:
    Ui::CodeWriterMainWindow *ui;
};

#endif // CODEWRITERMAINWINDOW_H
