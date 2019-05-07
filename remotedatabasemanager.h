#ifndef REMOTEDATABASEMANAGER_H
#define REMOTEDATABASEMANAGER_H

#include <QObject>

class RemoteDatabaseManager : public QObject
{
    Q_OBJECT
public:
    explicit RemoteDatabaseManager(QString  host, QString port, QString name, QString user, QString password, QObject *parent = nullptr);
    bool init();
    QStringList getAll(QString table);
    void addRecord(QString table, int id, QStringList data);
    void editRecord(QString table, int id, QStringList data);
    void deleteRecord(QString table, int id);

signals:

public slots:
};

#endif // REMOTEDATABASEMANAGER_H
