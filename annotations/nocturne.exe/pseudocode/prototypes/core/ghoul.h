#pragma once

// Function prototypes for core/ghoul.cpp
// Generated from Ghidra function signatures

// Original: core_ghoul.cpp_staticInit_FUN_004a8c10
// Address: 004a8c10
void __cdecl staticInit(void);

// Original: core_ghoul.cpp_factoryFunc_FUN_004a8c70
// Address: 004a8c70
CGhoul * __cdecl factoryFunc(void);

// Original: core_ghoul.cpp_CGhoul_getActorType_FUN_004a8c90
// Address: 004a8c90
CDemonActorType * CGhoul::getActorType(void);

// Original: core_ghoul.cpp_CGhoul_ctor_FUN_004a8ca0
// Address: 004a8ca0
CGhoul * __cdecl CGhoul::ctor(CGhoul *this_ptr);

// Original: core_ghoul.cpp_CGhoul_setup_FUN_004a8dd0
// Address: 004a8dd0
void CGhoul::setup(CEnemy *param_1);

// Original: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004a9040
// Address: 004a9040
void __cdecl CGhoul::findDarkWayPoint(CGhoul *this_ptr,float delta_time);

// Original: core_ghoul.cpp_CGhoul_process_FUN_004a9270
// Address: 004a9270
void CGhoul::process(CGhoul *param_1,float param_2);

// Original: core_ghoul.cpp_CGhoul_renderBackground_FUN_004aae00
// Address: 004aae00
void CGhoul::renderBackground(CEnemy *param_1,int param_2);

// Original: core_ghoul.cpp_CGhoul_archive_FUN_004aae30
// Address: 004aae30
void CGhoul::archive(CEnemy *param_1);

// Original: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004aaf40
// Address: 004aaf40
undefined4 CGhoul::canBeAttracted(CDemonActor *param_1,CVector3f *param_2);

// Original: core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004ab110
// Address: 004ab110
CVector3f * CGhoul::getTargetPoint(int param_1,CVector3f *param_2);

// Original: core_ghoul.cpp_CGhoul_processDismemberment_FUN_004ab190
// Address: 004ab190
void __cdecl CGhoul::processDismemberment(CGhoul *this_ptr,SDamageInfo *damage_info);

// Original: core_ghoul.cpp_CGhoul_processDamage_FUN_004ab450
// Address: 004ab450
void CGhoul::processDamage(CGhoul *param_1,SDamageInfo *param_2);

// Original: core_ghoul.cpp_CGhoul_getTargetPoints_FUN_004ab830
// Address: 004ab830
int __cdecl CGhoul::getTargetPoints(CGhoul *this_ptr,CVector3f *out_points_array);

// Original: core_ghoul.cpp_CGhoul_dtor_FUN_004aba30
// Address: 004aba30
CGhoul * __cdecl CGhoul::dtor(CGhoul *this_ptr,uint flags);
