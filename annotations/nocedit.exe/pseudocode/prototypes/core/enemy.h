#pragma once

// Function prototypes for core/enemy.cpp
// Generated from Ghidra function signatures

// Original: core_enemy.cpp_staticInit_FUN_004a94d0
// Address: 004a94d0
void __cdecl staticInit(void);

// Original: core_enemy.cpp_CEnemy_ctor_FUN_004a9500
// Address: 004a9500
CEnemy * __cdecl CEnemy::ctor(CEnemy *this_ptr);

// Original: core_enemy.cpp_CEnemy_setup_FUN_004a9650
// Address: 004a9650
void __cdecl CEnemy::setup(CEnemy *this_ptr);

// Original: core_enemy.cpp_CEnemy_archive_FUN_004a9660
// Address: 004a9660
void __cdecl CEnemy::archive(CEnemy *this_ptr);

// Original: core_enemy.cpp_CEnemy_getTargetPoints_FUN_004a97c0
// Address: 004a97c0
int __cdecl CEnemy::getTargetPoints(CEnemy *this_ptr,CVector3f *out_points_array);

// Original: core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880
// Address: 004a9880
int __cdecl CEnemy::testAttackRadius(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info);

// Original: core_enemy.cpp_CEnemy_testAttackLine_FUN_004a9930
// Address: 004a9930
int __cdecl CEnemy::testAttackLine(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info);

// Original: core_enemy.cpp_CEnemy_getTargetPoint_FUN_004a99d0
// Address: 004a99d0
CVector3f * __cdecl CEnemy::getTargetPoint(CEnemy *this_ptr,CVector3f *out_point);

// Original: core_enemy.cpp_CEnemy_canSeeTarget_FUN_004a9a50
// Address: 004a9a50
int __cdecl CEnemy::canSeeTarget(CEnemy *this_ptr,CDemonActor *target);

// Original: core_enemy.cpp_CEnemy_updateVictim_FUN_004a9b00
// Address: 004a9b00
void __cdecl CEnemy::updateVictim(CEnemy *this_ptr,float delta_time);

// Original: core_enemy.cpp_CEnemy_setVictim_FUN_004a9ef0
// Address: 004a9ef0
void __cdecl CEnemy::setVictim(CEnemy *this_ptr,CDemonActor *victim);

// Original: core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
// Address: 004a9f10
void __cdecl CEnemy::processDamage(CEnemy *this_ptr,SDamageInfo *damage_info);

// Original: core_enemy.cpp_CEnemy_renderBackground_FUN_004a9fa0
// Address: 004a9fa0
void __cdecl CEnemy::renderBackground(CEnemy *this_ptr,int layer_flag);

// Original: core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0
// Address: 004a9fd0
int __cdecl CEnemy::updatePatrol(CEnemy *this_ptr,float delta_time);

// Original: core_enemy.cpp_CEnemy_releaseVictim_FUN_004aa030
// Address: 004aa030
void __cdecl CEnemy::releaseVictim(CEnemy *this_ptr);

// Original: core_enemy.cpp_CEnemy_onVictimLost_FUN_004aa0c0
// Address: 004aa0c0
void __cdecl CEnemy::onVictimLost(CEnemy *this_ptr,CDemonActor *lost_actor);

// Original: core_enemy.cpp_CEnemy_countSameClassAttackingHero_FUN_004aa0f0
// Address: 004aa0f0
int __cdecl CEnemy::countSameClassAttackingHero(CEnemy *this_ptr);

// Original: core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
// Address: 004aa170
int __cdecl CEnemy::getPropertyList(CEnemy *this_ptr,CActorPropertyList *property_list);

// Original: core_enemy.cpp_CEnemy_randomize_FUN_004aa250
// Address: 004aa250
void __cdecl CEnemy::randomize(CEnemy *this_ptr);
