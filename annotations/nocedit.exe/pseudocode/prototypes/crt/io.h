#pragma once

// Function prototypes for crt/io.cpp
// Generated from Ghidra function signatures

// Original: crt_io.c_getFileStat_FUN_00600c18
// Address: 00600c18
int __cdecl getFileStat(char *filename,_stat *file_info);

// Original: crt_io.c_chsize_FUN_00600cf0
// Address: 00600cf0
int __cdecl chsize(int file_handle,long new_size);

// Original: crt_io.c_chdir_FUN_006012a0
// Address: 006012a0
int __cdecl chdir(char *path);

// Original: crt_io.c__tempnam_FUN_00601f1c
// Address: 00601f1c
void __watcallStack ::tempnam(char *buffer,int file_handle);

// Original: crt_io.c__findfirst_FUN_006021f0
// Address: 006021f0
HANDLE __cdecl ::findfirst(char *filespec,LPWIN32_FIND_DATAA find_data);

// Original: crt_io.c_convertFileInfo_FUN_00602264
// Address: 00602264
void __watcallStack convertFileInfo(LPWIN32_FIND_DATAA win32_data,_find_t *dos_info);

// Original: crt_io.c__findnext_FUN_00602300
// Address: 00602300
int __cdecl ::findnext(HANDLE find_handle,LPWIN32_FIND_DATAA find_data);

// Original: crt_io.c__findclose_FUN_00602380
// Address: 00602380
int __cdecl ::findclose(HANDLE find_handle);

// Original: crt_io.c_register_handler_wrapper_FUN_00602438
// Address: 00602438
int __cdecl register::handler_wrapper(HANDLE file_handle);

// Original: crt_io.c_invalidate_handle_wrapper_FUN_00602448
// Address: 00602448
void __cdecl invalidate::handle_wrapper(int handle_index);

// Original: crt_io.c_tell_FUN_00606720
// Address: 00606720
long __watcallStack tell(int file_handle_index);

// Original: crt_io.c_analyze_file_type_FUN_00607d50
// Address: 00607d50
uint __watcallStack analyze::file_type(uint open_flags,char *filename);

// Original: crt_io.c_getFileStat_FUN_00607e64
// Address: 00607e64
int __cdecl getFileStat(char *filename,_stat *file_info);

// Original: crt_io.c__utime_FUN_00608160
// Address: 00608160
int __cdecl ::utime(char *filename,_utimbuf *timestamps);

// Original: crt_io.c_extend_file_for_append_FUN_00608410
// Address: 00608410
int __cdecl extend::file_for_append(int fd);

// Original: crt_io.c_write_FUN_006084ec
// Address: 006084ec
int __cdecl write(int fd,void *buffer,SIZE_T count);

// Original: crt_io.c_getTempDirectory_FUN_00609afc
// Address: 00609afc
char * __cdecl getTempDirectory(void);

// Original: crt_io.c_close_FUN_00609bd0
// Address: 00609bd0
int __cdecl close(int fd);

// Original: crt_io.c_IsSpecialDevice_FUN_0060c270
// Address: 0060c270
int __cdecl IsSpecialDevice(int handle_index);

// Original: crt_io.c_close_handle_safe_FUN_0060c2e0
// Address: 0060c2e0
int __cdecl close::handle_safe(int handle_index);

// Original: crt_io.c_ConvertAccessMode_FUN_0060c850
// Address: 0060c850
void __cdecl ConvertAccessMode(int access_mode,DWORD *desired_access,DWORD *share_mode);

// Original: crt_io.c_ConvertCreationDisposition_FUN_0060c894
// Address: 0060c894
void __cdecl ConvertCreationDisposition(DWORD mode_flags,DWORD *creation_disposition);

// Original: crt_io.c_access_FUN_0060c9f0
// Address: 0060c9f0
int __watcallStack access(char *filename,int access_mode);

// Original: crt_io.c_get_handle_FUN_006109f0
// Address: 006109f0
HANDLE __cdecl get::handle(int fd);
