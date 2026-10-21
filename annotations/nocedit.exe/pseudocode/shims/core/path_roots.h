#pragma once

// =============================================================================
// PATH ROOTS — where this run reads the game from and writes to
// =============================================================================
//
// Chooses the data and user directories watcom/path.h resolves every relative
// path against. Each comes from the first of:
//
//   1. the command line: --data-dir <dir> / --user-dir <dir>, or --data-dir=<dir>
//   2. the environment: NOCTURNE_DATA_DIR / NOCTURNE_USER_DIR
//   3. what the platform file compiles in: NOCTURNE_DEFAULT_DATA_DIR /
//      NOCTURNE_DEFAULT_USER_DIR, string literals. A platform that only learns
//      its writable place at run time defines NOCTURNE_USER_DIR_FROM_SDL
//      instead, for SDL_GetPrefPath's answer.
//
// None of them set is the working directory for both, which is how the game has
// always run, so a desktop build that sets nothing behaves exactly as before.
// A relative directory is made absolute here: winMain changes the working
// directory on Windows, after this has run.

// Before anything opens a file, the logs included.
void nocturne_init_path_roots(int argc, char **argv);
