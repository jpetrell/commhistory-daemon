/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c AccountPresenceIfAdaptor -a accountpresenceifadaptor AccountPresenceIf.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ACCOUNTPRESENCEIFADAPTOR_H_1362717597
#define ACCOUNTPRESENCEIFADAPTOR_H_1362717597

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface org.nemomobile.AccountPresenceIf
 */
class AccountPresenceIfAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.nemomobile.AccountPresenceIf")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.nemomobile.AccountPresenceIf\">\n"
"    <method name=\"setGlobalPresence\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"state\"/>\n"
"    </method>\n"
"    <method name=\"setGlobalPresenceWithMessage\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"state\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"message\"/>\n"
"    </method>\n"
"    <method name=\"setAccountPresence\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"accountUri\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"state\"/>\n"
"    </method>\n"
"    <method name=\"setAccountPresenceWithMessage\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"accountUri\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"state\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"message\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    AccountPresenceIfAdaptor(QObject *parent);
    virtual ~AccountPresenceIfAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void setAccountPresence(const QString &accountUri, int state);
    void setAccountPresenceWithMessage(const QString &accountUri, int state, const QString &message);
    void setGlobalPresence(int state);
    void setGlobalPresenceWithMessage(int state, const QString &message);
Q_SIGNALS: // SIGNALS
};

#endif
