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
//   3. for the data directory only, the directory named on the first line of
//      data_dir.txt in the user directory, or in the default data directory
//      when there is no user directory, which then becomes the user directory:
//      a front end, or a player, points the game at its files where they
//      already are rather than copying them. A line that names no directory is
//      passed over.
//   4. what the platform file compiles in: NOCTURNE_DEFAULT_DATA_DIR /
//      NOCTURNE_DEFAULT_USER_DIR, string literals. A platform that only learns
//      its writable place at run time defines NOCTURNE_USER_DIR_FROM_SDL
//      instead, for SDL_GetPrefPath's answer.
//
//      NOCTURNE_DATA_DIR_FROM_SDL makes SDL_GetPrefPath's NocturneDecomp folder
//      the data directory as well, for a platform where people copy the game
//      files into a place of the app's choosing (the macOS app bundle). The
//      default arrangement leaves one directory for both.
//
// None of them set is the working directory for both, which is how the game has
// always run, so a desktop build that sets nothing behaves exactly as before.
// A relative directory is made absolute here: winMain changes the working
// directory on Windows, after this has run.

// Before anything opens a file, the logs included.
void nocturne_init_path_roots(int argc, char **argv);

// 1 when the data directory holds the game: any .pod, in any case. Otherwise
// says so, on stderr and in a message box where SDL can show one, naming the
// folder and the ways to point the game at its files; opens the folder when it
// is the platform's own one that people fill by hand (the macOS app bundle's);
// and answers 0, for the caller to stop. With no data directory the folder is
// the one the game will read from: the executable's on Windows, where winMain
// moves to it, else the working directory. Without the game the engine would
// fail deep in its start-up with nothing on screen to say why.
int nocturne_check_game_data(void);
