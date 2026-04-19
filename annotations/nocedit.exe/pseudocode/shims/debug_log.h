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
//   DLOG("mounted %s: %d files", filename, count);      // info → log file only
//   DLOG_IF(file_count > 100, "large POD: %s", name);
//   DWARN("unexpected: %s", reason);                     // warning → log + stderr
//   DERROR("fatal: %s", detail);                         // error   → log + stderr
//
// DLOG goes only to `nocturne_debug.log`. DWARN/DERROR additionally mirror
// to stderr so they survive even if the game crashes before the log file is
// flushed or before a UI error dialog can be shown.
//
// All output is line-buffered and flushed immediately. Thread-safe via
// fprintf (which holds the FILE lock internally on glibc).
//
// Define NOCTURNE_DISABLE_DLOG before including to compile out DLOG/DLOG_IF.
// DWARN and DERROR always stay live — they're for things you need to see.

#include <cstdio>
#include <cstdarg>

// Strip the directory prefix from __FILE__ at compile time.
#define _DLOG_FILE (__builtin_strrchr(__FILE__, '/') \
    ? __builtin_strrchr(__FILE__, '/') + 1 : __FILE__)

inline FILE* _dlog_get_file() {
    static FILE* f = nullptr;
    if (!f) {
        f = fopen("nocturne_debug.log", "w");
        if (f) setvbuf(f, nullptr, _IOLBF, 0);
    }
    return f;
}

// -- Symbolized backtrace -----------------------------------------------------
// Under ASan we reuse its symbolizer (same output quality as ASan's own SEGV
// reports). Otherwise fall back to glibc's execinfo, which only resolves
// symbols when the main exe is linked with -rdynamic, but still prints addrs.

#if defined(__has_feature)
#  if __has_feature(address_sanitizer)
#    define _DLOG_HAS_ASAN 1
#  endif
#endif
#if !defined(_DLOG_HAS_ASAN) && defined(__SANITIZE_ADDRESS__)
#  define _DLOG_HAS_ASAN 1
#endif

#if defined(_DLOG_HAS_ASAN)
extern "C" void __sanitizer_print_stack_trace(void);
inline void _dlog_print_backtrace() { __sanitizer_print_stack_trace(); }
#else
#include <execinfo.h>
inline void _dlog_print_backtrace() {
    void* frames[64];
    int n = backtrace(frames, 64);
    backtrace_symbols_fd(frames, n, 2 /* stderr */);
}
#endif

#define DBACKTRACE() _dlog_print_backtrace()

#ifdef NOCTURNE_DISABLE_DLOG

#define DLOG(fmt, ...) ((void)0)
#define DLOG_IF(cond, fmt, ...) ((void)0)

#else

#define DLOG(fmt, ...) do { \
    FILE* _f = _dlog_get_file(); \
    if (_f) { fprintf(_f, "[%s:%d] " fmt "\n", _DLOG_FILE, __LINE__, ##__VA_ARGS__); } \
} while(0)

#define DLOG_IF(cond, fmt, ...) do { \
    if (cond) { DLOG(fmt, ##__VA_ARGS__); } \
} while(0)

#endif

#define DWARN(fmt, ...) do { \
    FILE* _f = _dlog_get_file(); \
    if (_f) { fprintf(_f, "[WARN  %s:%d] " fmt "\n", _DLOG_FILE, __LINE__, ##__VA_ARGS__); } \
    fprintf(stderr, "[WARN  %s:%d] " fmt "\n", _DLOG_FILE, __LINE__, ##__VA_ARGS__); \
    fflush(stderr); \
    DBACKTRACE(); \
} while(0)

#define DERROR(fmt, ...) do { \
    FILE* _f = _dlog_get_file(); \
    if (_f) { fprintf(_f, "[ERROR %s:%d] " fmt "\n", _DLOG_FILE, __LINE__, ##__VA_ARGS__); } \
    fprintf(stderr, "[ERROR %s:%d] " fmt "\n", _DLOG_FILE, __LINE__, ##__VA_ARGS__); \
    fflush(stderr); \
    DBACKTRACE(); \
} while(0)
