#pragma once

// Function prototypes for core/bride.cpp
// Generated from Ghidra function signatures

// Original: core_bride.cpp_staticInit_FUN_00423700
// Address: 00423700
void __cdecl staticInit(void);

// Original: core_bride.cpp_factoryFunc_FUN_00423760
// Address: 00423760
CBride * __cdecl factoryFunc(void);

// Original: core_bride.cpp_CBride_getActorType_FUN_00423790
// Address: 00423790
CDemonActorType * __cdecl CBride::getActorType(CBride *this_ptr);

// Original: core_bride.cpp_CBride_ctor_FUN_004237a0
// Address: 004237a0
CBride * __cdecl CBride::ctor(CBride *this_ptr);

// Original: core_bride.cpp_CBride_setup_FUN_00423810
// Address: 00423810
void __cdecl CBride::setup(CBride *this_ptr);

// Original: core_bride.cpp_CBride_process_FUN_00423a30
// Address: 00423a30
void __cdecl CBride::process(CBride *this_ptr,float delta_time);

// Original: core_bride.cpp_CBride_archive_FUN_00424560
// Address: 00424560
void __cdecl CBride::archive(CBride *this_ptr);

// Original: core_bride.cpp_CBride_FUN_00424600
// Address: 00424600
void __cdecl CBride(CBride *this_ptr);

// Original: core_bride.cpp_FUN_00424800
// Address: 00424800
void __cdecl FUN_00424800(void);

// Original: core_bride.cpp_CBride_processDamage_FUN_00424830
// Address: 00424830
void __cdecl CBride::processDamage(CBride *this_ptr,SDamageInfo *damage_info);

// Original: core_bride.cpp_CBride_getTargetPoints_FUN_00424a10
// Address: 00424a10
int __cdecl CBride::getTargetPoints(CBride *this_ptr,CVector3f *out_points_array);

// Original: core_bride.cpp_CBride_FUN_00424aa0
// Address: 00424aa0
CVector3f * __cdecl CBride(CBride *this_ptr);

// Original: core_bride.cpp_CBride_getPropertyList_FUN_00424b10
// Address: 00424b10
void __cdecl CBride::getPropertyList(CBride *this_ptr,CActorPropertyList *property_list);

// Original: core_bride.cpp_CBride_addFilesToExtract_FUN_00424b50
// Address: 00424b50
void __cdecl CBride::addFilesToExtract(CBride *this_ptr,_FILE *file_handle);

// Original: core_bride.cpp_CBride_dtor_FUN_00424b80
// Address: 00424b80
CBride * __cdecl CBride::dtor(CBride *this_ptr,uint flags);
