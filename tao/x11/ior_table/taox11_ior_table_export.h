/**
 * @file    taox11_ior_table_export.h
 * @author  Marcel Smit
 *
 * @brief   Export file for the TAOX11 IOR_TABLE library
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
#ifndef TAOX11_IOR_TABLE_EXPORT_H
#define TAOX11_IOR_TABLE_EXPORT_H

#include "tao/x11/base/taox11_export_macros.h"

#if defined (TAOX11_AS_STATIC_LIBS) && !defined (TAOX11_IOR_TABLE_HAS_DLL)
#  define TAOX11_IOR_TABLE_HAS_DLL 0
#endif /* TAOX11_AS_STATIC_LIBS && TAOX11_IOR_TABLE_HAS_DLL */

#if !defined (TAOX11_IOR_TABLE_HAS_DLL)
#  define TAOX11_IOR_TABLE_HAS_DLL 1
#endif /* ! TAOX11_IOR_TABLE_HAS_DLL */

#if defined (TAOX11_IOR_TABLE_HAS_DLL) && (TAOX11_IOR_TABLE_HAS_DLL == 1)
#  if defined (TAOX11_IOR_TABLE_BUILD_DLL)
#    define TAOX11_IORTable_Export TAOX11_Proper_Export_Flag
#    define TAOX11_IOR_TABLE_SINGLETON_DECLARATION(T) TAOX11_EXPORT_SINGLETON_DECLARATION (T)
#    define TAOX11_IOR_TABLE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) TAOX11_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* TAOX11_IOR_TABLE_BUILD_DLL */
#    define TAOX11_IORTable_Export TAOX11_Proper_Import_Flag
#    define TAOX11_IOR_TABLE_SINGLETON_DECLARATION(T) TAOX11_IMPORT_SINGLETON_DECLARATION (T)
#    define TAOX11_IOR_TABLE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) TAOX11_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* TAOX11_IOR_TABLE_BUILD_DLL */
#else /* TAOX11_IOR_TABLE_HAS_DLL == 1 */
#  define TAOX11_IORTable_Export
#  define TAOX11_IOR_TABLE_SINGLETON_DECLARATION(T)
#  define TAOX11_IOR_TABLE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* TAOX11_IOR_TABLE_HAS_DLL == 1 */

#endif /* TAOX11_IOR_TABLE_EXPORT_H */
