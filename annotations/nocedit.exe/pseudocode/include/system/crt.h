#pragma once

// =============================================================================
// C RUNTIME LIBRARY HEADERS
// =============================================================================
//
// Auto-generated header that includes standard C library headers based on
// which CRT functions are used in the decompiled code.
//
// The CRT function transform in transforms.py converts CRT wrapper calls
// like crt_stdio_c_fread_FUN_005fd990() to standard calls like fread().
// This header provides the declarations for those standard functions.
//
// Implementations are in shims/crt.cpp.
//
// =============================================================================

// Standard C library headers (C++ style)
#include <cctype>
#include <cerrno>
#include <cmath>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
// ---------------------------------------------------------------------------
// String Comparison
// ---------------------------------------------------------------------------

extern int _strcmp(char* s1, char* s2);
extern int _stricmp(char* s1, char* s2);
extern int _strnicmp(char* s1, char* s2, size_t n);

#ifndef _MSC_VER
#define stricmp _stricmp
#define strnicmp _strnicmp
#endif // _MSC_VER

// ---------------------------------------------------------------------------
// Compiler Builtins
// ---------------------------------------------------------------------------

#define builtin_strncpy(dst, src, n) strncpy(dst, src, n)

// ---------------------------------------------------------------------------
// String Conversion
// ---------------------------------------------------------------------------

extern char* strupr(char* s);
extern char* strlwr(char* s);
extern double _strtod(const char* str);

#ifndef _MSC_VER
#define _strupr strupr
#define _strlwr strlwr
#endif // _MSC_VER

// ---------------------------------------------------------------------------
// Path Manipulation
// ---------------------------------------------------------------------------

extern void splitpath(const char* path, char* drive, char* dir, char* fname, char* ext);
extern void makepath(char* path, const char* drive, const char* dir, const char* fname, const char* ext);

#ifndef _MSC_VER
#define _splitpath splitpath
#define _makepath makepath
#endif // _MSC_VER

// ---------------------------------------------------------------------------
// File Manipulation
// ---------------------------------------------------------------------------

struct _FILE;  // Forward declaration (defined in system/stdio.h)

extern FILE* _FILE_to_FILE(_FILE* f);

extern _FILE* _fopen(const char* filename, const char* mode);
extern int _fclose(_FILE* f);
extern int _fflush(_FILE* f);
extern int _feof(_FILE* f);
extern int _ferror(_FILE* f);
extern long _ftell(_FILE* f);
extern void _rewind(_FILE* f);
extern int _fgetc(_FILE* f);
extern int _fputc(int c, _FILE* f);
extern int _ungetc(int c, _FILE* f);
extern char* _fgets(char* s, int n, _FILE* f);
extern int _fputs(const char* s, _FILE* f);
extern size_t _fread(void* ptr, size_t size, size_t count, _FILE* f);
extern size_t _fwrite(const void* ptr, size_t size, size_t count, _FILE* f);
extern int _fseek(_FILE* f, long offset, int whence);
extern int _fsetpos(_FILE* f, const fpos_t* pos);
extern int _fgetpos(_FILE* f, fpos_t* pos);
extern int _setvbuf(_FILE* f, char* buf, int mode, size_t size);
extern void _setbuf(_FILE* f, char* buf);
__attribute__((format(printf, 2, 3)))
extern int _fprintf(_FILE* f, const char* format, ...);
__attribute__((format(scanf, 2, 3)))
extern int _fscanf(_FILE* f, const char* format, ...);
extern _FILE* _freopen(const char* filename, const char* mode, _FILE* stream);

// ---------------------------------------------------------------------------
// Printf/Scanf Type Bridges
// ---------------------------------------------------------------------------
//
// Ghidra uses va_list_t (struct { char* args; }) instead of va_list,
// and some callers pass undefined1* (unsigned char*) buffers.
// These wrappers bridge the Ghidra types to standard C types.
//

#include "system/stdarg.h"  // For va_list_t

extern int _vsprintf(char* buffer, const char* format, va_list_t args);
__attribute__((format(printf, 2, 3)))
extern int _sprintf(void* buffer, const char* format, ...);

// ---------------------------------------------------------------------------
// String Type Bridges
// ---------------------------------------------------------------------------

extern char* _strncpy(void* dest, const void* src, size_t count);

// ---------------------------------------------------------------------------
// Time Manipulation
// ---------------------------------------------------------------------------

struct _tm;  // Forward declaration

extern time_t _mktime(_tm* t);
extern _tm* _localtime(const void* timer);
extern time_t _time(int* timer);
extern char* _asctime(_tm* timeptr);
extern size_t _strftime(char* dest_buffer, size_t buffer_size, const char* format_string, _tm* time_ptr);

// ---------------------------------------------------------------------------
// Sorting
// ---------------------------------------------------------------------------
//
// Templated to accept any comparator function pointer type, since Ghidra
// types comparators with specific param types (e.g., int(SFace**, SFace**))
// instead of the generic int(void*, void*) that qsort expects.
//

template<typename CompFunc>
inline void _qsort(void* base, size_t num, size_t size, CompFunc compar) {
    (void)base; (void)num; (void)size; (void)compar;
}

// ---------------------------------------------------------------------------
// File Status / Timestamps
// ---------------------------------------------------------------------------

#include <sys/stat.h>
#include <sys/types.h>
#include <utime.h>

extern int getFileStat(const char* path, struct _stat* buf);
extern int _utime(const char* path, void* times);

