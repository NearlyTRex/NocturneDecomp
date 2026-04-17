#pragma once

// =============================================================================
// Debug Logger
// =============================================================================
// Writes to `nocturne_debug.log` in the working directory. Separate from
// the game's stderr.txt (which gets hijacked by _freopen early in init)
// and from sanitizer output (asan.log.*/ubsan.log.*).
//
// Available from any TU that includes nocturne.h (via shims include path)
// or directly via `#include "debug_log.h"`.
//
// Usage:
//   DLOG("mounted %s: %d files", filename, count);
//   DLOG_IF(file_count > 100, "large POD: %s", name);
//
// All output is line-buffered and flushed immediately. Thread-safe via
// fprintf (which holds the FILE lock internally on glibc).
//
// Define NOCTURNE_DISABLE_DLOG before including to compile out all logging.

#include <cstdio>
#include <cstdarg>

#ifdef NOCTURNE_DISABLE_DLOG

#define DLOG(fmt, ...) ((void)0)
#define DLOG_IF(cond, fmt, ...) ((void)0)

#else

inline FILE* _dlog_get_file() {
    static FILE* f = nullptr;
    if (!f) {
        f = fopen("nocturne_debug.log", "w");
        if (f) setvbuf(f, nullptr, _IOLBF, 0);
    }
    return f;
}

// Strip the directory prefix from __FILE__ at compile time.
#define _DLOG_FILE (__builtin_strrchr(__FILE__, '/') \
    ? __builtin_strrchr(__FILE__, '/') + 1 : __FILE__)

#define DLOG(fmt, ...) do { \
    FILE* _f = _dlog_get_file(); \
    if (_f) { fprintf(_f, "[%s:%d] " fmt "\n", _DLOG_FILE, __LINE__, ##__VA_ARGS__); } \
} while(0)

#define DLOG_IF(cond, fmt, ...) do { \
    if (cond) { DLOG(fmt, ##__VA_ARGS__); } \
} while(0)

#endif
