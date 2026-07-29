#pragma once

// Function prototypes for wincore/winvideo.cpp
// Generated from Ghidra function signatures

// Original: wincore_winvideo.cpp_positionMovieWindow_FUN_0055a010
// Address: 0055a010
void __cdecl positionMovieWindow(HWND parent_window);

// Original: wincore_winvideo.cpp_closeMovie_FUN_0055a1c0
// Address: 0055a1c0
void __cdecl closeMovie(HWND window_handle);

// Original: wincore_winvideo.cpp_openMovie_FUN_0055a210
// Address: 0055a210
void __cdecl openMovie(HWND parent_window,char *movie_filename);

// Original: wincore_winvideo.cpp_toggleMoviePlayback_FUN_0055a4a0
// Address: 0055a4a0
void __cdecl toggleMoviePlayback(HWND notify_window,int play_state);

// Original: wincore_winvideo.cpp_FUN_0055a510
// Address: 0055a510
int __cdecl FUN_0055a510(char *directory_path,char *movie_filename);
