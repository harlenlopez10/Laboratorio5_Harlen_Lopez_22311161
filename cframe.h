#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class cframe;
}
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();

private slots:
    void on_Buscar_n_clicked();

    void on_pushButton_2_clicked();

    void on_TransponerMatriz_clicked();

    void on_sB_Fil_Col_valueChanged(int arg1);


    void on_BTNRETURN_clicked();

    void on_btnCERRAR_clicked();

    void on_ButtonExercise1_clicked();

    void on_ButtonExercise2_clicked();

    void on_ButtonExercise3_clicked();

    void on_ButtonExercise4_clicked();

    void on_btnHacerMatrices_clicked();

    void on_BtnSumar_clicked();

    void on_BtnRestar_clicked();

    void on_BtnMultiplicar_clicked();

    void on_btnHacerMatrizTrans_clicked();

    void on_btnTransponer_clicked();

private:
    Ui::cframe *ui;

    int **matriz;
    int fil_col;
    int fil;
    int col;

    int fil1, col1;
    int fil2, col2;
    int** matriz1;
    int** matriz2;
    int** matriz3;


};
#endif // CFRAME_H
