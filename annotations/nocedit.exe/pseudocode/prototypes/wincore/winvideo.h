#pragma once

// Function prototypes for wincore/winvideo.cpp
// Generated from Ghidra function signatures

// Original: wincore_winvideo.cpp_positionMovieWindow_FUN_005f4500
// Address: 005f4500
void positionMovieWindow(HWND parent_window);

// Original: wincore_winvideo.cpp_closeMovie_FUN_005f46b0
// Address: 005f46b0
void closeMovie(HWND window_handle);

// Original: wincore_winvideo.cpp_openMovie_FUN_005f4700
// Address: 005f4700
void openMovie(HWND parent_window, char * movie_filename);

// Original: wincore_winvideo.cpp_toggleMoviePlayback_FUN_005f4990
// Address: 005f4990
void toggleMoviePlayback(HWND notify_window, int play_state);

// Original: wincore_winvideo.cpp_playMovie_FUN_005f4a00
// Address: 005f4a00
int playMovie(char * directory_path, char * movie_filename);
