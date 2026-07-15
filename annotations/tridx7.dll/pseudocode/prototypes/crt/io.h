#pragma once

// Function prototypes for crt/io.cpp
// Generated from Ghidra function signatures

// Original: crt_io.c__close_FUN_10005b50
// Address: 10005b50
int __cdecl ::close(int file_handle);

// Original: crt_io.c__close_lk_FUN_10005bc0
// Address: 10005bc0
int __cdecl ::close_lk(int fh);

// Original: crt_io.c__ioinit_FUN_10007920
// Address: 10007920
int __cdecl ::ioinit(void);

// Original: crt_io.c__alloc_piob_FUN_100088b0
// Address: 100088b0
void __cdecl ::alloc_piob(void);

// Original: crt_io.c__alloc_osfhnd_FUN_10008a40
// Address: 10008a40
int __cdecl ::alloc_osfhnd(void);

// Original: crt_io.c__set_osfhnd_FUN_10008b80
// Address: 10008b80
int __cdecl ::set_osfhnd(int fh,intptr_t osfhandle);

// Original: crt_io.c__free_osfhnd_FUN_10008c30
// Address: 10008c30
int __cdecl ::free_osfhnd(int fh);

// Original: crt_io.c__get_osfhandle_FUN_10008cd0
// Address: 10008cd0
intptr_t __cdecl ::get_osfhandle(int fh);

// Original: crt_io.c__open_osfhandle_FUN_10008d20
// Address: 10008d20
int __cdecl ::open_osfhandle(intptr_t osfhandle,int flags);

// Original: crt_io.c__lock_fhandle_FUN_10008de0
// Address: 10008de0
int __cdecl ::lock_fhandle(int filehandle);

// Original: crt_io.c__unlock_fhandle_FUN_10008e50
// Address: 10008e50
void __cdecl ::unlock_fhandle(int filehandle);

// Original: crt_io.c__commit_FUN_10008e80
// Address: 10008e80
int __cdecl ::commit(int fh);

// Original: crt_io.c__write_FUN_10008f30
// Address: 10008f30
int __cdecl ::write(int file_handle,void *buf,uint max_char_count);

// Original: crt_io.c__write_lk_FUN_10008fb0
// Address: 10008fb0
int __cdecl ::write_lk(int fh,void *buf,uint cnt);

// Original: crt_io.c__isatty_FUN_100091b0
// Address: 100091b0
int __cdecl ::isatty(int fh);

// Original: crt_io.c__open_FUN_100093d0
// Address: 100093d0
int __cdecl ::open(char *filename,int oflag);

// Original: crt_io.c__sopen_FUN_100093f0
// Address: 100093f0
int __cdecl ::sopen(char *path,int oflag,int shflag,int pmode);

// Original: crt_io.c__write_dup_FUN_1000a5f0
// Address: 1000a5f0
int __cdecl ::write_dup(int file_handle,void *buf,uint max_char_count);

// Original: crt_io.c__lseek_lk_FUN_1000a670
// Address: 1000a670
long __cdecl ::lseek_lk(int fh,long offset,int origin);

// Original: crt_io.c__chsize_FUN_1000b4f0
// Address: 1000b4f0
int __cdecl ::chsize(int fh,long size);

// Original: crt_io.c__chsize_lk_FUN_1000b560
// Address: 1000b560
int __cdecl ::chsize_lk(int fh,long size);

// Original: crt_io.c__read_FUN_1000b6a0
// Address: 1000b6a0
int __cdecl ::read(int fh,void *buf,uint cnt);

// Original: crt_io.c__read_lk_FUN_1000b720
// Address: 1000b720
int __cdecl ::read_lk(int fh,void *buf,uint cnt);

// Original: crt_io.c__setmode_FUN_1000e810
// Address: 1000e810
int __cdecl ::setmode(int fh,int mode);

// Original: crt_io.c__setmode_lk_FUN_1000e880
// Address: 1000e880
int __cdecl ::setmode_lk(uint fh,int mode);
