#pragma once

// =============================================================================
// Debug Logger
// =============================================================================
// Writes to `nocturne_<subsys>.log` files in the working directory. Separate
// from the game's stderr.txt (which gets hijacked by _freopen early in init)
// and from sanitizer output (asan.log.*/ubsan.log.*).
//
// Available from any TU that includes nocturne.h (via shims include path)
// or directly via `#include "core/debug_log.h"`.
//
// Usage (default `nocturne_debug.log`):
//   DLOG("mounted %s: %d files", filename, count);
//   DLOG_IF(file_count > 100, "large POD: %s", name);
//   DWARN("unexpected: %s", reason);                     // warning → log + stderr
//   DERROR("fatal: %s", detail);                         // error   → log + stderr
//
// Subsystem-specific logs (each gets its own file):
//   DSND_LOG("Play: dev=%u looping=%d", dev, loop);      // → nocturne_dsound.log
//   DDRAW_LOG("Flip: surface=%p", surf);                  // → nocturne_ddraw.log
//   DLOG_EX("mysubsys", "anything %s", arg);              // → nocturne_mysubsys.log
//
// Rationale: shim traces (DirectSound / DirectDraw) fire hundreds of times
// per second and drown out game-side findFile / allocator traces in the
// shared log. One file per subsystem keeps each stream readable.
//
// DWARN/DERROR still mirror to stderr so they survive crashes before a log
// flush or a UI error dialog can render.
//
// All output is line-buffered and flushed immediately. Thread-safe via
// fprintf (which holds the FILE lock internally on glibc). First-call file
// registration is best-effort under contention; two threads racing to open
// the same subsystem can cause a truncated handle to leak. This has not been
// a problem in practice (first calls happen during single-threaded init).
//
// Define NOCTURNE_DISABLE_DLOG before including to compile out DLOG/DLOG_IF
// and the subsystem variants. DWARN and DERROR always stay live.

#include <cstdio>
#include <cstdarg>
#include <cstring>

// Strip the directory prefix from __FILE__ at compile time.
#define _DLOG_FILE (__builtin_strrchr(__FILE__, '/') \
    ? __builtin_strrchr(__FILE__, '/') + 1 : __FILE__)

// Lookup/open FILE* for a subsystem name. Files are named "nocturne_<subsys>.log"
// and truncated on the first call each run (matching the original DLOG behavior).
// Cache is a tiny fixed-size table — plenty for the handful of subsystems the
// shims/game instrumentation will ever use. Strings are pointer-compared first
// (fast path for string-literal call sites), then strcmp-compared as a fallback.
inline FILE* _dlog_get_file_named(const char* subsys) {
    enum { _DLOG_MAX_LOGS = 8 };
    static const char* s_names[_DLOG_MAX_LOGS];
    static FILE*       s_files[_DLOG_MAX_LOGS];
    static int         s_count = 0;

    for (int i = 0; i < s_count; i++) {
        if (s_names[i] == subsys) return s_files[i];
    }
    for (int i = 0; i < s_count; i++) {
        if (s_names[i] && strcmp(s_names[i], subsys) == 0) return s_files[i];
    }
    if (s_count >= _DLOG_MAX_LOGS) return nullptr;

    char path[128];
    snprintf(path, sizeof(path), "nocturne_%s.log", subsys);
    FILE* f = fopen(path, "w");
    if (f) setvbuf(f, nullptr, _IOLBF, 0);

    s_names[s_count] = subsys;
    s_files[s_count] = f;
    s_count++;
    return f;
}

// Backward-compatible default logger → nocturne_debug.log.
inline FILE* _dlog_get_file() {
    return _dlog_get_file_named("debug");
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
#define DLOG_EX(subsys, fmt, ...) ((void)0)
#define DLOG_IF_EX(subsys, cond, fmt, ...) ((void)0)
#define DSND_LOG(fmt, ...) ((void)0)
#define DDRAW_LOG(fmt, ...) ((void)0)
#define DLOG_RL_EX(subsys, first_n, every_n, fmt, ...) ((void)0)
#define DLOG_RL(first_n, every_n, fmt, ...) ((void)0)
#define DSND_LOG_RL(first_n, every_n, fmt, ...) ((void)0)
#define DDRAW_LOG_RL(first_n, every_n, fmt, ...) ((void)0)

#else

#define DLOG(fmt, ...) do { \
    FILE* _f = _dlog_get_file(); \
    if (_f) { fprintf(_f, "[%s:%d] " fmt "\n", _DLOG_FILE, __LINE__, ##__VA_ARGS__); } \
} while(0)

#define DLOG_IF(cond, fmt, ...) do { \
    if (cond) { DLOG(fmt, ##__VA_ARGS__); } \
} while(0)

// Write to a named subsystem log: nocturne_<subsys>.log
#define DLOG_EX(subsys, fmt, ...) do { \
    FILE* _f = _dlog_get_file_named(subsys); \
    if (_f) { fprintf(_f, "[%s:%d] " fmt "\n", _DLOG_FILE, __LINE__, ##__VA_ARGS__); } \
} while(0)

#define DLOG_IF_EX(subsys, cond, fmt, ...) do { \
    if (cond) { DLOG_EX(subsys, fmt, ##__VA_ARGS__); } \
} while(0)

// Convenience wrappers for the shim subsystems.
#define DSND_LOG(fmt, ...)  DLOG_EX("dsound", fmt, ##__VA_ARGS__)
#define DDRAW_LOG(fmt, ...) DLOG_EX("ddraw",  fmt, ##__VA_ARGS__)

// Rate-limited log: log the first `first_n` calls, then every `every_n`-th call.
// The tick number is prepended to the message as "#N ". Each call site has its
// own counter (the static lives inside the do-while block, function-static
// scope per call site). Use this for hot-path traces (per-frame, per-callback)
// that would otherwise flood the log.
//
// Examples:
//   DLOG_RL(8, 1000, "block off=%u bytes=%u", off, bytes);
//   DSND_LOG_RL(4, 200, "callback pc=%u", buf->play_cursor);
#define DLOG_RL_EX(subsys, first_n, every_n, fmt, ...) do { \
    static int _rl_tick = 0; \
    ++_rl_tick; \
    if (_rl_tick <= (first_n) || (_rl_tick % (every_n)) == 0) { \
        DLOG_EX(subsys, "#%d " fmt, _rl_tick, ##__VA_ARGS__); \
    } \
} while(0)

#define DLOG_RL(first_n, every_n, fmt, ...)       DLOG_RL_EX("debug",  first_n, every_n, fmt, ##__VA_ARGS__)
#define DSND_LOG_RL(first_n, every_n, fmt, ...)   DLOG_RL_EX("dsound", first_n, every_n, fmt, ##__VA_ARGS__)
#define DDRAW_LOG_RL(first_n, every_n, fmt, ...)  DLOG_RL_EX("ddraw",  first_n, every_n, fmt, ##__VA_ARGS__)

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
