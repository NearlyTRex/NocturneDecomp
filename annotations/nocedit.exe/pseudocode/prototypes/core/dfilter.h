#pragma once

// Function prototypes for core/dfilter.cpp
// Generated from Ghidra function signatures

// Original: core_dfilter.cpp_staticInit_FUN_0046ff50
// Address: 0046ff50
void staticInit(void);

// Original: core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0
// Address: 0046ffd0
CFilterCache * CFilterCache::ctor(CFilterCache * this_ptr);

// Original: core_dfilter.cpp_CFilterCache_dtor_FUN_0046ffe0
// Address: 0046ffe0
CFilterCache * CFilterCache::dtor(CFilterCache * this_ptr);

// Original: core_dfilter.cpp_CFilterCache_free_FUN_00470000
// Address: 00470000
void CFilterCache::free(CFilterCache * this_ptr);

// Original: core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
// Address: 00470060
CDemonFilter * CFilterCache::getFilter(CFilterCache * this_ptr, char * filter_name, char * filter_filename, int enable_init);

// Original: core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
// Address: 004701a0
CDemonFilter * CFilterCache::findFilter(CFilterCache * this_ptr, char * filter_name);

// Original: core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0
// Address: 004701f0
CDemonFilter * CDemonFilter::ctor(CDemonFilter * this_ptr);

// Original: core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240
// Address: 00470240
CDemonFilter * CDemonFilter::dtor(CDemonFilter * this_ptr);

// Original: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
// Address: 00470260
void CDemonFilter::allocMemory(CDemonFilter * this_ptr);

// Original: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0
// Address: 004702c0
void CDemonFilter::freeMemory(CDemonFilter * this_ptr);

// Original: core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
// Address: 004702f0
void CDemonFilter::load(CDemonFilter * this_ptr, char * filename);

// Original: core_dfilter.cpp_CDemonFilter_save_FUN_00470510
// Address: 00470510
void CDemonFilter::save(CDemonFilter * this_ptr, char * filename);

// Original: core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
// Address: 004705a0
void CDemonFilter::init(CDemonFilter * this_ptr, float init_value, int flags);

// Original: core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0
// Address: 004706c0
CFilterFx * CFilterFX::ctor(CFilterFx * this_ptr);

// Original: core_dfilter.cpp_CFilterFX_dtor_FUN_004706e0
// Address: 004706e0
CFilterFx * CFilterFX::dtor(CFilterFx * this_ptr);

// Original: core_dfilter.cpp_CFilterFX_free_FUN_00470700
// Address: 00470700
void CFilterFX::free(CFilterFx * this_ptr);

// Original: core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730
// Address: 00470730
void CFilterFX::openMovie(CFilterFx * this_ptr, char * filename);

// Original: core_dfilter.cpp_CFilterFX_process_FUN_004708e0
// Address: 004708e0
void CFilterFX::process(CFilterFx * this_ptr);

// Original: core_dfilter.cpp_freeFilters_FUN_00470980
// Address: 00470980
void freeFilters(CDemonFilter * * array);
