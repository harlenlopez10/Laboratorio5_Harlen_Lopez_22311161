/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Inicio;
    QPushButton *btnCERRAR;
    QPushButton *ButtonExercise1;
    QPushButton *ButtonExercise2;
    QPushButton *ButtonExercise3;
    QPushButton *ButtonExercise4;
    QWidget *Ejercicio1;
    QLabel *label_8;
    QPushButton *BtnSumar;
    QPushButton *BtnRestar;
    QPushButton *BtnMultiplicar;
    QSpinBox *sB_Col1;
    QTableWidget *tW_tabla1;
    QPushButton *btnHacerMatrices;
    QLabel *label_21;
    QLabel *label_22;
    QSpinBox *sB_Fil1;
    QSpinBox *sB_Fil2;
    QLabel *label_23;
    QSpinBox *sB_Col2;
    QLabel *label_24;
    QTableWidget *tW_tabla2;
    QFrame *line;
    QFrame *line_2;
    QTableWidget *tW_Resultado;
    QWidget *Ejercicio2;
    QSpinBox *num_buscar;
    QSpinBox *sB_Fil;
    QPushButton *Buscar_n;
    QPushButton *pushButton_2;
    QTableWidget *tW_tabla;
    QLabel *label_3;
    QSpinBox *sB_Col;
    QLabel *mostrar_info2;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_11;
    QWidget *Ejercicio3;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_13;
    QTableWidget *tW_tabla4;
    QSpinBox *sB_Fil3;
    QPushButton *btnHacerMatrizTrans;
    QLabel *label_5;
    QSpinBox *sB_Col3;
    QPushButton *btnTransponer;
    QWidget *Ejercicio4;
    QPushButton *TransponerMatriz;
    QSpinBox *sB_Fil_Col;
    QTableWidget *tW_Mostrar;
    QLabel *label;
    QLabel *label_10;
    QLabel *label_12;
    QPushButton *BTNRETURN;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName("cframe");
        cframe->resize(1257, 923);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 60, 1221, 791));
        Inicio = new QWidget();
        Inicio->setObjectName("Inicio");
        btnCERRAR = new QPushButton(Inicio);
        btnCERRAR->setObjectName("btnCERRAR");
        btnCERRAR->setGeometry(QRect(440, 370, 201, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(14);
        font.setBold(true);
        btnCERRAR->setFont(font);
        btnCERRAR->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        ButtonExercise1 = new QPushButton(Inicio);
        ButtonExercise1->setObjectName("ButtonExercise1");
        ButtonExercise1->setGeometry(QRect(450, 50, 181, 61));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        ButtonExercise1->setFont(font1);
        ButtonExercise2 = new QPushButton(Inicio);
        ButtonExercise2->setObjectName("ButtonExercise2");
        ButtonExercise2->setGeometry(QRect(450, 130, 181, 61));
        ButtonExercise2->setFont(font1);
        ButtonExercise3 = new QPushButton(Inicio);
        ButtonExercise3->setObjectName("ButtonExercise3");
        ButtonExercise3->setGeometry(QRect(450, 210, 181, 61));
        ButtonExercise3->setFont(font1);
        ButtonExercise4 = new QPushButton(Inicio);
        ButtonExercise4->setObjectName("ButtonExercise4");
        ButtonExercise4->setGeometry(QRect(450, 290, 181, 61));
        ButtonExercise4->setFont(font1);
        stackedWidget->addWidget(Inicio);
        Ejercicio1 = new QWidget();
        Ejercicio1->setObjectName("Ejercicio1");
        label_8 = new QLabel(Ejercicio1);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 10, 171, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        label_8->setFont(font2);
        BtnSumar = new QPushButton(Ejercicio1);
        BtnSumar->setObjectName("BtnSumar");
        BtnSumar->setGeometry(QRect(30, 70, 131, 51));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        BtnSumar->setFont(font3);
        BtnRestar = new QPushButton(Ejercicio1);
        BtnRestar->setObjectName("BtnRestar");
        BtnRestar->setGeometry(QRect(30, 130, 131, 51));
        BtnRestar->setFont(font3);
        BtnMultiplicar = new QPushButton(Ejercicio1);
        BtnMultiplicar->setObjectName("BtnMultiplicar");
        BtnMultiplicar->setGeometry(QRect(30, 190, 171, 51));
        BtnMultiplicar->setFont(font3);
        sB_Col1 = new QSpinBox(Ejercicio1);
        sB_Col1->setObjectName("sB_Col1");
        sB_Col1->setGeometry(QRect(400, 80, 71, 31));
        sB_Col1->setFont(font3);
        tW_tabla1 = new QTableWidget(Ejercicio1);
        tW_tabla1->setObjectName("tW_tabla1");
        tW_tabla1->setGeometry(QRect(250, 130, 471, 291));
        btnHacerMatrices = new QPushButton(Ejercicio1);
        btnHacerMatrices->setObjectName("btnHacerMatrices");
        btnHacerMatrices->setGeometry(QRect(680, 60, 131, 61));
        btnHacerMatrices->setFont(font3);
        btnHacerMatrices->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        label_21 = new QLabel(Ejercicio1);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(400, 50, 101, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(true);
        label_21->setFont(font4);
        label_22 = new QLabel(Ejercicio1);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(270, 50, 101, 31));
        label_22->setFont(font4);
        sB_Fil1 = new QSpinBox(Ejercicio1);
        sB_Fil1->setObjectName("sB_Fil1");
        sB_Fil1->setGeometry(QRect(270, 80, 71, 31));
        sB_Fil1->setFont(font3);
        sB_Fil2 = new QSpinBox(Ejercicio1);
        sB_Fil2->setObjectName("sB_Fil2");
        sB_Fil2->setGeometry(QRect(900, 80, 71, 31));
        sB_Fil2->setFont(font3);
        label_23 = new QLabel(Ejercicio1);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(1010, 50, 101, 31));
        label_23->setFont(font4);
        sB_Col2 = new QSpinBox(Ejercicio1);
        sB_Col2->setObjectName("sB_Col2");
        sB_Col2->setGeometry(QRect(1010, 80, 71, 31));
        sB_Col2->setFont(font3);
        label_24 = new QLabel(Ejercicio1);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(900, 50, 101, 31));
        label_24->setFont(font4);
        tW_tabla2 = new QTableWidget(Ejercicio1);
        tW_tabla2->setObjectName("tW_tabla2");
        tW_tabla2->setGeometry(QRect(760, 130, 451, 291));
        line = new QFrame(Ejercicio1);
        line->setObjectName("line");
        line->setGeometry(QRect(730, 130, 31, 291));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(false);
        line->setFont(font5);
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(Ejercicio1);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(250, 420, 971, 31));
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        tW_Resultado = new QTableWidget(Ejercicio1);
        tW_Resultado->setObjectName("tW_Resultado");
        tW_Resultado->setGeometry(QRect(510, 440, 451, 321));
        stackedWidget->addWidget(Ejercicio1);
        label_8->raise();
        BtnSumar->raise();
        BtnRestar->raise();
        BtnMultiplicar->raise();
        sB_Col1->raise();
        tW_tabla1->raise();
        label_21->raise();
        label_22->raise();
        sB_Fil1->raise();
        sB_Fil2->raise();
        label_23->raise();
        sB_Col2->raise();
        label_24->raise();
        tW_tabla2->raise();
        line->raise();
        line_2->raise();
        tW_Resultado->raise();
        btnHacerMatrices->raise();
        Ejercicio2 = new QWidget();
        Ejercicio2->setObjectName("Ejercicio2");
        num_buscar = new QSpinBox(Ejercicio2);
        num_buscar->setObjectName("num_buscar");
        num_buscar->setGeometry(QRect(20, 300, 81, 41));
        num_buscar->setFont(font3);
        sB_Fil = new QSpinBox(Ejercicio2);
        sB_Fil->setObjectName("sB_Fil");
        sB_Fil->setGeometry(QRect(20, 140, 101, 31));
        sB_Fil->setFont(font3);
        Buscar_n = new QPushButton(Ejercicio2);
        Buscar_n->setObjectName("Buscar_n");
        Buscar_n->setGeometry(QRect(20, 360, 191, 91));
        Buscar_n->setFont(font3);
        pushButton_2 = new QPushButton(Ejercicio2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 150, 131, 61));
        pushButton_2->setFont(font3);
        tW_tabla = new QTableWidget(Ejercicio2);
        tW_tabla->setObjectName("tW_tabla");
        tW_tabla->setGeometry(QRect(540, 50, 481, 351));
        label_3 = new QLabel(Ejercicio2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 180, 101, 31));
        label_3->setFont(font4);
        sB_Col = new QSpinBox(Ejercicio2);
        sB_Col->setObjectName("sB_Col");
        sB_Col->setGeometry(QRect(20, 210, 101, 31));
        sB_Col->setFont(font3);
        mostrar_info2 = new QLabel(Ejercicio2);
        mostrar_info2->setObjectName("mostrar_info2");
        mostrar_info2->setGeometry(QRect(0, 430, 591, 41));
        mostrar_info2->setFont(font4);
        label_6 = new QLabel(Ejercicio2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 270, 411, 31));
        label_6->setFont(font4);
        label_2 = new QLabel(Ejercicio2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 110, 101, 31));
        label_2->setFont(font4);
        label_7 = new QLabel(Ejercicio2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 10, 171, 31));
        label_7->setFont(font2);
        label_11 = new QLabel(Ejercicio2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 80, 491, 31));
        label_11->setFont(font4);
        stackedWidget->addWidget(Ejercicio2);
        Ejercicio3 = new QWidget();
        Ejercicio3->setObjectName("Ejercicio3");
        label_9 = new QLabel(Ejercicio3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 10, 171, 31));
        label_9->setFont(font2);
        label_4 = new QLabel(Ejercicio3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 200, 101, 31));
        label_4->setFont(font4);
        label_13 = new QLabel(Ejercicio3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(60, 100, 491, 31));
        label_13->setFont(font4);
        tW_tabla4 = new QTableWidget(Ejercicio3);
        tW_tabla4->setObjectName("tW_tabla4");
        tW_tabla4->setGeometry(QRect(580, 70, 481, 351));
        sB_Fil3 = new QSpinBox(Ejercicio3);
        sB_Fil3->setObjectName("sB_Fil3");
        sB_Fil3->setGeometry(QRect(60, 160, 101, 31));
        sB_Fil3->setFont(font3);
        btnHacerMatrizTrans = new QPushButton(Ejercicio3);
        btnHacerMatrizTrans->setObjectName("btnHacerMatrizTrans");
        btnHacerMatrizTrans->setGeometry(QRect(200, 170, 131, 61));
        btnHacerMatrizTrans->setFont(font3);
        label_5 = new QLabel(Ejercicio3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 130, 101, 31));
        label_5->setFont(font4);
        sB_Col3 = new QSpinBox(Ejercicio3);
        sB_Col3->setObjectName("sB_Col3");
        sB_Col3->setGeometry(QRect(60, 230, 101, 31));
        sB_Col3->setFont(font3);
        btnTransponer = new QPushButton(Ejercicio3);
        btnTransponer->setObjectName("btnTransponer");
        btnTransponer->setGeometry(QRect(80, 310, 201, 71));
        btnTransponer->setFont(font3);
        stackedWidget->addWidget(Ejercicio3);
        Ejercicio4 = new QWidget();
        Ejercicio4->setObjectName("Ejercicio4");
        TransponerMatriz = new QPushButton(Ejercicio4);
        TransponerMatriz->setObjectName("TransponerMatriz");
        TransponerMatriz->setGeometry(QRect(40, 230, 171, 81));
        TransponerMatriz->setFont(font4);
        sB_Fil_Col = new QSpinBox(Ejercicio4);
        sB_Fil_Col->setObjectName("sB_Fil_Col");
        sB_Fil_Col->setGeometry(QRect(40, 160, 91, 41));
        sB_Fil_Col->setFont(font4);
        tW_Mostrar = new QTableWidget(Ejercicio4);
        tW_Mostrar->setObjectName("tW_Mostrar");
        tW_Mostrar->setGeometry(QRect(440, 80, 581, 471));
        label = new QLabel(Ejercicio4);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 120, 121, 31));
        label->setFont(font4);
        label_10 = new QLabel(Ejercicio4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 20, 171, 31));
        label_10->setFont(font2);
        label_12 = new QLabel(Ejercicio4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 80, 491, 31));
        label_12->setFont(font4);
        stackedWidget->addWidget(Ejercicio4);
        BTNRETURN = new QPushButton(centralwidget);
        BTNRETURN->setObjectName("BTNRETURN");
        BTNRETURN->setGeometry(QRect(1050, 0, 141, 51));
        BTNRETURN->setFont(font3);
        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1257, 21));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName("statusbar");
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QCoreApplication::translate("cframe", "cframe", nullptr));
        btnCERRAR->setText(QCoreApplication::translate("cframe", "Cerrar Programa", nullptr));
        ButtonExercise1->setText(QCoreApplication::translate("cframe", "Ejercicio 1", nullptr));
        ButtonExercise2->setText(QCoreApplication::translate("cframe", "Ejercicio 2", nullptr));
        ButtonExercise3->setText(QCoreApplication::translate("cframe", "Ejercicio 3", nullptr));
        ButtonExercise4->setText(QCoreApplication::translate("cframe", "Ejercicio 4", nullptr));
        label_8->setText(QCoreApplication::translate("cframe", "Ejercicio 1", nullptr));
        BtnSumar->setText(QCoreApplication::translate("cframe", "Sumar Matrices", nullptr));
        BtnRestar->setText(QCoreApplication::translate("cframe", "Restar Matrices", nullptr));
        BtnMultiplicar->setText(QCoreApplication::translate("cframe", "Multiplicar Matrices", nullptr));
        btnHacerMatrices->setText(QCoreApplication::translate("cframe", "Hacer Matrices", nullptr));
        label_21->setText(QCoreApplication::translate("cframe", "Columnas:", nullptr));
        label_22->setText(QCoreApplication::translate("cframe", "Filas:", nullptr));
        label_23->setText(QCoreApplication::translate("cframe", "Columnas:", nullptr));
        label_24->setText(QCoreApplication::translate("cframe", "Filas:", nullptr));
        Buscar_n->setText(QCoreApplication::translate("cframe", "Buscar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cframe", "Hacer Matriz", nullptr));
        label_3->setText(QCoreApplication::translate("cframe", "Columnas:", nullptr));
        mostrar_info2->setText(QString());
        label_6->setText(QCoreApplication::translate("cframe", "Ingrese el numero del cual quierer saber su posicion: ", nullptr));
        label_2->setText(QCoreApplication::translate("cframe", "Filas:", nullptr));
        label_7->setText(QCoreApplication::translate("cframe", "Ejercicio 2", nullptr));
        label_11->setText(QCoreApplication::translate("cframe", "Ingrese el numero de Filas y Columnas que desea para la Matriz", nullptr));
        label_9->setText(QCoreApplication::translate("cframe", "Ejercicio 3", nullptr));
        label_4->setText(QCoreApplication::translate("cframe", "Columnas:", nullptr));
        label_13->setText(QCoreApplication::translate("cframe", "Ingrese el numero de Filas y Columnas que desea para la Matriz", nullptr));
        btnHacerMatrizTrans->setText(QCoreApplication::translate("cframe", "Hacer Matriz", nullptr));
        label_5->setText(QCoreApplication::translate("cframe", "Filas:", nullptr));
        btnTransponer->setText(QCoreApplication::translate("cframe", "Transponer", nullptr));
        TransponerMatriz->setText(QCoreApplication::translate("cframe", "Rotar matriz", nullptr));
        label->setText(QCoreApplication::translate("cframe", "FIlas/Columnas: ", nullptr));
        label_10->setText(QCoreApplication::translate("cframe", "Ejercicio 4", nullptr));
        label_12->setText(QCoreApplication::translate("cframe", "Ingrese un numero para Rotar la Matriz", nullptr));
        BTNRETURN->setText(QCoreApplication::translate("cframe", "Regresar al Men\303\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
