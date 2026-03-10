#pragma once

// Function prototypes for core/melee.cpp
// Generated from Ghidra function signatures

// Original: core_melee.cpp_staticInit_FUN_0050e760
// Address: 0050e760
void __cdecl staticInit(void);

// Original: core_melee.cpp_factoryFunc_FUN_0050e790
// Address: 0050e790
CMelee * __cdecl factoryFunc(void);

// Original: core_melee.cpp_CMelee_getActorType_FUN_0050e7c0
// Address: 0050e7c0
CDemonActorType * __cdecl CMelee::getActorType(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_ctor_FUN_0050e7d0
// Address: 0050e7d0
CMelee * __cdecl CMelee::ctor(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_archive_FUN_0050e920
// Address: 0050e920
void __cdecl CMelee::archive(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_fire_FUN_0050ea40
// Address: 0050ea40
int __cdecl CMelee::fire(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_getDamage_FUN_0050ea70
// Address: 0050ea70
float __cdecl CMelee::getDamage(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_fireProjectile_FUN_0050eaa0
// Address: 0050eaa0
void __cdecl CMelee::fireProjectile(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_canPickup_FUN_0050eab0
// Address: 0050eab0
int __cdecl CMelee::canPickup(CMelee *this_ptr,CDemonActor *picker);

// Original: core_melee.cpp_CMelee_getAllowedMeleeAttackTypes_FUN_0050eae0
// Address: 0050eae0
int __cdecl CMelee::getAllowedMeleeAttackTypes(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_0050eaf0
// Address: 0050eaf0
void __cdecl CMelee::fillAttackDamageInfo(CMelee *this_ptr,int attack_flags,SDamageInfo *out_damage_info,CDemonActor *victim);

// Original: core_melee.cpp_CMelee_playAttackHitEffects_FUN_0050eb50
// Address: 0050eb50
void __cdecl CMelee::playAttackHitEffects(CMelee *this_ptr,int attack_flags,SDamageInfo *damage_info,CDemonActor *victim);

// Original: core_melee.cpp_CMelee_FUN_0050ebe0
// Address: 0050ebe0
void __cdecl CMelee(CMelee *this_ptr);

// Original: core_melee.cpp_CMelee_process_FUN_0050ec10
// Address: 0050ec10
void __cdecl CMelee::process(CMelee *this_ptr,float delta_time);

// Original: core_melee.cpp_CMelee_setWeaponState_FUN_0050ecd0
// Address: 0050ecd0
void __cdecl CMelee::setWeaponState(CMelee *this_ptr,int weapon_state);

// Original: core_melee.cpp_CMelee_getPropertyList_FUN_0050ecf0
// Address: 0050ecf0
void __cdecl CMelee::getPropertyList(CMelee *this_ptr,CActorPropertyList *property_list);

// Original: core_melee.cpp_CMelee_dtor_FUN_0050edf0
// Address: 0050edf0
CMelee * __cdecl CMelee::dtor(CMelee *this_ptr,uint flags);
