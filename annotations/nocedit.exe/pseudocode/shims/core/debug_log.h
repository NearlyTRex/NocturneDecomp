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
// Usage — the subsystem is always the first argument, and names the file:
//   DLOG("render", "Flip: surface=%p", surf);            // → nocturne_render.log
//   DLOG_RL("render", 8, 1000, "draw n=%d", n);          // rate-limited variant
//
//   DWARN("unexpected: %s", reason);                     // warning → log + stderr
//   DERROR("fatal: %s", detail);                         // error   → log + stderr
//
// The subsystems in use. Prefer one of these over minting a new name — the
// value of a per-subsystem file comes from everything about a subsystem being
// in one place, and the cache below only holds _DLOG_MAX_LOGS of them:
//
//   "render"    GL context/present/blit/shader, trigl device, ddraw surface
//               emulation, builtin DLL registry, window mode
//   "netplay"   seeds, missions, respawn, desync, RNG, cheats, config, sockets
//   "sound"     mixer, voices, buffers, 3D attenuation
//   "frontend"  attract movies and fullscreen bitmap screens
//   "fileio"    POD mounts, findFile, search handlers
//   "input"     controller attach/detach, mappings, binding defaults
//
// Rationale: hot shim traces (renderer, sound) fire hundreds of times per
// second and drown out game-side findFile / allocator traces in a shared log.
// One file per subsystem keeps each stream readable.
//
// DWARN/DERROR carry no subsystem — they land in nocturne_debug.log and also
// mirror to stderr so they survive crashes before a log flush or a UI error
// dialog can render.
//
// For a conditional log, write the condition out: `if (cond) DLOG(...);`
//
// Every message is flushed as it is written, so a crash keeps everything up to
// it. That is spelled out per message rather than left to line buffering: the
// Microsoft runtimes treat _IOLBF as full buffering, and on them a log cut
// short by a crash stopped mid-line, a buffer's length in. Thread-safe via
// fprintf (which holds the FILE lock internally on glibc). First-call file
// registration is best-effort under contention; two threads racing to open
// the same subsystem can cause a truncated handle to leak. This has not been
// a problem in practice (first calls happen during single-threaded init).
//
// Define NOCTURNE_DISABLE_DLOG before including to compile out DLOG and
// DLOG_RL. DWARN and DERROR always stay live.

#include "watcom/path.h" // logs go where the other writes go

#include <cstdarg>
#include <cstdio>
#include <cstring>

// Strip the directory prefix from __FILE__.
constexpr const char *_dlog_leaf_after(const char *path, const char *leaf) {
    return *path == '\0'
               ? leaf
               : _dlog_leaf_after(path + 1, (*path == '/' || *path == '\\') ? path + 1 : leaf);
}
constexpr const char *_dlog_leaf(const char *path) {
    return _dlog_leaf_after(path, path);
}
#define _DLOG_FILE _dlog_leaf(__FILE__)

// Lookup/open FILE* for a subsystem name. Files are named "nocturne_<subsys>.log"
// and truncated on the first call each run (matching the original DLOG behavior).
// Cache is a tiny fixed-size table — plenty for the handful of subsystems the
// shims/game instrumentation will ever use. Strings are pointer-compared first
// (fast path for string-literal call sites), then strcmp-compared as a fallback.
inline FILE *_dlog_get_file_named(const char *subsys) {
    enum { _DLOG_MAX_LOGS = 8 };
    static const char *s_names[_DLOG_MAX_LOGS];
    static FILE *s_files[_DLOG_MAX_LOGS];
    static int s_count = 0;

    for (int i = 0; i < s_count; i++) {
        if (s_names[i] == subsys)
            return s_files[i];
    }
    for (int i = 0; i < s_count; i++) {
        if (strcmp(s_names[i], subsys) == 0)
            return s_files[i];
    }
    if (s_count >= _DLOG_MAX_LOGS)
        return nullptr;

    char path[128];
    snprintf(path, sizeof(path), "nocturne_%s.log", subsys);
    FILE *f = fopen(watcom_log_path(path).c_str(), "w");
    // A real size: the Microsoft runtimes reject 0 for _IOLBF as an invalid
    // parameter, which the statically linked UCRT treats as fatal.
    if (f)
        setvbuf(f, nullptr, _IOLBF, BUFSIZ);

    s_names[s_count] = subsys;
    s_files[s_count] = f;
    s_count++;
    return f;
}

