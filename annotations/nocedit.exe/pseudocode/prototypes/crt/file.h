#pragma once

// Function prototypes for crt/file.cpp
// Generated from Ghidra function signatures

// Original: crt_file.c_normalize_path_separator_FUN_005febe0
// Address: 005febe0
int __cdecl normalize::path_separator(int ch,int *preferred_separator);

// Original: crt_file.c_makepath_FUN_005febfc
// Address: 005febfc
void __cdecl makepath(char *path_buffer,char *drive,char *directory,char *filename,char *extension);

// Original: crt_file.c___getfileattr_FUN_006082e0
// Address: 006082e0
DWORD __cdecl ::_getfileattr(char *filename);

// Original: crt_file.c_extract_path_component_FUN_00610400
// Address: 00610400
char * __cdecl extract::path_component(char **component_ptr,char *buffer,char *source,char *buffer_end);

// Original: crt_file.c_splitpath_s_FUN_00610460
// Address: 00610460
void __cdecl splitpath::s(char *path,char *buffer,char *drive,char *dir,char *fname,char *ext);
