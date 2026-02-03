#pragma once

// Function prototypes for core/larva.cpp
// Generated from Ghidra function signatures

// Original: core_larva.cpp_staticInit_FUN_00502f20
// Address: 00502f20
void __cdecl staticInit(void);

// Original: core_larva.cpp_factoryFunc_FUN_00502f50
// Address: 00502f50
CLarva * __cdecl factoryFunc(void);

// Original: core_larva.cpp_CLarva_getActorType_FUN_00502f80
// Address: 00502f80
CDemonActorType * __cdecl CLarva::getActorType(CLarva *this_ptr);

// Original: core_larva.cpp_CLarva_ctor_FUN_00502f90
// Address: 00502f90
CLarva * __cdecl CLarva::ctor(CLarva *this_ptr);

// Original: core_larva.cpp_CLarva_setup_FUN_00503020
// Address: 00503020
void __cdecl CLarva::setup(CLarva *this_ptr);

// Original: core_larva.cpp_CLarva_process_FUN_00503080
// Address: 00503080
void __cdecl CLarva::process(CLarva *this_ptr,float delta_time);

// Original: core_larva.cpp_CLarva_archive_FUN_00503960
// Address: 00503960
void __cdecl CLarva::archive(CLarva *this_ptr);

// Original: core_larva.cpp_FUN_005039d0
// Address: 005039d0
char * __cdecl FUN_005039d0(void);

// Original: core_larva.cpp_CLarva_processDamage_FUN_00503a20
// Address: 00503a20
void __cdecl CLarva::processDamage(CLarva *this_ptr,SDamageInfo *damage_info);

// Original: core_larva.cpp_CLarva_getTargetPoints_FUN_00503c00
// Address: 00503c00
int __cdecl CLarva::getTargetPoints(CLarva *this_ptr,CVector3f *out_points_array);

// Original: core_larva.cpp_CLarva_getPropertyList_FUN_00503c50
// Address: 00503c50
void __cdecl CLarva::getPropertyList(CLarva *this_ptr,CActorPropertyList *property_list);

// Original: core_larva.cpp_CLarva_writeDependencies_FUN_00503c90
// Address: 00503c90
void __cdecl CLarva::writeDependencies(CLarva *this_ptr,_FILE *file_handle);

// Original: core_larva.cpp_CLarva_dtor_FUN_00503cc0
// Address: 00503cc0
CDemonActor * __cdecl CLarva::dtor(CLarva *this_ptr,uint flags);
