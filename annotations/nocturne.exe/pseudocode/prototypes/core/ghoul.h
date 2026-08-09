#pragma once

// Function prototypes for core/ghoul.cpp
// Generated from Ghidra function signatures

// Original: core_ghoul.cpp_staticInit_FUN_004a8c10
// Address: 004a8c10
void __cdecl staticInit(void);

// Original: core_ghoul.cpp_factoryFuncGhoul_FUN_004a8c70
// Address: 004a8c70
CGhoul * __cdecl factoryFuncGhoul(void);

// Original: core_ghoul.cpp_CGhoul_getActorType_FUN_004a8c90
// Address: 004a8c90
CDemonActorType * __cdecl CGhoul::getActorType(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_ctor_FUN_004a8ca0
// Address: 004a8ca0
CGhoul * __cdecl CGhoul::ctor(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_setup_FUN_004a8dd0
// Address: 004a8dd0
void __cdecl CGhoul::setup(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004a9040
// Address: 004a9040
void __cdecl CGhoul::findDarkWayPoint(CGhoul *this_ptr,float delta_time);

// Original: core_ghoul.cpp_CGhoul_process_FUN_004a9270
// Address: 004a9270
void __cdecl CGhoul::process(CGhoul *this_ptr,float delta_time);

// Original: core_ghoul.cpp_CGhoul_renderBackground_FUN_004aae00
// Address: 004aae00
void __cdecl CGhoul::renderBackground(CGhoul *this_ptr,int layer_flag);

// Original: core_ghoul.cpp_CGhoul_archive_FUN_004aae30
// Address: 004aae30
void __cdecl CGhoul::archive(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004aaf40
// Address: 004aaf40
int __cdecl CGhoul::canBeAttracted(CGhoul *this_ptr,CVector3f *out_attract_position);

// Original: core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004ab110
// Address: 004ab110
CVector3f * __cdecl CGhoul::getTargetPoint(CGhoul *this_ptr,CVector3f *out_point);

// Original: core_ghoul.cpp_CGhoul_processDismemberment_FUN_004ab190
// Address: 004ab190
void __cdecl CGhoul::processDismemberment(CGhoul *this_ptr,SDamageInfo *damage_info);

// Original: core_ghoul.cpp_CGhoul_processDamage_FUN_004ab450
// Address: 004ab450
void __cdecl CGhoul::processDamage(CGhoul *this_ptr,SDamageInfo *damage_info);

// Original: core_ghoul.cpp_CGhoul_getTargetPoints_FUN_004ab830
// Address: 004ab830
int __cdecl CGhoul::getTargetPoints(CGhoul *this_ptr,CVector3f *out_points_array);

// Original: core_ghoul.cpp_CGhoul_dtor_FUN_004aba30
// Address: 004aba30
CGhoul * __cdecl CGhoul::dtor(CGhoul *this_ptr,uint flags);
