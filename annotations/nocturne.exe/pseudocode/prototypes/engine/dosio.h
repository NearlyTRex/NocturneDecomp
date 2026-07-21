#pragma once

// Function prototypes for engine/dosio.cpp
// Generated from Ghidra function signatures

// Original: engine_dosio.cpp_getRelativeFilePath_FUN_00456700
// Address: 00456700
void __cdecl getRelativeFilePath(char *param_1,char *param_2,char *param_3);

// Original: engine_dosio.cpp_findFile_FUN_004567a0
// Address: 004567a0
undefined4 __cdecl findFile(undefined4 param_1);

// Original: engine_dosio.cpp_findFileNormally_FUN_00456800
// Address: 00456800
undefined4 __cdecl findFileNormally(char *param_1);

// Original: engine_dosio.cpp_getFileSize_FUN_004568c0
// Address: 004568c0
undefined4 __cdecl getFileSize(undefined4 param_1,undefined4 param_2);

// Original: engine_dosio.cpp_getFileTimestamp_FUN_00456910
// Address: 00456910
undefined4 __cdecl getFileTimestamp(undefined4 param_1,undefined4 param_2);

// Original: engine_dosio.cpp_copyFileTimestamp_FUN_00456950
// Address: 00456950
bool copyFileTimestamp(undefined4 param_1,undefined4 param_2);

// Original: engine_dosio.cpp_getFile_FUN_00456a60
// Address: 00456a60
int __cdecl getFile(int param_1,undefined4 param_2,char *param_3);

// Original: engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00
// Address: 00456c00
int __cdecl CFileFinder::ctor(int param_1);

// Original: engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20
// Address: 00456c20
undefined4 __cdecl CFileFinder::dtor(undefined4 param_1);

// Original: engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
// Address: 00456c40
undefined4 __cdecl CFileFinder::openSearch(int param_1,LPCSTR param_2);

// Original: engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0
// Address: 00456cc0
undefined4 __cdecl CFileFinder::findNext(int param_1);

// Original: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40
// Address: 00456d40
void __cdecl CFileFinder::closeSearch(int param_1);

// Original: engine_dosio.cpp_CFileFinder_reset_FUN_00456d80
// Address: 00456d80
void __cdecl CFileFinder::reset(undefined1 *param_1);

// Original: engine_dosio.cpp_CFileFinder_convertStruct_FUN_00456d90
// Address: 00456d90
void __cdecl CFileFinder::convertStruct(int param_1,byte *param_2);

// Original: engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0
// Address: 00565dd0
undefined4 __cdecl setReadonlyAttribute(LPCSTR param_1,byte param_2);
