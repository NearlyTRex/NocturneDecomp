#pragma once

// Function prototypes for core/dfilter.cpp
// Generated from Ghidra function signatures

// Original: core_dfilter.cpp_staticInit_FUN_0044bc20
// Address: 0044bc20
void __cdecl staticInit(void);

// Original: core_dfilter.cpp_CFilterCache_ctor_FUN_0044bca0
// Address: 0044bca0
CFilterCache * __cdecl CFilterCache::ctor(CFilterCache *this_ptr);

// Original: core_dfilter.cpp_FUN_0044bcb0
// Address: 0044bcb0
CFilterCache * __cdecl FUN_0044bcb0(CFilterCache *this_ptr);

// Original: core_dfilter.cpp_CFilterCache_free_FUN_0044bcd0
// Address: 0044bcd0
void __cdecl CFilterCache::free(CFilterCache *this_ptr);

// Original: core_dfilter.cpp_CFilterCache_getFilter_FUN_0044bd20
// Address: 0044bd20
int CFilterCache::getFilter(int *param_1,char *param_2,int param_3);

// Original: core_dfilter.cpp_CFilterCache_findFilter_FUN_0044be60
// Address: 0044be60
CDemonFilter * __cdecl CFilterCache::findFilter(CFilterCache *this_ptr,char *filter_name);

// Original: core_dfilter.cpp_CDemonFilter_ctor_FUN_0044beb0
// Address: 0044beb0
CDemonFilter * __cdecl CDemonFilter::ctor(CDemonFilter *this_ptr);

// Original: core_dfilter.cpp_CDemonFilter_dtor_FUN_0044bf00
// Address: 0044bf00
CDemonFilter * __cdecl CDemonFilter::dtor(CDemonFilter *this_ptr,uint flags);

// Original: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20
// Address: 0044bf20
void __cdecl CDemonFilter::allocMemory(CDemonFilter *this_ptr);

// Original: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0044bf70
// Address: 0044bf70
void __cdecl CDemonFilter::freeMemory(CDemonFilter *this_ptr);

// Original: core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90
// Address: 0044bf90
void __cdecl CDemonFilter::load(CDemonFilter *this_ptr,char *filename);

// Original: core_dfilter.cpp_CDemonFilter_init_FUN_0044c190
// Address: 0044c190
void __cdecl CDemonFilter::init(CDemonFilter *this_ptr,float init_value,int flags);

// Original: core_dfilter.cpp_CFilterFX_ctor_FUN_0044c2b0
// Address: 0044c2b0
CFilterFx * __cdecl CFilterFX::ctor(CFilterFx *this_ptr);

// Original: core_dfilter.cpp_CFilterFX_dtor_FUN_0044c2d0
// Address: 0044c2d0
CFilterFx * CFilterFX::dtor(CFilterFx *param_1);

// Original: core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0
// Address: 0044c2f0
void __cdecl CFilterFX::free(CFilterFx *this_ptr);

// Original: core_dfilter.cpp_CFilterFX_openMovie_FUN_0044c310
// Address: 0044c310
void __cdecl CFilterFX::openMovie(CFilterFx *this_ptr,char *filename);

// Original: core_dfilter.cpp_CFilterFX_process_FUN_0044c4a0
// Address: 0044c4a0
void __cdecl CFilterFX::process(CFilterFx *this_ptr);

// Original: core_dfilter.cpp_FUN_0044c540
// Address: 0044c540
void FUN_0044c540(void *param_1);
