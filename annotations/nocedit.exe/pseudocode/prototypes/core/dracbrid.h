#pragma once

// Function prototypes for core/dracbrid.cpp
// Generated from Ghidra function signatures

// Original: core_dracbrid.cpp_staticInit_FUN_00483ef0
// Address: 00483ef0
void __cdecl staticInit(void);

// Original: core_dracbrid.cpp_factoryFunc_FUN_00483f80
// Address: 00483f80
CDraculaBride * __cdecl factoryFunc(void);

// Original: core_dracbrid.cpp_CDraculaBride_getActorType_FUN_00483fb0
// Address: 00483fb0
CDemonActorType * __cdecl CDraculaBride::getActorType(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_ctor_FUN_00483fc0
// Address: 00483fc0
CDraculaBride * __cdecl CDraculaBride::ctor(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_setup_FUN_004840b0
// Address: 004840b0
void __cdecl CDraculaBride::setup(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_process_FUN_00484410
// Address: 00484410
void __cdecl CDraculaBride::process(CDraculaBride *this_ptr,float delta_time);

// Original: core_dracbrid.cpp_CDraculaBride_FUN_004858f0
// Address: 004858f0
void __cdecl CDraculaBride(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_FUN_00485b20
// Address: 00485b20
void __cdecl CDraculaBride(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_hasCollision_FUN_00485bc0
// Address: 00485bc0
int __cdecl CDraculaBride::hasCollision(CDraculaBride *this_ptr,SCollisionInfo *collision_info);

// Original: core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0
// Address: 00485be0
int __cdecl CDraculaBride::renderOpaque(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_archive_FUN_00485dd0
// Address: 00485dd0
void __cdecl CDraculaBride::archive(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_FUN_00486020
// Address: 00486020
void __cdecl CDraculaBride(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00486070
// Address: 00486070
void __cdecl CDraculaBride::processDamage(CDraculaBride *this_ptr,SDamageInfo *damage_info);

// Original: core_dracbrid.cpp_CDraculaBride_getDeathState_FUN_00486320
// Address: 00486320
int __cdecl CDraculaBride::getDeathState(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_getTargetPoints_FUN_00486360
// Address: 00486360
int __cdecl CDraculaBride::getTargetPoints(CDraculaBride *this_ptr,CVector3f *out_points_array);

// Original: core_dracbrid.cpp_FUN_00486430
// Address: 00486430
float * __cdecl FUN_00486430(void);

// Original: core_dracbrid.cpp_CDraculaBride_FUN_004864c0
// Address: 004864c0
void __cdecl CDraculaBride(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_FUN_004869a0
// Address: 004869a0
void __cdecl CDraculaBride(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_getPropertyList_FUN_00486c90
// Address: 00486c90
void __cdecl CDraculaBride::getPropertyList(CDraculaBride *this_ptr,CActorPropertyList *property_list);

// Original: core_dracbrid.cpp_CDraculaBride_addFilesToExtract_FUN_00486d00
// Address: 00486d00
void __cdecl CDraculaBride::addFilesToExtract(CDraculaBride *this_ptr,_FILE *file_handle);

// Original: core_dracbrid.cpp_SFreaky_ctor_FUN_00486d30
// Address: 00486d30
SFreaky * __cdecl SFreaky::ctor(SFreaky *this_ptr);

// Original: core_dracbrid.cpp_SFreaky_dtor_FUN_00486d50
// Address: 00486d50
SFreaky * __cdecl SFreaky::dtor(SFreaky *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_dtor_FUN_00486d70
// Address: 00486d70
CDraculaBride * __cdecl CDraculaBride::dtor(CDraculaBride *this_ptr,uint flags);

// Original: core_dracbrid.cpp_freeVectors_FUN_00486e30
// Address: 00486e30
CVector3f * __cdecl freeVectors(CVector3f *objs);

// Original: core_dracbrid.cpp_freeFreaky_FUN_00486e50
// Address: 00486e50
SFreaky * __cdecl freeFreaky(SFreaky *objs);
