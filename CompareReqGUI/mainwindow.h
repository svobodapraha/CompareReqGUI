#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QSettings>
#include <QHostInfo>

#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"

#include "detailview.h"
#include <windows.h>


using namespace QXlsx;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QStringList arguments,QWidget *parent = 0);
    ~MainWindow();

    bool boBatchProcessing;
    int iExitCode;

signals:
    void startBatchProcessing(int iID);


private slots:
    void on_btnWrite_clicked();

    void on_btnNewReq_clicked();

    void on_btnOldReq_clicked();

    void on_btnCompare_clicked();

    void on_tableWidget_Changes_clicked(const QModelIndex &index);

    void on_btn_Debug_clicked();

    void on_lineEdit_NewReq_textEdited(const QString &arg1);

    void on_lineEdit_OldReq_textEdited(const QString &arg1);

    void on_btn_CheckAll_clicked();

    void on_btn_SortReq_clicked();

    int batchProcessing(int iID);


private:
    Ui::MainWindow *ui;

private:
    QString fileName_NewReq;
    QString fileName_OldReq;
    QString fileName_OldReqCor;
    QString newReqFileLastPath;
    QString oldReqFileLastPath;
    QString fileName_Report;
    QString asCompareCondition;


    QSettings *iniSettings;
    void EmptyChangesTable();
    DetailView *detailView;

    void setChangesTableNotEditable();
    void checkAll(bool boCheck);

    QString asUserAndHostName;
    QStringList comLineArgList;


};


#define kn_HeaderRow      1
#define kn_FistDataRow    2
#define kn_ReqIDCol       1
#define kn_FirstHeaderCol 2

#define col_infotable_check_box         0
#define col_infotable_requirement       1
#define col_infotable_req_short         2
#define col_infotable_status            3
#define col_infotable_par_name          4
#define col_infotable_old_value         5
#define col_infotable_new_value         6
#define col_infotable_user_comment      7
#define col_infotable_origID            8


#define kn_ReportFirstInfoRow           1

#define knBatchProcessingID  1

#define knExitStatusBadSignal               1
#define knExitStatusReporFileOpened         2
#define knExitStatusInvalidInputFilenames   3
#define knExitStatusCannotLoadInputFiles    4
#define knExitStatusNoResultDoc             5
#define knExitStatusCorrectedFileOpened     6

#define knOrigIDText     ("Original Old ID")



#endif // MAINWINDOW_H
