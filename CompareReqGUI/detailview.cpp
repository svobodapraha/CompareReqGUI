#include "detailview.h"
#include "ui_detailview.h"
#include <QClipboard>

DetailView::DetailView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DetailView)
{
    ui->setupUi(this);

    ui->MainFrame->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    QVBoxLayout* vbox = new QVBoxLayout( this );
    vbox->addWidget( ui->MainFrame );

    //qDebug() << "detailedview form";


}

DetailView::~DetailView()
{
    delete ui;
}







void DetailView::setTexts(QString oldText, QString newText)
{
    ui->textBrowser_oldReq->setText(oldText);
    ui->textBrowser_newReq->setText(newText);
}

void DetailView::setReqID(QString reqID)
{
    setWindowTitle(reqID);
}

void DetailView::on_btnCopyToClipboard_clicked()
{
    QString asTextForClipboard = "";
    asTextForClipboard = "OLD:\r****\r" +
                         ui->textBrowser_oldReq->toPlainText() +
                         "\rNEW:\r****\r" +
                         ui->textBrowser_newReq->toPlainText();

    QClipboard *p_Clipboard = QApplication::clipboard();
    p_Clipboard->setText(asTextForClipboard);
}

void DetailView::on_btnClose_clicked()
{
    this->close();
}
