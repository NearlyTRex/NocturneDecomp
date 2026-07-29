#pragma once

// Function prototypes for core/melee.cpp
// Generated from Ghidra function signatures

// Original: core_melee.cpp_staticInit_FUN_004cec00
// Address: 004cec00
void __cdecl staticInit(void);

// Original: core_melee.cpp_FUN_004cec30
// Address: 004cec30
void FUN_004cec30(void);

// Original: core_melee.cpp_FUN_004cec50
// Address: 004cec50
CDemonActorType * FUN_004cec50(void);

// Original: core_melee.cpp_CMelee_ctor_FUN_004cec60
// Address: 004cec60
CMelee * __cdecl CMelee::ctor(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_archive_FUN_004cedb0
// Address: 004cedb0
void CMelee::archive(CWeapon *param_1);

// Original: core_melee.cpp_CMelee_fire_FUN_004ceed0
// Address: 004ceed0
int __cdecl CMelee::fire(CMelee *this_ptr);

// Original: core_melee.cpp_FUN_004cef00
// Address: 004cef00
float FUN_004cef00(int param_1);

// Original: core_melee.cpp_FUN_004cef30
// Address: 004cef30
void FUN_004cef30(void);

// Original: core_melee.cpp_CMelee_canPickup_FUN_004cef40
// Address: 004cef40
undefined4 CMelee::canPickup(int param_1,CDemonActor *param_2);

// Original: core_melee.cpp_FUN_004cef70
// Address: 004cef70
undefined4 FUN_004cef70(int param_1);

// Original: core_melee.cpp_FUN_004cef80
// Address: 004cef80
void FUN_004cef80(int param_1,undefined4 param_2,int param_3,undefined4 param_4);

// Original: core_melee.cpp_FUN_004cefe0
// Address: 004cefe0
void FUN_004cefe0(CMelee *param_1,int param_2,SDamageInfo *param_3,CDemonActor *param_4);

// Original: core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004cf090
// Address: 004cf090
void __cdecl CMelee::initBloodSpurtEffects(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type);

// Original: core_melee.cpp_CMelee_process_FUN_004cf0c0
// Address: 004cf0c0
void CMelee::process(CCharacter *param_1,float param_2);

// Original: core_melee.cpp_CMelee_setWeaponState_FUN_004cf180
// Address: 004cf180
void CMelee::setWeaponState(CWeapon *param_1,int param_2);

// Original: core_melee.cpp_FUN_004cf1a0
// Address: 004cf1a0
CWeapon * FUN_004cf1a0(CWeapon *param_1,byte param_2);
