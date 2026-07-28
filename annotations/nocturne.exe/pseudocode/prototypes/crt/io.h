#pragma once

// Function prototypes for crt/io.cpp
// Generated from Ghidra function signatures

// Original: crt_io.c_getFileStat_FUN_00565dc0
// Address: 00565dc0
int __cdecl getFileStat(char *filename,_stat *file_info);

// Original: crt_io.c__utime_00600c1e_FUN_00565dc6
// Address: 00565dc6
int __cdecl ::utime_00600c1e(char *filename,_utimbuf *timestamps);

// Original: crt_io.c_register_handler_wrapper_FUN_005671e8
// Address: 005671e8
int __cdecl register::handler_wrapper(HANDLE file_handle);

// Original: crt_io.c_invalidate_handle_wrapper_FUN_005671f8
// Address: 005671f8
void __cdecl invalidate::handle_wrapper(int handle_index);

// Original: crt_io.c_getTempDirectory_FUN_005687bc
// Address: 005687bc
undefined1 __cdecl getTempDirectory(void);

// Original: crt_io.c_close_FUN_00568a50
// Address: 00568a50
int __cdecl close(int fd);

// Original: crt_io.c_tell_FUN_0056bc10
// Address: 0056bc10
long __watcallStack tell(int file_handle_index);

// Original: crt_io.c_analyze_file_type_FUN_0056c750
// Address: 0056c750
uint __watcallStack analyze::file_type(uint open_flags,char *filename);

// Original: crt_io.c_getFileStat_FUN_0056c864
// Address: 0056c864
int __cdecl getFileStat(char *filename,_stat *file_info);

// Original: crt_io.c__utime_FUN_0056cb60
// Address: 0056cb60
int __cdecl ::utime(char *filename,_utimbuf *timestamps);

// Original: crt_io.c_IsSpecialDevice_FUN_005705c0
// Address: 005705c0
int __cdecl IsSpecialDevice(int handle_index);

// Original: crt_io.c_extend_file_for_append_FUN_00572f40
// Address: 00572f40
int __cdecl extend::file_for_append(int fd);

// Original: crt_io.c_write_FUN_0057301c
// Address: 0057301c
int __cdecl write(int fd,void *buffer,SIZE_T count);
