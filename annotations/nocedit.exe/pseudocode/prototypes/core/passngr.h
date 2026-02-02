#pragma once

// Function prototypes for core/passngr.cpp
// Generated from Ghidra function signatures

// Original: core_passngr.cpp_staticInit_FUN_00545ac0
// Address: 00545ac0
void __cdecl staticInit(void);

// Original: core_passngr.cpp_factoryFunc_FUN_00545af0
// Address: 00545af0
CPassenger * __cdecl factoryFunc(void);

// Original: core_passngr.cpp_CPassenger_getActorType_FUN_00545b20
// Address: 00545b20
CDemonActorType * __cdecl CPassenger::getActorType(CPassenger *this_ptr);

// Original: core_passngr.cpp_CPassenger_ctor_FUN_00545b30
// Address: 00545b30
CPassenger * __cdecl CPassenger::ctor(CPassenger *this_ptr);

// Original: core_passngr.cpp_CPassenger_dtor_FUN_00545c10
// Address: 00545c10
CPassenger * __cdecl CPassenger::dtor(CPassenger *this_ptr,uint d1);

// Original: core_passngr.cpp_CPassenger_setup_FUN_00545d30
// Address: 00545d30
void __cdecl CPassenger::setup(CPassenger *this_ptr);

// Original: core_passngr.cpp_CPassenger_process_FUN_00545ef0
// Address: 00545ef0
void __cdecl CPassenger::process(CPassenger *this_ptr,float delta_time);

// Original: core_passngr.cpp_CPassenger_renderOpaque_FUN_005460c0
// Address: 005460c0
int __cdecl CPassenger::renderOpaque(CPassenger *this_ptr);

// Original: core_passngr.cpp_CPassenger_archive_FUN_00546190
// Address: 00546190
void __cdecl CPassenger::archive(CPassenger *this_ptr);

// Original: core_passngr.cpp_CPassenger_getPropertyList_FUN_00546270
// Address: 00546270
void __cdecl CPassenger::getPropertyList(CPassenger *this_ptr,CActorPropertyList *property_list);

// Original: core_passngr.cpp_CPassenger_writeDependencies_FUN_005462f0
// Address: 005462f0
void __cdecl CPassenger::writeDependencies(CPassenger *this_ptr,_FILE *file_handle);
