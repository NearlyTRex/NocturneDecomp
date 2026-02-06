#pragma once

// Function prototypes for core/ghoul.cpp
// Generated from Ghidra function signatures

// Original: core_ghoul.cpp_staticInit_FUN_004e5f90
// Address: 004e5f90
void __cdecl staticInit(void);

// Original: core_ghoul.cpp_factoryFunc_FUN_004e5ff0
// Address: 004e5ff0
CGhoul * __cdecl factoryFunc(void);

// Original: core_ghoul.cpp_CGhoul_getActorType_FUN_004e6020
// Address: 004e6020
CDemonActorType * __cdecl CGhoul::getActorType(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_ctor_FUN_004e6030
// Address: 004e6030
CGhoul * __cdecl CGhoul::ctor(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_setup_FUN_004e6160
// Address: 004e6160
void __cdecl CGhoul::setup(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0
// Address: 004e63d0
void __cdecl CGhoul::findDarkWayPoint(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_process_FUN_004e6600
// Address: 004e6600
void __cdecl CGhoul::process(CGhoul *this_ptr,float delta_time);

// Original: core_ghoul.cpp_CGhoul_renderBackground_FUN_004e8190
// Address: 004e8190
void __cdecl CGhoul::renderBackground(CGhoul *this_ptr,int layer_flag);

// Original: core_ghoul.cpp_CGhoul_archive_FUN_004e81c0
// Address: 004e81c0
void __cdecl CGhoul::archive(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_FUN_004e82d0
// Address: 004e82d0
int __cdecl CGhoul(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_FUN_004e84a0
// Address: 004e84a0
CVector3f * __cdecl CGhoul(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_FUN_004e8520
// Address: 004e8520
void __cdecl CGhoul(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_processDamage_FUN_004e87e0
// Address: 004e87e0
void __cdecl CGhoul::processDamage(CGhoul *this_ptr,SDamageInfo *damage_info);

// Original: core_ghoul.cpp_CGhoul_getTargetPoints_FUN_004e8bc0
// Address: 004e8bc0
int __cdecl CGhoul::getTargetPoints(CGhoul *this_ptr,CVector3f *out_points_array);

// Original: core_ghoul.cpp_CGhoul_getPropertyList_FUN_004e8dc0
// Address: 004e8dc0
void __cdecl CGhoul::getPropertyList(CGhoul *this_ptr,CActorPropertyList *property_list);

// Original: core_ghoul.cpp_CGhoul_FUN_004e8e40
// Address: 004e8e40
void __cdecl CGhoul(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_addFilesToExtract_FUN_004e8ee0
// Address: 004e8ee0
void __cdecl CGhoul::addFilesToExtract(CGhoul *this_ptr,_FILE *file_handle);

// Original: core_ghoul.cpp_CGhoul_dtor_FUN_004e8f10
// Address: 004e8f10
CGhoul * __cdecl CGhoul::dtor(CGhoul *this_ptr,uint flags);
