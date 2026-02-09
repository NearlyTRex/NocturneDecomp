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

#ifndef _MSC_VER
#define stricmp strcasecmp
#define _stricmp strcasecmp
#define strnicmp strncasecmp
#define _strnicmp strncasecmp
#endif // _MSC_VER

// ---------------------------------------------------------------------------
// Compiler Builtins
// ---------------------------------------------------------------------------

#define builtin_strncpy(dst, src, n) strncpy(dst, src, n)

// ---------------------------------------------------------------------------
// String Conversion
// ---------------------------------------------------------------------------

#ifndef _MSC_VER
inline char* strupr(char* s) { for (char* p = s; *p; ++p) *p = toupper(*p); return s; }
inline char* strlwr(char* s) { for (char* p = s; *p; ++p) *p = tolower(*p); return s; }
#define _strupr strupr
#define _strlwr strlwr
inline double _strtod(const char* str) {
    return strtod(str, nullptr);
}
#endif // _MSC_VER

// ---------------------------------------------------------------------------
// Path Manipulation
// ---------------------------------------------------------------------------

#ifndef _MSC_VER

inline void splitpath(const char* path, char* drive, char* dir, char* fname, char* ext) {
    if (drive) drive[0] = 0;
    if (dir) dir[0] = 0;
    if (fname) strcpy(fname, path);
    if (ext) ext[0] = 0;
}

inline void makepath(char* path, const char* drive, const char* dir, const char* fname, const char* ext) {
    path[0] = 0;
    if (drive && drive[0]) { strcat(path, drive); strcat(path, ":"); }
    if (dir && dir[0]) strcat(path, dir);
    if (fname && fname[0]) strcat(path, fname);
    if (ext && ext[0]) { strcat(path, "."); strcat(path, ext); }
}

#define _splitpath splitpath
#define _makepath makepath

#endif // _MSC_VER

// ---------------------------------------------------------------------------
// File Manipulation
// ---------------------------------------------------------------------------

struct _FILE;  // Forward declaration (defined in system/stdio.h)

inline FILE* _FILE_to_FILE(_FILE* f) {
    return reinterpret_cast<FILE*>(f);
}

inline _FILE* _fopen(const char* filename, const char* mode) {
    return reinterpret_cast<_FILE*>(fopen(filename, mode));
}

inline int _fclose(_FILE* f) {
    return fclose(_FILE_to_FILE(f));
}

inline int _fflush(_FILE* f) {
    return fflush(_FILE_to_FILE(f));
}

inline int _feof(_FILE* f) {
    return feof(_FILE_to_FILE(f));
}

inline int _ferror(_FILE* f) {
    return ferror(_FILE_to_FILE(f));
}

inline long _ftell(_FILE* f) {
    return ftell(_FILE_to_FILE(f));
}

inline void _rewind(_FILE* f) {
    rewind(_FILE_to_FILE(f));
}

inline int _fgetc(_FILE* f) {
    return fgetc(_FILE_to_FILE(f));
}

inline int _fputc(int c, _FILE* f) {
    return fputc(c, _FILE_to_FILE(f));
}

inline int _ungetc(int c, _FILE* f) {
    return ungetc(c, _FILE_to_FILE(f));
}

inline char* _fgets(char* s, int n, _FILE* f) {
    return fgets(s, n, _FILE_to_FILE(f));
}

inline int _fputs(const char* s, _FILE* f) {
    return fputs(s, _FILE_to_FILE(f));
}

inline size_t _fread(void* ptr, size_t size, size_t count, _FILE* f) {
    return fread(ptr, size, count, _FILE_to_FILE(f));
}

inline size_t _fwrite(const void* ptr, size_t size, size_t count, _FILE* f) {
    return fwrite(ptr, size, count, _FILE_to_FILE(f));
}

inline int _fseek(_FILE* f, long offset, int whence) {
    return fseek(_FILE_to_FILE(f), offset, whence);
}

inline int _fsetpos(_FILE* f, const fpos_t* pos) {
    return fsetpos(_FILE_to_FILE(f), pos);
}

inline int _fgetpos(_FILE* f, fpos_t* pos) {
    return fgetpos(_FILE_to_FILE(f), pos);
}

inline int _setvbuf(_FILE* f, char* buf, int mode, size_t size) {
    return setvbuf(_FILE_to_FILE(f), buf, mode, size);
}

inline void _setbuf(_FILE* f, char* buf) {
    setbuf(_FILE_to_FILE(f), buf);
}

__attribute__((format(printf, 2, 3)))
inline int _fprintf(_FILE* f, const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vfprintf(_FILE_to_FILE(f), format, args);
    va_end(args);
    return result;
}

__attribute__((format(scanf, 2, 3)))
inline int _fscanf(_FILE* f, const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vfscanf(_FILE_to_FILE(f), format, args);
    va_end(args);
    return result;
}

inline _FILE* _freopen(const char* filename, const char* mode, _FILE* stream) {
    return reinterpret_cast<_FILE*>(freopen(filename, mode, _FILE_to_FILE(stream)));
}

// ---------------------------------------------------------------------------
// Printf/Scanf Type Bridges
// ---------------------------------------------------------------------------
//
// Ghidra uses va_list_t (struct { char* args; }) instead of va_list,
// and some callers pass undefined1* (unsigned char*) buffers.
// These wrappers bridge the Ghidra types to standard C types.
//

#include "system/stdarg.h"  // For va_list_t

inline int _vsprintf(char* buffer, const char* format, va_list_t args) {
    return vsprintf(buffer, format, reinterpret_cast<va_list&>(args));
}

__attribute__((format(printf, 2, 3)))
inline int _sprintf(void* buffer, const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vsprintf((char*)buffer, format, args);
    va_end(args);
    return result;
}

// ---------------------------------------------------------------------------
// String Type Bridges
// ---------------------------------------------------------------------------

inline char* _strncpy(void* dest, const void* src, size_t count) {
    return strncpy((char*)dest, (const char*)src, count);
}

// ---------------------------------------------------------------------------
// Time Manipulation
// ---------------------------------------------------------------------------

struct _tm;  // Forward declaration

inline time_t _mktime(_tm* t) {
    return mktime(reinterpret_cast<tm*>(t));
}

inline _tm* _localtime(const void* timer) {
    return reinterpret_cast<_tm*>(localtime(reinterpret_cast<const time_t*>(timer)));
}

inline time_t _time(time_t* timer) {
    return time(timer);
}

inline char* _asctime(_tm* timeptr) {
    return asctime(reinterpret_cast<tm*>(timeptr));
}

inline size_t _strftime(char* dest_buffer, size_t buffer_size, const char* format_string, _tm* time_ptr) {
    return strftime(dest_buffer, buffer_size, format_string, reinterpret_cast<tm*>(time_ptr));
}

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

