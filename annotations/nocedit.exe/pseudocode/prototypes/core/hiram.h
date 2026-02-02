#pragma once

// Function prototypes for core/hiram.cpp
// Generated from Ghidra function signatures

// Original: core_hiram.cpp_staticInit_FUN_004f4380
// Address: 004f4380
void __cdecl staticInit(void);

// Original: core_hiram.cpp_getFactoryFunc_FUN_004f43b0
// Address: 004f43b0
CHiram * __cdecl getFactoryFunc(void);

// Original: core_hiram.cpp_CHiram_getActorType_FUN_004f43e0
// Address: 004f43e0
CDemonActorType * __cdecl CHiram::getActorType(CHiram *this_ptr);

// Original: core_hiram.cpp_CHiram_ctor_FUN_004f43f0
// Address: 004f43f0
CHiram * __cdecl CHiram::ctor(CHiram *this_ptr);

// Original: core_hiram.cpp_CHiram_dtor_FUN_004f4450
// Address: 004f4450
CHiram * __cdecl CHiram::dtor(CHiram *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,uint d9);

// Original: core_hiram.cpp_CHiram_setup_FUN_004f4530
// Address: 004f4530
void __cdecl CHiram::setup(CHiram *this_ptr);

// Original: core_hiram.cpp_CHiram_process_FUN_004f4550
// Address: 004f4550
void __cdecl CHiram::process(CHiram *this_ptr,float delta_time);

// Original: core_hiram.cpp_CHiram_archive_FUN_004f4690
// Address: 004f4690
void __cdecl CHiram::archive(CHiram *this_ptr);

// Original: core_hiram.cpp_CHiram_getPropertyList_FUN_004f46a0
// Address: 004f46a0
void __cdecl CHiram::getPropertyList(CHiram *this_ptr,CActorPropertyList *property_list);

// Original: core_hiram.cpp_CHiram_writeDependencies_FUN_004f46e0
// Address: 004f46e0
void __cdecl CHiram::writeDependencies(CHiram *this_ptr,_FILE *file_handle);
