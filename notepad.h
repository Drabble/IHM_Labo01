#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

namespace Ui {
class Notepad;
}

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = 0);
    ~Notepad();

private slots:
    void on_quitButton_clicked();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionQuit_triggered();

    void on_actionAbout_triggered();

    void on_actionHelp_triggered();

    void on_actionSave_as_triggered();

private:
    Ui::Notepad *ui;
    QString fileName;
};

#endif // NOTEPAD_H
