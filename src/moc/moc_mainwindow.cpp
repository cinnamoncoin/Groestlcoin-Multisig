/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[122];
    char stringdata[1711];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 6), // "status"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "message"
QT_MOC_LITERAL(4, 27, 19), // "headersLoadProgress"
QT_MOC_LITERAL(5, 47, 16), // "updateSyncHeight"
QT_MOC_LITERAL(6, 64, 6), // "height"
QT_MOC_LITERAL(7, 71, 16), // "updateBestHeight"
QT_MOC_LITERAL(8, 88, 12), // "signal_error"
QT_MOC_LITERAL(9, 101, 11), // "vaultOpened"
QT_MOC_LITERAL(10, 113, 14), // "CoinDB::Vault*"
QT_MOC_LITERAL(11, 128, 5), // "vault"
QT_MOC_LITERAL(12, 134, 11), // "vaultClosed"
QT_MOC_LITERAL(13, 146, 21), // "signal_connectionOpen"
QT_MOC_LITERAL(14, 168, 23), // "signal_connectionClosed"
QT_MOC_LITERAL(15, 192, 21), // "signal_networkStarted"
QT_MOC_LITERAL(16, 214, 21), // "signal_networkStopped"
QT_MOC_LITERAL(17, 236, 21), // "signal_networkTimeout"
QT_MOC_LITERAL(18, 258, 22), // "signal_networkDoneSync"
QT_MOC_LITERAL(19, 281, 12), // "signal_newTx"
QT_MOC_LITERAL(20, 294, 15), // "signal_newBlock"
QT_MOC_LITERAL(21, 310, 22), // "signal_refreshAccounts"
QT_MOC_LITERAL(22, 333, 19), // "signal_addBestChain"
QT_MOC_LITERAL(23, 353, 14), // "chain_header_t"
QT_MOC_LITERAL(24, 368, 6), // "header"
QT_MOC_LITERAL(25, 375, 22), // "signal_removeBestChain"
QT_MOC_LITERAL(26, 398, 26), // "signal_currencyUnitChanged"
QT_MOC_LITERAL(27, 425, 10), // "unsignedTx"
QT_MOC_LITERAL(28, 436, 10), // "processUrl"
QT_MOC_LITERAL(29, 447, 3), // "url"
QT_MOC_LITERAL(30, 451, 11), // "processFile"
QT_MOC_LITERAL(31, 463, 8), // "fileName"
QT_MOC_LITERAL(32, 472, 14), // "processCommand"
QT_MOC_LITERAL(33, 487, 7), // "command"
QT_MOC_LITERAL(34, 495, 20), // "std::vector<QString>"
QT_MOC_LITERAL(35, 516, 4), // "args"
QT_MOC_LITERAL(36, 521, 11), // "updateFonts"
QT_MOC_LITERAL(37, 533, 8), // "fontSize"
QT_MOC_LITERAL(38, 542, 15), // "updateSyncLabel"
QT_MOC_LITERAL(39, 558, 18), // "updateNetworkState"
QT_MOC_LITERAL(40, 577, 15), // "network_state_t"
QT_MOC_LITERAL(41, 593, 8), // "newState"
QT_MOC_LITERAL(42, 602, 17), // "updateVaultStatus"
QT_MOC_LITERAL(43, 620, 4), // "name"
QT_MOC_LITERAL(44, 625, 9), // "showError"
QT_MOC_LITERAL(45, 635, 8), // "errorMsg"
QT_MOC_LITERAL(46, 644, 10), // "showUpdate"
QT_MOC_LITERAL(47, 655, 9), // "updateMsg"
QT_MOC_LITERAL(48, 665, 18), // "selectCurrencyUnit"
QT_MOC_LITERAL(49, 684, 21), // "newCurrencyUnitPrefix"
QT_MOC_LITERAL(50, 706, 22), // "selectTrailingDecimals"
QT_MOC_LITERAL(51, 729, 23), // "newShowTrailingDecimals"
QT_MOC_LITERAL(52, 753, 8), // "newVault"
QT_MOC_LITERAL(53, 762, 9), // "openVault"
QT_MOC_LITERAL(54, 772, 11), // "importVault"
QT_MOC_LITERAL(55, 784, 11), // "exportVault"
QT_MOC_LITERAL(56, 796, 14), // "exportPrivKeys"
QT_MOC_LITERAL(57, 811, 10), // "closeVault"
QT_MOC_LITERAL(58, 822, 11), // "newKeychain"
QT_MOC_LITERAL(59, 834, 14), // "unlockKeychain"
QT_MOC_LITERAL(60, 849, 12), // "lockKeychain"
QT_MOC_LITERAL(61, 862, 16), // "lockAllKeychains"
QT_MOC_LITERAL(62, 879, 21), // "setKeychainPassphrase"
QT_MOC_LITERAL(63, 901, 14), // "importKeychain"
QT_MOC_LITERAL(64, 916, 14), // "exportKeychain"
QT_MOC_LITERAL(65, 931, 13), // "exportPrivate"
QT_MOC_LITERAL(66, 945, 11), // "importBIP32"
QT_MOC_LITERAL(67, 957, 9), // "viewBIP32"
QT_MOC_LITERAL(68, 967, 11), // "viewPrivate"
QT_MOC_LITERAL(69, 979, 11), // "importBIP39"
QT_MOC_LITERAL(70, 991, 9), // "viewBIP39"
QT_MOC_LITERAL(71, 1001, 14), // "backupKeychain"
QT_MOC_LITERAL(72, 1016, 21), // "updateCurrentKeychain"
QT_MOC_LITERAL(73, 1038, 7), // "current"
QT_MOC_LITERAL(74, 1046, 8), // "previous"
QT_MOC_LITERAL(75, 1055, 23), // "updateSelectedKeychains"
QT_MOC_LITERAL(76, 1079, 14), // "QItemSelection"
QT_MOC_LITERAL(77, 1094, 8), // "selected"
QT_MOC_LITERAL(78, 1103, 10), // "deselected"
QT_MOC_LITERAL(79, 1114, 15), // "quickNewAccount"
QT_MOC_LITERAL(80, 1130, 10), // "newAccount"
QT_MOC_LITERAL(81, 1141, 13), // "importAccount"
QT_MOC_LITERAL(82, 1155, 13), // "exportAccount"
QT_MOC_LITERAL(83, 1169, 19), // "exportSharedAccount"
QT_MOC_LITERAL(84, 1189, 13), // "deleteAccount"
QT_MOC_LITERAL(85, 1203, 18), // "viewAccountHistory"
QT_MOC_LITERAL(86, 1222, 11), // "viewScripts"
QT_MOC_LITERAL(87, 1234, 14), // "requestPayment"
QT_MOC_LITERAL(88, 1249, 15), // "viewUnsignedTxs"
QT_MOC_LITERAL(89, 1265, 20), // "updateCurrentAccount"
QT_MOC_LITERAL(90, 1286, 22), // "updateSelectedAccounts"
QT_MOC_LITERAL(91, 1309, 15), // "refreshAccounts"
QT_MOC_LITERAL(92, 1325, 11), // "insertRawTx"
QT_MOC_LITERAL(93, 1337, 11), // "createRawTx"
QT_MOC_LITERAL(94, 1349, 8), // "createTx"
QT_MOC_LITERAL(95, 1358, 14), // "PaymentRequest"
QT_MOC_LITERAL(96, 1373, 14), // "paymentRequest"
QT_MOC_LITERAL(97, 1388, 9), // "signRawTx"
QT_MOC_LITERAL(98, 1398, 5), // "newTx"
QT_MOC_LITERAL(99, 1404, 9), // "sendRawTx"
QT_MOC_LITERAL(100, 1414, 10), // "syncBlocks"
QT_MOC_LITERAL(101, 1425, 15), // "fetchingHeaders"
QT_MOC_LITERAL(102, 1441, 14), // "headersSynched"
QT_MOC_LITERAL(103, 1456, 14), // "fetchingBlocks"
QT_MOC_LITERAL(104, 1471, 13), // "blocksSynched"
QT_MOC_LITERAL(105, 1485, 12), // "addBestChain"
QT_MOC_LITERAL(106, 1498, 15), // "removeBestChain"
QT_MOC_LITERAL(107, 1514, 8), // "newBlock"
QT_MOC_LITERAL(108, 1523, 16), // "startNetworkSync"
QT_MOC_LITERAL(109, 1540, 15), // "stopNetworkSync"
QT_MOC_LITERAL(110, 1556, 10), // "promptSync"
QT_MOC_LITERAL(111, 1567, 14), // "connectionOpen"
QT_MOC_LITERAL(112, 1582, 16), // "connectionClosed"
QT_MOC_LITERAL(113, 1599, 13), // "networkStatus"
QT_MOC_LITERAL(114, 1613, 12), // "networkError"
QT_MOC_LITERAL(115, 1626, 5), // "error"
QT_MOC_LITERAL(116, 1632, 14), // "networkStarted"
QT_MOC_LITERAL(117, 1647, 14), // "networkStopped"
QT_MOC_LITERAL(118, 1662, 14), // "networkTimeout"
QT_MOC_LITERAL(119, 1677, 15), // "networkSettings"
QT_MOC_LITERAL(120, 1693, 5), // "about"
QT_MOC_LITERAL(121, 1699, 11) // "errorStatus"

    },
    "MainWindow\0status\0\0message\0"
    "headersLoadProgress\0updateSyncHeight\0"
    "height\0updateBestHeight\0signal_error\0"
    "vaultOpened\0CoinDB::Vault*\0vault\0"
    "vaultClosed\0signal_connectionOpen\0"
    "signal_connectionClosed\0signal_networkStarted\0"
    "signal_networkStopped\0signal_networkTimeout\0"
    "signal_networkDoneSync\0signal_newTx\0"
    "signal_newBlock\0signal_refreshAccounts\0"
    "signal_addBestChain\0chain_header_t\0"
    "header\0signal_removeBestChain\0"
    "signal_currencyUnitChanged\0unsignedTx\0"
    "processUrl\0url\0processFile\0fileName\0"
    "processCommand\0command\0std::vector<QString>\0"
    "args\0updateFonts\0fontSize\0updateSyncLabel\0"
    "updateNetworkState\0network_state_t\0"
    "newState\0updateVaultStatus\0name\0"
    "showError\0errorMsg\0showUpdate\0updateMsg\0"
    "selectCurrencyUnit\0newCurrencyUnitPrefix\0"
    "selectTrailingDecimals\0newShowTrailingDecimals\0"
    "newVault\0openVault\0importVault\0"
    "exportVault\0exportPrivKeys\0closeVault\0"
    "newKeychain\0unlockKeychain\0lockKeychain\0"
    "lockAllKeychains\0setKeychainPassphrase\0"
    "importKeychain\0exportKeychain\0"
    "exportPrivate\0importBIP32\0viewBIP32\0"
    "viewPrivate\0importBIP39\0viewBIP39\0"
    "backupKeychain\0updateCurrentKeychain\0"
    "current\0previous\0updateSelectedKeychains\0"
    "QItemSelection\0selected\0deselected\0"
    "quickNewAccount\0newAccount\0importAccount\0"
    "exportAccount\0exportSharedAccount\0"
    "deleteAccount\0viewAccountHistory\0"
    "viewScripts\0requestPayment\0viewUnsignedTxs\0"
    "updateCurrentAccount\0updateSelectedAccounts\0"
    "refreshAccounts\0insertRawTx\0createRawTx\0"
    "createTx\0PaymentRequest\0paymentRequest\0"
    "signRawTx\0newTx\0sendRawTx\0syncBlocks\0"
    "fetchingHeaders\0headersSynched\0"
    "fetchingBlocks\0blocksSynched\0addBestChain\0"
    "removeBestChain\0newBlock\0startNetworkSync\0"
    "stopNetworkSync\0promptSync\0connectionOpen\0"
    "connectionClosed\0networkStatus\0"
    "networkError\0error\0networkStarted\0"
    "networkStopped\0networkTimeout\0"
    "networkSettings\0about\0errorStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     102,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  524,    2, 0x06 /* Public */,
       4,    1,  527,    2, 0x06 /* Public */,
       5,    1,  530,    2, 0x06 /* Public */,
       7,    1,  533,    2, 0x06 /* Public */,
       8,    1,  536,    2, 0x06 /* Public */,
       9,    1,  539,    2, 0x06 /* Public */,
      12,    0,  542,    2, 0x06 /* Public */,
      13,    0,  543,    2, 0x06 /* Public */,
      14,    0,  544,    2, 0x06 /* Public */,
      15,    0,  545,    2, 0x06 /* Public */,
      16,    0,  546,    2, 0x06 /* Public */,
      17,    0,  547,    2, 0x06 /* Public */,
      18,    0,  548,    2, 0x06 /* Public */,
      19,    0,  549,    2, 0x06 /* Public */,
      20,    0,  550,    2, 0x06 /* Public */,
      21,    0,  551,    2, 0x06 /* Public */,
      22,    1,  552,    2, 0x06 /* Public */,
      25,    1,  555,    2, 0x06 /* Public */,
      26,    0,  558,    2, 0x06 /* Public */,
      27,    0,  559,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    1,  560,    2, 0x0a /* Public */,
      30,    1,  563,    2, 0x0a /* Public */,
      32,    2,  566,    2, 0x0a /* Public */,
      36,    1,  571,    2, 0x09 /* Protected */,
      38,    0,  574,    2, 0x09 /* Protected */,
      39,    1,  575,    2, 0x09 /* Protected */,
      42,    1,  578,    2, 0x09 /* Protected */,
      42,    0,  581,    2, 0x29 /* Protected | MethodCloned */,
      44,    1,  582,    2, 0x09 /* Protected */,
      46,    1,  585,    2, 0x09 /* Protected */,
      48,    0,  588,    2, 0x08 /* Private */,
      48,    1,  589,    2, 0x08 /* Private */,
      50,    1,  592,    2, 0x08 /* Private */,
      52,    1,  595,    2, 0x08 /* Private */,
      52,    0,  598,    2, 0x28 /* Private | MethodCloned */,
      53,    1,  599,    2, 0x08 /* Private */,
      53,    0,  602,    2, 0x28 /* Private | MethodCloned */,
      54,    1,  603,    2, 0x08 /* Private */,
      54,    0,  606,    2, 0x28 /* Private | MethodCloned */,
      55,    2,  607,    2, 0x08 /* Private */,
      55,    1,  612,    2, 0x28 /* Private | MethodCloned */,
      55,    0,  615,    2, 0x28 /* Private | MethodCloned */,
      57,    0,  616,    2, 0x08 /* Private */,
      58,    0,  617,    2, 0x08 /* Private */,
      59,    1,  618,    2, 0x08 /* Private */,
      59,    0,  621,    2, 0x28 /* Private | MethodCloned */,
      60,    1,  622,    2, 0x08 /* Private */,
      60,    0,  625,    2, 0x28 /* Private | MethodCloned */,
      61,    0,  626,    2, 0x08 /* Private */,
      62,    0,  627,    2, 0x08 /* Private */,
      63,    1,  628,    2, 0x08 /* Private */,
      63,    0,  631,    2, 0x28 /* Private | MethodCloned */,
      64,    1,  632,    2, 0x08 /* Private */,
      66,    0,  635,    2, 0x08 /* Private */,
      67,    1,  636,    2, 0x08 /* Private */,
      69,    0,  639,    2, 0x08 /* Private */,
      70,    0,  640,    2, 0x08 /* Private */,
      71,    0,  641,    2, 0x08 /* Private */,
      72,    2,  642,    2, 0x08 /* Private */,
      75,    2,  647,    2, 0x08 /* Private */,
      79,    0,  652,    2, 0x08 /* Private */,
      80,    0,  653,    2, 0x08 /* Private */,
      81,    1,  654,    2, 0x08 /* Private */,
      81,    0,  657,    2, 0x28 /* Private | MethodCloned */,
      82,    0,  658,    2, 0x08 /* Private */,
      83,    0,  659,    2, 0x08 /* Private */,
      84,    0,  660,    2, 0x08 /* Private */,
      85,    0,  661,    2, 0x08 /* Private */,
      86,    0,  662,    2, 0x08 /* Private */,
      87,    0,  663,    2, 0x08 /* Private */,
      88,    0,  664,    2, 0x08 /* Private */,
      89,    2,  665,    2, 0x08 /* Private */,
      90,    2,  670,    2, 0x08 /* Private */,
      91,    0,  675,    2, 0x08 /* Private */,
      92,    0,  676,    2, 0x08 /* Private */,
      93,    0,  677,    2, 0x08 /* Private */,
      94,    1,  678,    2, 0x08 /* Private */,
      94,    0,  681,    2, 0x28 /* Private | MethodCloned */,
      97,    0,  682,    2, 0x08 /* Private */,
      98,    0,  683,    2, 0x08 /* Private */,
      99,    0,  684,    2, 0x08 /* Private */,
     100,    0,  685,    2, 0x08 /* Private */,
     101,    0,  686,    2, 0x08 /* Private */,
     102,    0,  687,    2, 0x08 /* Private */,
     103,    0,  688,    2, 0x08 /* Private */,
     104,    0,  689,    2, 0x08 /* Private */,
     105,    1,  690,    2, 0x08 /* Private */,
     106,    1,  693,    2, 0x08 /* Private */,
     107,    0,  696,    2, 0x08 /* Private */,
     108,    0,  697,    2, 0x08 /* Private */,
     109,    0,  698,    2, 0x08 /* Private */,
     110,    0,  699,    2, 0x08 /* Private */,
     111,    0,  700,    2, 0x08 /* Private */,
     112,    0,  701,    2, 0x08 /* Private */,
     113,    1,  702,    2, 0x08 /* Private */,
     114,    1,  705,    2, 0x08 /* Private */,
     116,    0,  708,    2, 0x08 /* Private */,
     117,    0,  709,    2, 0x08 /* Private */,
     118,    0,  710,    2, 0x08 /* Private */,
     119,    0,  711,    2, 0x08 /* Private */,
     120,    0,  712,    2, 0x08 /* Private */,
     121,    1,  713,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,   29,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 34,   33,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   31,   56,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   43,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   65,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   73,   74,
    QMetaType::Void, 0x80000000 | 76, 0x80000000 | 76,   77,   78,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   73,   74,
    QMetaType::Void, 0x80000000 | 76, 0x80000000 | 76,   77,   78,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 95,   96,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    1,
    QMetaType::Void, QMetaType::QString,  115,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->headersLoadProgress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateSyncHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateBestHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->signal_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->vaultOpened((*reinterpret_cast< CoinDB::Vault*(*)>(_a[1]))); break;
        case 6: _t->vaultClosed(); break;
        case 7: _t->signal_connectionOpen(); break;
        case 8: _t->signal_connectionClosed(); break;
        case 9: _t->signal_networkStarted(); break;
        case 10: _t->signal_networkStopped(); break;
        case 11: _t->signal_networkTimeout(); break;
        case 12: _t->signal_networkDoneSync(); break;
        case 13: _t->signal_newTx(); break;
        case 14: _t->signal_newBlock(); break;
        case 15: _t->signal_refreshAccounts(); break;
        case 16: _t->signal_addBestChain((*reinterpret_cast< const chain_header_t(*)>(_a[1]))); break;
        case 17: _t->signal_removeBestChain((*reinterpret_cast< const chain_header_t(*)>(_a[1]))); break;
        case 18: _t->signal_currencyUnitChanged(); break;
        case 19: _t->unsignedTx(); break;
        case 20: _t->processUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 21: _t->processFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->processCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::vector<QString>(*)>(_a[2]))); break;
        case 23: _t->updateFonts((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->updateSyncLabel(); break;
        case 25: _t->updateNetworkState((*reinterpret_cast< network_state_t(*)>(_a[1]))); break;
        case 26: _t->updateVaultStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->updateVaultStatus(); break;
        case 28: _t->showError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->showUpdate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->selectCurrencyUnit(); break;
        case 31: _t->selectCurrencyUnit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->selectTrailingDecimals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->newVault((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->newVault(); break;
        case 35: _t->openVault((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->openVault(); break;
        case 37: _t->importVault((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->importVault(); break;
        case 39: _t->exportVault((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->exportVault((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->exportVault(); break;
        case 42: _t->closeVault(); break;
        case 43: _t->newKeychain(); break;
        case 44: { bool _r = _t->unlockKeychain((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->unlockKeychain();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: _t->lockKeychain((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 47: _t->lockKeychain(); break;
        case 48: _t->lockAllKeychains(); break;
        case 49: _t->setKeychainPassphrase(); break;
        case 50: _t->importKeychain((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 51: _t->importKeychain(); break;
        case 52: _t->exportKeychain((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->importBIP32(); break;
        case 54: _t->viewBIP32((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->importBIP39(); break;
        case 56: _t->viewBIP39(); break;
        case 57: _t->backupKeychain(); break;
        case 58: _t->updateCurrentKeychain((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 59: _t->updateSelectedKeychains((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 60: _t->quickNewAccount(); break;
        case 61: _t->newAccount(); break;
        case 62: _t->importAccount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 63: _t->importAccount(); break;
        case 64: _t->exportAccount(); break;
        case 65: _t->exportSharedAccount(); break;
        case 66: _t->deleteAccount(); break;
        case 67: _t->viewAccountHistory(); break;
        case 68: _t->viewScripts(); break;
        case 69: _t->requestPayment(); break;
        case 70: _t->viewUnsignedTxs(); break;
        case 71: _t->updateCurrentAccount((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 72: _t->updateSelectedAccounts((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 73: _t->refreshAccounts(); break;
        case 74: _t->insertRawTx(); break;
        case 75: _t->createRawTx(); break;
        case 76: _t->createTx((*reinterpret_cast< const PaymentRequest(*)>(_a[1]))); break;
        case 77: _t->createTx(); break;
        case 78: _t->signRawTx(); break;
        case 79: _t->newTx(); break;
        case 80: _t->sendRawTx(); break;
        case 81: _t->syncBlocks(); break;
        case 82: _t->fetchingHeaders(); break;
        case 83: _t->headersSynched(); break;
        case 84: _t->fetchingBlocks(); break;
        case 85: _t->blocksSynched(); break;
        case 86: _t->addBestChain((*reinterpret_cast< const chain_header_t(*)>(_a[1]))); break;
        case 87: _t->removeBestChain((*reinterpret_cast< const chain_header_t(*)>(_a[1]))); break;
        case 88: _t->newBlock(); break;
        case 89: _t->startNetworkSync(); break;
        case 90: _t->stopNetworkSync(); break;
        case 91: _t->promptSync(); break;
        case 92: _t->connectionOpen(); break;
        case 93: _t->connectionClosed(); break;
        case 94: _t->networkStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 95: _t->networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 96: _t->networkStarted(); break;
        case 97: _t->networkStopped(); break;
        case 98: _t->networkTimeout(); break;
        case 99: _t->networkSettings(); break;
        case 100: _t->about(); break;
        case 101: _t->errorStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::status)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::headersLoadProgress)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::updateSyncHeight)) {
                *result = 2;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::updateBestHeight)) {
                *result = 3;
            }
        }
        {
            typedef void (MainWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_error)) {
                *result = 4;
            }
        }
        {
            typedef void (MainWindow::*_t)(CoinDB::Vault * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::vaultOpened)) {
                *result = 5;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::vaultClosed)) {
                *result = 6;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_connectionOpen)) {
                *result = 7;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_connectionClosed)) {
                *result = 8;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_networkStarted)) {
                *result = 9;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_networkStopped)) {
                *result = 10;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_networkTimeout)) {
                *result = 11;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_networkDoneSync)) {
                *result = 12;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_newTx)) {
                *result = 13;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_newBlock)) {
                *result = 14;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_refreshAccounts)) {
                *result = 15;
            }
        }
        {
            typedef void (MainWindow::*_t)(const chain_header_t & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_addBestChain)) {
                *result = 16;
            }
        }
        {
            typedef void (MainWindow::*_t)(const chain_header_t & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_removeBestChain)) {
                *result = 17;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signal_currencyUnitChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::unsignedTx)) {
                *result = 19;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 102)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 102;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 102)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 102;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::status(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::headersLoadProgress(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::updateSyncHeight(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::updateBestHeight(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::signal_error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::vaultOpened(CoinDB::Vault * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::vaultClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void MainWindow::signal_connectionOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void MainWindow::signal_connectionClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void MainWindow::signal_networkStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void MainWindow::signal_networkStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void MainWindow::signal_networkTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void MainWindow::signal_networkDoneSync()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void MainWindow::signal_newTx()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void MainWindow::signal_newBlock()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void MainWindow::signal_refreshAccounts()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void MainWindow::signal_addBestChain(const chain_header_t & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindow::signal_removeBestChain(const chain_header_t & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MainWindow::signal_currencyUnitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, Q_NULLPTR);
}

// SIGNAL 19
void MainWindow::unsignedTx()
{
    QMetaObject::activate(this, &staticMetaObject, 19, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE