#ifndef QUAZIP_QT6_GLOBAL_H
#define QUAZIP_QT6_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QUAZIP_QT6_LIBRARY)
#  define QUAZIP_QT6_EXPORT Q_DECL_EXPORT
#else
#  define QUAZIP_QT6_EXPORT Q_DECL_IMPORT
#endif

#endif // QUAZIP_QT6_GLOBAL_H
