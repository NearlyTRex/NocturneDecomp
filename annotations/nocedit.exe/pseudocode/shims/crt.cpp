// =============================================================================
// CRT SHIM - Cross-platform C Runtime bridge implementations
// =============================================================================
//
// Provides implementations for CRT bridge functions that map Ghidra's
// decompiled types (e.g., _FILE*, _tm*) to standard C library types.
// These were previously inline functions in system/crt.h.
//

#include "system/crt.h"

// ---------------------------------------------------------------------------
// String Comparison
// ---------------------------------------------------------------------------

int _strcmp(char* s1, char* s2) {
    return strcmp(s1, s2);
}

int _stricmp(char* s1, char* s2) {
    return strcasecmp(s1, s2);
}

int _strnicmp(char* s1, char* s2, size_t n) {
    return strncasecmp(s1, s2, n);
}

// ---------------------------------------------------------------------------
// String Conversion
// ---------------------------------------------------------------------------

char* strupr(char* s) {
    for (char* p = s; *p; ++p) *p = toupper(*p);
    return s;
}

char* strlwr(char* s) {
    for (char* p = s; *p; ++p) *p = tolower(*p);
    return s;
}

double _strtod(const char* str) {
    return strtod(str, nullptr);
}

// ---------------------------------------------------------------------------
// Path Manipulation
// ---------------------------------------------------------------------------

void splitpath(const char* path, char* drive, char* dir, char* fname, char* ext) {
    if (drive) drive[0] = 0;

    // Find last separator
    const char* last_sep = nullptr;
    for (const char* p = path; *p; ++p) {
        if (*p == '/' || *p == '\\') last_sep = p;
    }

    // Find last dot (after last separator)
    const char* last_dot = nullptr;
    const char* fname_start = last_sep ? last_sep + 1 : path;
    for (const char* p = fname_start; *p; ++p) {
        if (*p == '.') last_dot = p;
    }

    if (dir) {
        if (last_sep) {
            size_t len = last_sep - path + 1;
            strncpy(dir, path, len);
            dir[len] = 0;
        } else {
            dir[0] = 0;
        }
    }

    if (fname) {
        const char* end = last_dot ? last_dot : fname_start + strlen(fname_start);
        size_t len = end - fname_start;
        strncpy(fname, fname_start, len);
        fname[len] = 0;
    }

    if (ext) {
        if (last_dot) {
            strcpy(ext, last_dot);
        } else {
            ext[0] = 0;
        }
    }
}

void makepath(char* path, const char* drive, const char* dir, const char* fname, const char* ext) {
    path[0] = 0;
    if (drive && drive[0]) { strcat(path, drive); strcat(path, ":"); }
    if (dir && dir[0]) strcat(path, dir);
    if (fname && fname[0]) strcat(path, fname);
    if (ext && ext[0]) { strcat(path, "."); strcat(path, ext); }
}

// ---------------------------------------------------------------------------
// File Type Bridge
// ---------------------------------------------------------------------------

FILE* _FILE_to_FILE(_FILE* f) {
    return reinterpret_cast<FILE*>(f);
}

// ---------------------------------------------------------------------------
// File Manipulation
// ---------------------------------------------------------------------------

_FILE* _fopen(const char* filename, const char* mode) {
    return reinterpret_cast<_FILE*>(fopen(filename, mode));
}

int _fclose(_FILE* f) {
    return fclose(_FILE_to_FILE(f));
}

int _fflush(_FILE* f) {
    return fflush(_FILE_to_FILE(f));
}

int _feof(_FILE* f) {
    return feof(_FILE_to_FILE(f));
}

int _ferror(_FILE* f) {
    return ferror(_FILE_to_FILE(f));
}

long _ftell(_FILE* f) {
    return ftell(_FILE_to_FILE(f));
}

void _rewind(_FILE* f) {
    rewind(_FILE_to_FILE(f));
}

