#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    centralWidget = new QWidget(this);
    layout = new QVBoxLayout(centralWidget);

    button = new QPushButton("Click Me", this);
    button->setStyleSheet("background-color: blue; color: white;");

    connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);

    layout->addWidget(button, 0, Qt::AlignBottom | Qt::AlignRight);

    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow() {}

void MainWindow::onButtonClicked() {
    QMessageBox::information(this, "Message", "Kushagra is awesome");
}
