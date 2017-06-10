
#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include<QTextEdit>
#include <QDir>

class QComboBox;
class QLabel;
class QPushButton;
class QTableWidget;
class QTableWidgetItem;


class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);

private slots:
    void browse();
    void find();
    void openFileOfItem(int row, int column);


private:
    QStringList findFiles(const QStringList &files, const QString &text);
    void showFiles(const QStringList &files);
    QComboBox *createComboBox(const QString &text = QString());
    void createFilesTable();
    void display(QStringList list);

    QLabel *directoryLabel;
    QLabel *filesFoundLabel;
    QPushButton *browseButton;
    QPushButton *findButton;
    QTableWidget *filesTable;
    QLabel *textLabel;
    QDir currentDir;
    QTextEdit *textedit;
    QComboBox *fileComboBox;
    QComboBox *textComboBox;
    QComboBox *directoryComboBox;
    QLabel *fileLabel;
};

#endif
