#ifndef DETAILVIEW_H
#define DETAILVIEW_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class DetailView;
}

class DetailView : public QDialog
{
    Q_OBJECT

public:
    explicit DetailView(QWidget *parent = 0);
    ~DetailView();

    void setTexts(QString oldText, QString newText);
    void setReqID(QString reqID);
private slots:


    void on_btnCopyToClipboard_clicked();

    void on_btnClose_clicked();

private:
    Ui::DetailView *ui;
};

#endif // DETAILVIEW_H
