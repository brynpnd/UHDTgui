#ifndef MAP_H
#define MAP_H

#include <QWidget>
#include <QWebView>
#include <QWebPage>
#include <QWebFrame>
#include <QFile>
#include <QMessageBox>

#include "javascriptobject.h"
#include "container.h"

namespace Ui
{
    class Map;
}

class Map : public QWidget
{
    Q_OBJECT

public:
    Map(QWidget *parent = 0);
    ~Map();

    void javascriptClick(void);
    void hideBoundaryInput(void);
    void showBoundaryInput(void);
    void hideNoFlyInput(void);
    void showNoFlyInput(void);
    void hideFPInput(void);
    void hideSimInput(void);
    void showSimInput(void);

    JavascriptObject *myObject;

    void listBoundCoordinates(void);
    void clearBoundCoordinates(void);
    void listNoFlyCoordinates(void);
    void clearNoFlyCoordinates(void);
    void listFPCoordinates(void);

private:
    Ui::Map *ui;
    Container boundLats;
    Container boundLongs;
    Container noFlyLats;
    Container noFlyLongs;
    Container FPLats;
    Container FPLongs;

    int timerId;
    bool timerOn;

    int boundIndex;
    int noFlyIndex;
    int FPIndex;

protected:
    void timerEvent(QTimerEvent *event);

private slots:
    void on_ClearMarker_clicked();
    void on_PutMarker_clicked();
    void on_DrawShape_clicked();
    void on_addBound_clicked();
    void on_copyBound_clicked();
    void on_undoBound_clicked();
    void on_confirmBound_clicked();
    void on_addNoFly_clicked();
    void on_undoNoFly_clicked();
    void on_copyNoFly_clicked();
    void on_confirmNoFly_clicked();
    void on_DrawNoFly_clicked();
    void on_cancelBound_clicked();
    void on_cancelNoFly_clicked();
    void on_removeBoundary_clicked();
    void on_removeNoFly_clicked();
    void on_finishRemove_clicked();
    void on_createFP_clicked();
    void on_confirmFP_clicked();
    void on_returnHomeYes_clicked();
    void on_returnHomeNo_clicked();
    void on_addFP_clicked();
    void on_copyFP_clicked();
    void on_simFlight_clicked();
    void on_startSim_clicked();
    void on_simReset_clicked();
    void on_simFinish_clicked();
};

#endif // MAP_H