int _fgetc(_FILE* f) {
    return fgetc(_FILE_to_FILE(f));
}

int _fputc(int c, _FILE* f) {
    return fputc(c, _FILE_to_FILE(f));
}

int _ungetc(int c, _FILE* f) {
    return ungetc(c, _FILE_to_FILE(f));
}

char* _fgets(char* s, int n, _FILE* f) {
    return fgets(s, n, _FILE_to_FILE(f));
}

int _fputs(const char* s, _FILE* f) {
    return fputs(s, _FILE_to_FILE(f));
}

size_t _fread(void* ptr, size_t size, size_t count, _FILE* f) {
    return fread(ptr, size, count, _FILE_to_FILE(f));
}

size_t _fwrite(const void* ptr, size_t size, size_t count, _FILE* f) {
    return fwrite(ptr, size, count, _FILE_to_FILE(f));
}

int _fseek(_FILE* f, long offset, int whence) {
    return fseek(_FILE_to_FILE(f), offset, whence);
}

int _fsetpos(_FILE* f, const fpos_t* pos) {
    return fsetpos(_FILE_to_FILE(f), pos);
}

int _fgetpos(_FILE* f, fpos_t* pos) {
    return fgetpos(_FILE_to_FILE(f), pos);
}

int _setvbuf(_FILE* f, char* buf, int mode, size_t size) {
    return setvbuf(_FILE_to_FILE(f), buf, mode, size);
}

void _setbuf(_FILE* f, char* buf) {
    setbuf(_FILE_to_FILE(f), buf);
}

int _fprintf(_FILE* f, const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vfprintf(_FILE_to_FILE(f), format, args);
    va_end(args);
    return result;
}

int _fscanf(_FILE* f, const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vfscanf(_FILE_to_FILE(f), format, args);
    va_end(args);
    return result;
}

_FILE* _freopen(const char* filename, const char* mode, _FILE* stream) {
    return reinterpret_cast<_FILE*>(freopen(filename, mode, _FILE_to_FILE(stream)));
}

// ---------------------------------------------------------------------------
// Printf/Scanf Type Bridges
// ---------------------------------------------------------------------------

int _vsprintf(char* buffer, const char* format, va_list_t args) {
    return vsprintf(buffer, format, reinterpret_cast<va_list&>(args));
}

int _sprintf(void* buffer, const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vsprintf((char*)buffer, format, args);
    va_end(args);
    return result;
}

// ---------------------------------------------------------------------------
// String Type Bridges
// ---------------------------------------------------------------------------

char* _strncpy(void* dest, const void* src, size_t count) {
    return strncpy((char*)dest, (const char*)src, count);
}

// ---------------------------------------------------------------------------
// Time Manipulation
// ---------------------------------------------------------------------------

time_t _mktime(_tm* t) {
    return mktime(reinterpret_cast<tm*>(t));
}

_tm* _localtime(const void* timer) {
    return reinterpret_cast<_tm*>(localtime(reinterpret_cast<const time_t*>(timer)));
}

time_t _time(int* timer) {
    time_t t = time(nullptr);
    if (timer) *timer = (int)t;
    return t;
}

char* _asctime(_tm* timeptr) {
    return asctime(reinterpret_cast<tm*>(timeptr));
}

size_t _strftime(char* dest_buffer, size_t buffer_size, const char* format_string, _tm* time_ptr) {
    return strftime(dest_buffer, buffer_size, format_string, reinterpret_cast<tm*>(time_ptr));
}

// ---------------------------------------------------------------------------
// Sorting
// ---------------------------------------------------------------------------

// Note: _qsort is a template in the header and remains there.
// The template instantiation happens at each call site.

// ---------------------------------------------------------------------------
// File Status / Timestamps
// ---------------------------------------------------------------------------

int getFileStat(const char* path, struct _stat* buf) {
    return stat(path, (struct stat*)buf);
}

int _utime(const char* path, void* times) {
    return utime(path, (struct utimbuf*)times);
}