// Sink for the subsystem-less DWARN/DERROR → nocturne_debug.log.
inline FILE *_dlog_get_file() {
    return _dlog_get_file_named("debug");
}

// One message to a log that may not have opened, flushed. A function rather than
// the macros' own `if`, so that check is one branch here and not one at every
// call site.
#if defined(__GNUC__) || defined(__clang__)
__attribute__((format(printf, 2, 3)))
#endif
inline void
_dlog_write(FILE *f, const char *fmt, ...) {
    if (!f)
        return;
    va_list args;
    va_start(args, fmt);
    vfprintf(f, fmt, args);
    va_end(args);
    fflush(f);
}

// -- Symbolized backtrace -----------------------------------------------------
// Under ASan we reuse its symbolizer (same output quality as ASan's own SEGV
// reports). Otherwise fall back to glibc's execinfo, which only resolves
// symbols when the main exe is linked with -rdynamic, but still prints addrs.

#if defined(__has_feature)
#if __has_feature(address_sanitizer)
#define _DLOG_HAS_ASAN 1
#endif
#endif
#if !defined(_DLOG_HAS_ASAN) && defined(__SANITIZE_ADDRESS__)
#define _DLOG_HAS_ASAN 1
#endif

// Walking your own stack is not something the language offers, so this is by
// host. A build with no way to do it still logs the warning that asked for the
// trace — losing the trace is worth strictly less than losing the message, and
// a host nobody has tried should not fail to compile over a diagnostic.
#if defined(_DLOG_HAS_ASAN)
extern "C" void __sanitizer_print_stack_trace(void);
inline void _dlog_print_backtrace() {
    __sanitizer_print_stack_trace();
}
#elif defined(__GLIBC__) || defined(__APPLE__) || defined(__FreeBSD__)
#include <execinfo.h>
inline void _dlog_print_backtrace() {
    void *frames[64];
    int n = backtrace(frames, 64);
    backtrace_symbols_fd(frames, n, 2 /* stderr */);
}
#else
inline void _dlog_print_backtrace() {}
#endif

#define DBACKTRACE() _dlog_print_backtrace()

#ifdef NOCTURNE_DISABLE_DLOG

#define DLOG(subsys, fmt, ...) ((void)0)
#define DLOG_RL(subsys, first_n, every_n, fmt, ...) ((void)0)

#else

// Write to a named subsystem log: nocturne_<subsys>.log
#define DLOG(subsys, fmt, ...)                                                                     \
    _dlog_write(_dlog_get_file_named(subsys), "[%s:%d] " fmt "\n", _DLOG_FILE, __LINE__,           \
                ##__VA_ARGS__)

// Rate-limited log: log the first `first_n` calls, then every `every_n`-th call.
// The tick number is prepended to the message as "#N ". Each call site has its
// own counter (the static lives inside the do-while block, function-static
// scope per call site). Use this for hot-path traces (per-frame, per-callback)
// that would otherwise flood the log.
//
// Example:
//   DLOG_RL("sound", 4, 200, "callback pc=%u", buf->play_cursor);
#define DLOG_RL(subsys, first_n, every_n, fmt, ...)                                                \
    do {                                                                                           \
        static int _rl_tick = 0;                                                                   \
        ++_rl_tick;                                                                                \
        if (_rl_tick <= (first_n) || (_rl_tick % (every_n)) == 0) {                                \
            DLOG(subsys, "#%d " fmt, _rl_tick, ##__VA_ARGS__);                                     \
        }                                                                                          \
    } while (0)

#endif

#define DWARN(fmt, ...)                                                                            \
    do {                                                                                           \
        _dlog_write(_dlog_get_file(), "[WARN  %s:%d] " fmt "\n", _DLOG_FILE, __LINE__,             \
                    ##__VA_ARGS__);                                                                \
        _dlog_write(stderr, "[WARN  %s:%d] " fmt "\n", _DLOG_FILE, __LINE__, ##__VA_ARGS__);       \
        DBACKTRACE();                                                                              \
    } while (0)

#define DERROR(fmt, ...)                                                                           \
    do {                                                                                           \
        _dlog_write(_dlog_get_file(), "[ERROR %s:%d] " fmt "\n", _DLOG_FILE, __LINE__,             \
                    ##__VA_ARGS__);                                                                \
        _dlog_write(stderr, "[ERROR %s:%d] " fmt "\n", _DLOG_FILE, __LINE__, ##__VA_ARGS__);       \
        DBACKTRACE();                                                                              \
    } while (0)
