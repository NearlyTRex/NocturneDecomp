#pragma once

// Function prototypes for core/dfilter.cpp
// Generated from Ghidra function signatures

// Original: core_dfilter.cpp_CFilterCache_ctor_FUN_0044bca0
// Address: 0044bca0
void CFilterCache::ctor(undefined4 *param_1);

// Original: core_dfilter.cpp_CFilterCache_free_FUN_0044bcd0
// Address: 0044bcd0
void __cdecl CFilterCache::free(int *param_1);

// Original: core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20
// Address: 0044bd20
int CFilterCache::getFilter(int *param_1,char *param_2,int param_3);

// Original: core_dfilter.cpp_CFilterCache_findFilter_FUN_0044be60
// Address: 0044be60
int __cdecl CFilterCache::findFilter(int *param_1,undefined4 param_2);

// Original: core_dfilter.cpp_CDemonFilter_ctor_FUN_0044beb0
// Address: 0044beb0
undefined4 * __cdecl CDemonFilter::ctor(undefined4 *param_1);

// Original: core_dfilter.cpp_CDemonFilter_dtor_FUN_0044bf00
// Address: 0044bf00
undefined4 __cdecl CDemonFilter::dtor(undefined4 param_1);

// Original: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20
// Address: 0044bf20
void __cdecl CDemonFilter::allocMemory(int *param_1);

// Original: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0044bf70
// Address: 0044bf70
void __cdecl CDemonFilter::freeMemory(int param_1);

// Original: core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90
// Address: 0044bf90
void __cdecl CDemonFilter::load(int *param_1,char *param_2);

// Original: core_dfilter.cpp_CDemonFilter_init_FUN_0044c190
// Address: 0044c190
void __cdecl CDemonFilter::init(int *param_1,float param_2,int param_3);

// Original: core_dfilter.cpp_CFilterFX_ctor_FUN_0044c2b0
// Address: 0044c2b0
void CFilterFX::ctor(undefined4 *param_1);

// Original: core_dfilter.cpp_CFilterFX_dtor_FUN_0044c2d0
// Address: 0044c2d0
undefined4 CFilterFX::dtor(undefined4 param_1);

// Original: core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0
// Address: 0044c2f0
void __cdecl CFilterFX::free(int param_1);

// Original: core_dfilter.cpp_CFilterFX_openMovie_FUN_0044c310
// Address: 0044c310
void __cdecl CFilterFX::openMovie(int *param_1,int param_2);

// Original: core_dfilter.cpp_CFilterFX_process_FUN_0044c4a0
// Address: 0044c4a0
void __cdecl CFilterFX::process(int *param_1);
