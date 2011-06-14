#ifndef SUBTASKDIALOG_H
#define SUBTASKDIALOG_H
class SubtaskDialog;
#include <QLineEdit>
#include <QDialog>
#include "Model.h"



class SubtaskDialog : public QDialog
{
    Q_OBJECT
public:
    SubtaskDialog(QWidget * parent, Model * mod);
    void reloadName();

private:
    Model * model;
    QListWidget * subtaskList;
    QLineEdit * nameEdit;
    QPushButton * changeNameButton;

signals:
    void changed();
    void reportError(QString);

private slots:
    void AddClicked();
    void ChangeClicked();
    void DeleteClicked();
    void LengthChanged(QString);
    void OKPressed();

};

#endif // SUBTASKDIALOG_H