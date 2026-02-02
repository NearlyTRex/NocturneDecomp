#pragma once

// Function prototypes for core/moloch.cpp
// Generated from Ghidra function signatures

// Original: core_moloch.cpp_staticInit_FUN_00528ac0
// Address: 00528ac0
void __cdecl staticInit(void);

// Original: core_moloch.cpp_factoryFunc_FUN_00528af0
// Address: 00528af0
CMoloch * __cdecl factoryFunc(void);

// Original: core_moloch.cpp_CMoloch_getActorType_FUN_00528b20
// Address: 00528b20
CDemonActorType * __cdecl CMoloch::getActorType(CMoloch *this_ptr);

// Original: core_moloch.cpp_CMoloch_ctor_FUN_00528b30
// Address: 00528b30
CMoloch * __cdecl CMoloch::ctor(CMoloch *this_ptr);

// Original: core_moloch.cpp_CMoloch_dtor_FUN_00528bf0
// Address: 00528bf0
CMoloch * __cdecl CMoloch::dtor(CMoloch *this_ptr,uint d1,uint d2,uint d3,uint d4);

// Original: core_moloch.cpp_CMoloch_setup_FUN_00528c70
// Address: 00528c70
void __cdecl CMoloch::setup(CMoloch *this_ptr);

// Original: core_moloch.cpp_CMoloch_process_FUN_00528d20
// Address: 00528d20
void __cdecl CMoloch::process(CMoloch *this_ptr,float delta_time);

// Original: core_moloch.cpp_CMoloch_FUN_005293b0
// Address: 005293b0
void __cdecl CMoloch(CMoloch *this_ptr);

// Original: core_moloch.cpp_CMoloch_renderOpaque_FUN_00529750
// Address: 00529750
int __cdecl CMoloch::renderOpaque(CMoloch *this_ptr);

// Original: core_moloch.cpp_CMoloch_archive_FUN_00529880
// Address: 00529880
void __cdecl CMoloch::archive(CMoloch *this_ptr);

// Original: core_moloch.cpp_CMoloch_FUN_00529900
// Address: 00529900
void __cdecl CMoloch(CMoloch *this_ptr);

// Original: core_moloch.cpp_CMoloch_getPropertyList_FUN_00529950
// Address: 00529950
void __cdecl CMoloch::getPropertyList(CMoloch *this_ptr,CActorPropertyList *property_list);

// Original: core_moloch.cpp_CMoloch_writeDependencies_FUN_005299b0
// Address: 005299b0
void __cdecl CMoloch::writeDependencies(CMoloch *this_ptr,_FILE *file_handle);

// Original: core_moloch.cpp_CMoloch_FUN_005299d0
// Address: 005299d0
void __cdecl CMoloch(CMoloch *this_ptr);

// Original: core_moloch.cpp_CMoloch_FUN_005299e0
// Address: 005299e0
int __cdecl CMoloch(CMoloch *this_ptr);
