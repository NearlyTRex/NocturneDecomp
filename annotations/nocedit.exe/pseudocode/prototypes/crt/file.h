#pragma once

// Function prototypes for crt/file.cpp
// Generated from Ghidra function signatures

// Original: crt_file.c_normalize_path_separator_FUN_005febe0
// Address: 005febe0
wchar_t normalize::path_separator(wchar_t ch, wchar_t * preferred_separator);

// Original: crt_file.c_makepath_FUN_005febfc
// Address: 005febfc
void makepath(char * path_buffer, char * drive, char * directory, char * filename, char * extension);

// Original: crt_file.c_setReadonlyAttribute_FUN_00600c30
// Address: 00600c30
DWORD setReadonlyAttribute(char * filename, DWORD file_attributes);

// Original: crt_file.c_create_directory_FUN_00600e10
// Address: 00600e10
int create::directory(char * path);

// Original: crt_file.c_get_file_attributes_FUN_006082e0
// Address: 006082e0
DWORD get::file_attributes(char * filename);

// Original: crt_file.c_extract_path_component_FUN_00610400
// Address: 00610400
char * extract::path_component(char * * component_ptr, char * buffer, char * source, char * buffer_end);

// Original: crt_file.c_splitpath_FUN_00610460
// Address: 00610460
void splitpath(char * path, char * buffer, char * * components);
