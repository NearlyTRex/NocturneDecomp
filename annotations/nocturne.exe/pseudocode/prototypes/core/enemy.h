#pragma once

// Function prototypes for core/enemy.cpp
// Generated from Ghidra function signatures

// Original: core_enemy.cpp_staticInit_FUN_00479530
// Address: 00479530
void __cdecl staticInit(void);

// Original: core_enemy.cpp_CEnemy_ctor_FUN_00479560
// Address: 00479560
int __cdecl CEnemy::ctor(undefined4 param_1);

// Original: core_enemy.cpp_CEnemy_setup_FUN_004796b0
// Address: 004796b0
void __cdecl CEnemy::setup(undefined4 param_1);

// Original: core_enemy.cpp_CEnemy_archive_FUN_004796c0
// Address: 004796c0
void __cdecl CEnemy::archive(int param_1);

// Original: core_enemy.cpp_CEnemy_getTargetPoints_FUN_00479820
// Address: 00479820
undefined4 CEnemy::getTargetPoints(int param_1,float *param_2);

// Original: core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
// Address: 004798e0
undefined4 __cdecl CEnemy::testAttackRadius(int param_1,undefined4 *param_2,undefined4 param_3,int param_4);

// Original: core_enemy.cpp_CEnemy_testAttackLine_FUN_00479990
// Address: 00479990
undefined4 __cdecl CEnemy::testAttackLine(int param_1,undefined4 param_2,undefined4 param_3,int param_4);

// Original: core_enemy.cpp_CEnemy_getTargetPoint_FUN_00479a30
// Address: 00479a30
float * CEnemy::getTargetPoint(int param_1,float *param_2);

// Original: core_enemy.cpp_CEnemy_canSeeTarget_FUN_00479ab0
// Address: 00479ab0
bool __cdecl CEnemy::canSeeTarget(int param_1,int param_2);

// Original: core_enemy.cpp_FUN_00479b60
// Address: 00479b60
void FUN_00479b60(int param_1,float param_2);

// Original: core_enemy.cpp_CEnemy_setVictim_FUN_00479f50
// Address: 00479f50
void __cdecl CEnemy::setVictim(int param_1,undefined4 param_2);

// Original: core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
// Address: 00479f70
void __cdecl CEnemy::processDamage(int param_1,int param_2);

// Original: core_enemy.cpp_FUN_0047a000
// Address: 0047a000
void FUN_0047a000(int param_1,int param_2);

// Original: core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
// Address: 0047a030
void __cdecl CEnemy::updatePatrol(int param_1,undefined4 param_2);

// Original: core_enemy.cpp_CEnemy_releaseVictim_FUN_0047a090
// Address: 0047a090
void CEnemy::releaseVictim(int param_1);

// Original: core_enemy.cpp_CEnemy_onVictimLost_FUN_0047a120
// Address: 0047a120
void CEnemy::onVictimLost(int param_1,int param_2);

// Original: core_enemy.cpp_FUN_0047a150
// Address: 0047a150
int FUN_0047a150(undefined4 param_1);
