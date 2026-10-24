#pragma once

// =============================================================================
// CRASH REPORT — what a fault leaves behind on Windows
// =============================================================================
//
// A Windows GUI process that faults just vanishes: no console, no dialog, and
// nothing in the install folder when that folder is not writable. This turns a
// fault into nocturne_crash.txt and, on the desktop, a message box naming the
// file. The report gives each stack frame as module+offset. For nocturne.exe,
// offset + ImageBase (0x140000000) is the address `nm` lists for the release
// binary.
//
// The file goes in the directory nocturne_crash_report_set_dir names, which is
// the run's user directory (core/path_roots.h). With none named, it goes under
// %LOCALAPPDATA%\NocturneDecomp on the desktop, else in the temp directory.
//
// A packaged app (UWP, the Xbox in Dev Mode) cannot put up a message box, and
// its own runtime stands between a fault and the process's unhandled-exception
// filter, so there the handler is a vectored one that reports the faults that
// end a process and lets everything else pass. The report still goes to stderr
// and the file.
//
// A no-op everywhere else: Linux and macOS already have core dumps and
// sanitizers, and a signal handler would only get in their way.

#ifdef __cplusplus
extern "C" {
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
