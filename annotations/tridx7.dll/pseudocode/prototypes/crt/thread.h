#pragma once

// Function prototypes for crt/thread.cpp
// Generated from Ghidra function signatures

// Original: crt_thread.c__mtinitlocks_FUN_10005900
// Address: 10005900
int __cdecl ::mtinitlocks(void);

// Original: crt_thread.c__mtdeletelocks_FUN_10005930
// Address: 10005930
void __cdecl ::mtdeletelocks(void);

// Original: crt_thread.c__lock_FUN_100059a0
// Address: 100059a0
void __cdecl ::lock(int file);

// Original: crt_thread.c__unlock_FUN_10005a10
// Address: 10005a10
void __cdecl ::unlock(int locknum);

// Original: crt_thread.c__lock_file_FUN_10005a30
// Address: 10005a30
void __cdecl ::lock_file(_FILE *file);

// Original: crt_thread.c__unlock_file_FUN_10005aa0
// Address: 10005aa0
void __cdecl ::unlock_file(_FILE *file);

// Original: crt_thread.c__mtinit_FUN_10007700
// Address: 10007700
int __cdecl ::mtinit(void);

// Original: crt_thread.c__mtterm_FUN_10007760
// Address: 10007760
void __cdecl ::mtterm(void);

// Original: crt_thread.c__initptd_FUN_10007790
// Address: 10007790
void __cdecl ::initptd(_ptiddata ptd,pthreadlocinfo locale);

// Original: crt_thread.c__getptd_FUN_100077b0
// Address: 100077b0
_ptiddata __cdecl ::getptd(void);

// Original: crt_thread.c__freeptd_FUN_10007820
// Address: 10007820
void __cdecl ::freeptd(_ptiddata ptd);

// Original: crt_thread.c___pxcptinfoptrs_FUN_1000bdf0
// Address: 1000bdf0
void ** __cdecl ::_pxcptinfoptrs(void);
