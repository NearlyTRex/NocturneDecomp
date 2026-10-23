#pragma once

// =============================================================================
// CRASH REPORT — what a fault leaves behind on Windows
// =============================================================================
//
// A Windows GUI process that faults just vanishes: no console, no dialog, and
// nothing in the install folder when that folder is not writable. This turns an
// unhandled exception into nocturne_crash.txt under %LOCALAPPDATA%\NocturneDecomp
// (the temp directory if that cannot be written) and a message box naming the
// file. The report gives each stack frame as module+offset. For nocturne.exe,
// offset + ImageBase (0x140000000) is the address `nm` lists for the release
// binary.
//
// A no-op everywhere else: Linux and macOS already have core dumps and
// sanitizers, and a signal handler would only get in their way.

#ifdef __cplusplus
extern "C" {
#endif

// Call once, as early as possible. `version` is copied into the report and
// must outlive the process (nocturne_version_line() does).
void nocturne_install_crash_handler(const char *version);

#ifdef __cplusplus
}
#endif
