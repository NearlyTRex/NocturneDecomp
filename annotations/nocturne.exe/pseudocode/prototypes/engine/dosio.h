#pragma once

// Function prototypes for engine/dosio.cpp
// Generated from Ghidra function signatures

// Original: engine_dosio.cpp_getRelativeFilePath_FUN_00456700
// Address: 00456700
void __cdecl getRelativeFilePath(char *dest_path,char *directory,char *filename);

// Original: engine_dosio.c_FUN_00456750
// Address: 00456750
void FUN_00456750(undefined4 param_1);

// Original: engine_dosio.cpp_findFile_FUN_004567a0
// Address: 004567a0
int __cdecl findFile(SFoundFileInfo *context);

// Original: engine_dosio.cpp_findFileNormally_FUN_00456800
// Address: 00456800
int __cdecl findFileNormally(SFoundFileInfo *info);

// Original: engine_dosio.cpp_getFileSize_FUN_004568c0
// Address: 004568c0
int __cdecl getFileSize(char *directory,char *filename);

// Original: engine_dosio.cpp_getFileTimestamp_FUN_00456910
// Address: 00456910
uint __cdecl getFileTimestamp(char *directory_path,char *filename);

// Original: engine_dosio.cpp_copyFileTimestamp_FUN_00456950
// Address: 00456950
int __cdecl copyFileTimestamp(char *source_file,uint modtime);

// Original: engine_dosio.cpp_getFileSizeWithFinder_FUN_004569a0
// Address: 004569a0
int __cdecl getFileSizeWithFinder(char *directory,char *filename);

// Original: engine_dosio.cpp_setFileAttributes_FUN_00456a30
// Address: 00456a30
int __cdecl setFileAttributes(char *filename,byte flags);

// Original: engine_dosio.cpp_getFile_FUN_00456a60
// Address: 00456a60
_FILE * __cdecl getFile(char *directory,char *filename,char *mode);

// Original: engine_dosio.cpp_reopenFileStream_FUN_00456b20
// Address: 00456b20
void __cdecl reopenFileStream(char *directory_path,char *filename,uint mode_flags,ifstream *file_stream);

// Original: engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00
// Address: 00456c00
CFileFinder * __cdecl CFileFinder::ctor(CFileFinder *this_ptr);

// Original: engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20
// Address: 00456c20
CFileFinder * __cdecl CFileFinder::dtor(CFileFinder *this_ptr,uint flags);

// Original: engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
// Address: 00456c40
int __cdecl CFileFinder::openSearch(CFileFinder *this_ptr,char *search_pattern);

// Original: engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0
// Address: 00456cc0
int __cdecl CFileFinder::findNext(CFileFinder *this_ptr);

// Original: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40
// Address: 00456d40
void __cdecl CFileFinder::closeSearch(CFileFinder *this_ptr);

// Original: engine_dosio.cpp_CFileFinder_reset_FUN_00456d80
// Address: 00456d80
void __cdecl CFileFinder::reset(CFileFinder *this_ptr);

// Original: engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90
// Address: 00456d90
void __cdecl CFileFinder::convertStruct(CFileFinder *finder,LPWIN32_FIND_DATAA find_data);

// Original: engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0
// Address: 00565dd0
DWORD __cdecl setReadonlyAttribute(char *filename,DWORD file_attributes);
