#pragma once

// =============================================================================
// SETTINGS IN NOCTURNE.INI
// =============================================================================
//
// The shim settings that live beside the game's own in system\nocturne.ini —
// window mode, menu and OS fonts, movie volume, cheats, the epilogue unlock —
// read and written through the engine's own CIni accessors, so the file stays
// the one the game reads and writes.
//
// One hazard decides the shape of the read. CIni::getProfileString has no
// initialised-guard: if it cannot open the file it calls
// displayErrorAndQuit("Unable to open input") and takes the process with it.
// Several of these settings are read during startup, before anything has
// written the file, so every read first checks the file is there — through
// watcom_resolve_fs_path, the '\' -> '/' and case-insensitive resolution the CRT
// _fopen shim applies, so the probe looks at the file the engine will open.
//
// Each caller keeps its own range check: the engine returns whatever integer
// the file holds.

// Same path inivar.cpp uses.
#define NOCTURNE_INI_PATH ".\\system\\nocturne.ini"

#ifdef __cplusplus
extern "C" {
#endif

// 1 when NOCTURNE_INI_PATH exists.
int nocturne_ini_exists(void);

// `key` in `section`, or `fallback` when the key is absent or the file does
// not exist yet.
int nocturne_ini_get_int(const char *section, const char *key, int fallback);

// Writes `value` as `key` in `section`, creating the file if need be.
void nocturne_ini_set_int(const char *section, const char *key, int value);

// `value` stepped by `step` through 0..count-1, wrapping at both ends: how an
// options line cycles a setting.
int nocturne_ini_cycle(int value, int step, int count);

#ifdef __cplusplus
}
#endif
