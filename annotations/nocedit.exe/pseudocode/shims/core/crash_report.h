#pragma once

// =============================================================================
// CRASH REPORT — what a fault leaves behind
// =============================================================================
//
// A Windows GUI process that faults just vanishes: no console, no dialog, and
// nothing in the install folder when that folder is not writable. So does a
// game on a console. This turns a fault into nocturne_crash.txt, and on the
// Windows desktop a message box naming the file.
//
// The file goes in the directory nocturne_crash_report_set_dir names, which is
// the run's user directory (core/path_roots.h). With none named, on Windows it
// goes under %LOCALAPPDATA%\NocturneDecomp on the desktop, else in the temp
// directory; elsewhere only to stderr.
//
// On Windows the report gives each stack frame as module+offset. For
// nocturne.exe, offset + ImageBase (0x140000000) is the address `nm` lists for
// the release binary. A packaged app (UWP, and so the Xbox) cannot put up a
// message box, and its own runtime stands between a fault and the process's
// unhandled-exception filter, so there the handler is a vectored one that
// reports the faults that end a process and lets everything else pass.
//
// Elsewhere it is a handler for the signals a fault raises, for a platform with
// no core dump to fall back on — a PlayStation's, a Switch's — which the
// platform file asks for with NOCTURNE_PLATFORM_CRASH_SIGNALS=1. It names the
// signal and, where the C library can walk the stack, the frames; then it ends
// the process as the signal would have. Off, as on Linux and macOS, nothing is
// installed: core dumps and the sanitizers already cover them, and a handler
// would only get in their way.

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(_WIN32)
// Whether the signal handler is installed: NOCTURNE_PLATFORM_CRASH_SIGNALS.
extern int g_nocturne_crash_signals;
#endif

// Call once, as early as possible. `version` is copied into the report and
// must outlive the process (nocturne_version_line() does).
void nocturne_install_crash_handler(const char *version);

// Where the report is written; copied, so `dir` need not outlive the call. An
// empty or null `dir` is the fallback above.
void nocturne_crash_report_set_dir(const char *dir);

#ifdef __cplusplus
}
#endif
