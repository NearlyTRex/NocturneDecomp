#pragma once

// Function prototypes for engine/pod.cpp
// Generated from Ghidra function signatures

// Original: engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0
// Address: 004f7ac0
undefined4 __cdecl CPodFile::dtor(undefined4 param_1);

// Original: engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0
// Address: 004f80e0
void __cdecl CPodFile::cleanup(undefined4 *param_1);

// Original: engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150
// Address: 004f8150
int __cdecl CPodFile::findFileIndex(int param_1,undefined4 param_2);

// Original: engine_pod.cpp_CPodFile_populateFileInfo_FUN_004f81c0
// Address: 004f81c0
void CPodFile::populateFileInfo(int param_1,int param_2,int param_3);

// Original: engine_pod.cpp_CPod_ctor_FUN_004f8810
// Address: 004f8810
undefined4 * __cdecl CPod::ctor(undefined4 *param_1);

// Original: engine_pod.cpp_CPod_dtor_FUN_004f8840
// Address: 004f8840
int __cdecl CPod::dtor(int param_1,byte param_2);

// Original: engine_pod.cpp_CPod_load_FUN_004f8870
// Address: 004f8870
void CPod::load(void);

// Original: engine_pod.cpp_CPod_mount_FUN_004f88a0
// Address: 004f88a0
void CPod::mount(int *param_1,undefined4 param_2);

// Original: engine_pod.cpp_CPod_remount_FUN_004f8970
// Address: 004f8970
void CPod::remount(int *param_1);

// Original: engine_pod.cpp_CPod_init_FUN_004f8af0
// Address: 004f8af0
void __cdecl CPod::init(int *param_1);

// Original: engine_pod.cpp_CPod_cleanup_FUN_004f8b40
// Address: 004f8b40
void __cdecl CPod::cleanup(int *param_1);

// Original: engine_pod.cpp_findFilesByExtension_FUN_004f8b90
// Address: 004f8b90
int findFilesByExtension(int *param_1,char *param_2,int param_3,int param_4,int param_5);

// Original: engine_pod.cpp_CPod_initSearch_FUN_004f8d50
// Address: 004f8d50
void __cdecl CPod::initSearch(undefined4 param_1,char *param_2,int param_3);

// Original: engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0
// Address: 004f8da0
undefined4 __cdecl CPod::getNextSearchResult(int *param_1,char *param_2);

// Original: engine_pod.cpp_CPod_findFile_FUN_004f9200
// Address: 004f9200
undefined4 CPod::findFile(int *param_1,undefined4 param_2);
