#pragma once

// Function prototypes for core/melee.cpp
// Generated from Ghidra function signatures

// Original: core_melee.cpp_staticInit_FUN_004cec00
// Address: 004cec00
void __cdecl staticInit(void);

// Original: core_melee.cpp_factoryFunc_FUN_004cec30
// Address: 004cec30
CMelee * __cdecl factoryFunc(void);

// Original: core_melee.cpp_CMelee_getActorType_FUN_004cec50
// Address: 004cec50
CDemonActorType * __cdecl CMelee::getActorType(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_ctor_FUN_004cec60
// Address: 004cec60
CMelee * __cdecl CMelee::ctor(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_archive_FUN_004cedb0
// Address: 004cedb0
void __cdecl CMelee::archive(CMelee *this_ptr);

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
int __cdecl CMelee::canPickup(CMelee *this_ptr,CDemonActor *picker);

// Original: core_melee.cpp_CMelee_getAllowedMeleeAttackTypes_FUN_004cef70
// Address: 004cef70
int __cdecl CMelee::getAllowedMeleeAttackTypes(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_004cef80
// Address: 004cef80
void __cdecl CMelee::fillAttackDamageInfo(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim);

// Original: core_melee.cpp_CMelee_playAttackHitEffects_FUN_004cefe0
// Address: 004cefe0
void __cdecl CMelee::playAttackHitEffects(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim);

// Original: core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004cf090
// Address: 004cf090
void __cdecl CMelee::initBloodSpurtEffects(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type);

// Original: core_melee.cpp_CMelee_process_FUN_004cf0c0
// Address: 004cf0c0
void __cdecl CMelee::process(CMelee *this_ptr,float delta_time);

// Original: core_melee.cpp_CMelee_setWeaponState_FUN_004cf180
// Address: 004cf180
void __cdecl CMelee::setWeaponState(CMelee *this_ptr,int weapon_state);

// Original: core_melee.cpp_CMelee_dtor_FUN_004cf1a0
// Address: 004cf1a0
CMelee * __cdecl CMelee::dtor(CMelee *this_ptr,uint flags);
