#pragma once

// Function prototypes for core/hiram.cpp
// Generated from Ghidra function signatures

// Original: core_hiram.cpp_staticInit_FUN_004b65b0
// Address: 004b65b0
void __cdecl staticInit(void);

// Original: core_hiram.cpp_factoryFunc_FUN_004b65e0
// Address: 004b65e0
CHiram * __cdecl factoryFunc(void);

// Original: core_hiram.cpp_CHiram_getActorType_FUN_004b6600
// Address: 004b6600
CDemonActorType * __cdecl CHiram::getActorType(CHiram *this_ptr);

// Original: core_hiram.cpp_CHiram_ctor_FUN_004b6610
// Address: 004b6610
CHiram * __cdecl CHiram::ctor(CHiram *this_ptr);

// Original: core_hiram.cpp_CHiram_dtor_FUN_004b6670
// Address: 004b6670
CHiram * __cdecl CHiram::dtor(CHiram *this_ptr,uint flags);

// Original: core_hiram.cpp_CHiram_setup_FUN_004b6750
// Address: 004b6750
void __cdecl CHiram::setup(CHiram *this_ptr);

// Original: core_hiram.cpp_CHiram_process_FUN_004b6770
// Address: 004b6770
void __cdecl CHiram::process(CHiram *this_ptr,float delta_time);

// Original: core_hiram.cpp_CHiram_archive_FUN_004b68b0
// Address: 004b68b0
void __cdecl CHiram::archive(CHiram *this_ptr);
