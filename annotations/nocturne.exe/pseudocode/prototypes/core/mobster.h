#pragma once

// Function prototypes for core/mobster.cpp
// Generated from Ghidra function signatures

// Original: core_mobster.cpp_staticInit_FUN_004d9fd0
// Address: 004d9fd0
void __cdecl staticInit(void);

// Original: core_mobster.cpp_FUN_004da000
// Address: 004da000
float * FUN_004da000(void);

// Original: core_mobster.cpp_FUN_004da070
// Address: 004da070
CVector3f * FUN_004da070(CVector3f *param_1,CDemonActor *param_2);

// Original: core_mobster.cpp_FUN_004da120
// Address: 004da120
void FUN_004da120(void);

// Original: core_mobster.cpp_FUN_004da140
// Address: 004da140
CDemonActorType * FUN_004da140(void);

// Original: core_mobster.cpp_CMobster_ctor_FUN_004da150
// Address: 004da150
CMobster * __cdecl CMobster::ctor(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_setup_FUN_004da290
// Address: 004da290
void CMobster::setup(CEnemy *param_1);

// Original: core_mobster.cpp_CMobster_positionOnVehicle_FUN_004da5a0
// Address: 004da5a0
void __cdecl CMobster::positionOnVehicle(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_dismountVehicle_FUN_004da670
// Address: 004da670
void __cdecl CMobster::dismountVehicle(CMobster *this_ptr);

// Original: core_mobster.cpp_FUN_004da790
// Address: 004da790
void FUN_004da790(CPathMap *param_1,float param_2);

// Original: core_mobster.cpp_CMobster_aimTommyGun_FUN_004db6f0
// Address: 004db6f0
void __cdecl CMobster::aimTommyGun(CMobster *this_ptr,float delta_time);

// Original: core_mobster.cpp_FUN_004dba50
// Address: 004dba50
void FUN_004dba50(void);

// Original: core_mobster.cpp_FUN_004dba70
// Address: 004dba70
void FUN_004dba70(int param_1,int param_2);

// Original: core_mobster.cpp_CMobster_processWeaponPickup_FUN_004dbce0
// Address: 004dbce0
int __cdecl CMobster::processWeaponPickup(CMobster *this_ptr,float delta_time);

// Original: core_mobster.cpp_CMobster_startFiringAttack_FUN_004dc110
// Address: 004dc110
void __cdecl CMobster::startFiringAttack(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_archive_FUN_004dc180
// Address: 004dc180
void CMobster::archive(CEnemy *param_1);

// Original: core_mobster.cpp_FUN_004dc2b0
// Address: 004dc2b0
undefined4 FUN_004dc2b0(void);

// Original: core_mobster.cpp_CMobster_processDismemberment_FUN_004dc2d0
// Address: 004dc2d0
void __cdecl CMobster::processDismemberment(CMobster *this_ptr,SDamageInfo *damage_info);

// Original: core_mobster.cpp_CMobster_processDamage_FUN_004dc690
// Address: 004dc690
void CMobster::processDamage(CMobster *param_1,SDamageInfo *param_2);

// Original: core_mobster.cpp_FUN_004dc820
// Address: 004dc820
int FUN_004dc820(int param_1,CVector3f *param_2);

// Original: core_mobster.cpp_FUN_004dc920
// Address: 004dc920
void FUN_004dc920(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_mobster.cpp_CMobster_playTaunt_FUN_004dc940
// Address: 004dc940
void __cdecl CMobster::playTaunt(CMobster *this_ptr,int taunt_category);

// Original: core_mobster.cpp_CMobster_dtor_FUN_004dcac0
// Address: 004dcac0
CDemonActor * CMobster::dtor(CDemonActor *param_1,byte param_2);
