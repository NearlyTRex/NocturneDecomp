#pragma once

// Function prototypes for core/passngr.cpp
// Generated from Ghidra function signatures

// Original: core_passngr.cpp_staticInit_FUN_004ef480
// Address: 004ef480
void __cdecl staticInit(void);

// Original: core_passngr.cpp_factoryFunc_FUN_004ef4b0
// Address: 004ef4b0
CPassenger * __cdecl factoryFunc(void);

// Original: core_passngr.cpp_CPassenger_getActorType_FUN_004ef4d0
// Address: 004ef4d0
CDemonActorType * __cdecl CPassenger::getActorType(CPassenger *this_ptr);

// Original: core_passngr.cpp_CPassenger_ctor_FUN_004ef4e0
// Address: 004ef4e0
CPassenger * __cdecl CPassenger::ctor(CPassenger *this_ptr);

// Original: core_passngr.cpp_CPassenger_dtor_FUN_004ef5c0
// Address: 004ef5c0
CPassenger * __cdecl CPassenger::dtor(CPassenger *this_ptr,uint flags);

// Original: core_passngr.cpp_CPassenger_setup_FUN_004ef6d0
// Address: 004ef6d0
void __cdecl CPassenger::setup(CPassenger *this_ptr);

// Original: core_passngr.cpp_CPassenger_process_FUN_004ef890
// Address: 004ef890
void __cdecl CPassenger::process(CPassenger *this_ptr,float delta_time);

// Original: core_passngr.cpp_CPassenger_renderOpaque_FUN_004efa60
// Address: 004efa60
int __cdecl CPassenger::renderOpaque(CPassenger *this_ptr);

// Original: core_passngr.cpp_CPassenger_archive_FUN_004efb30
// Address: 004efb30
void __cdecl CPassenger::archive(CPassenger *this_ptr);
