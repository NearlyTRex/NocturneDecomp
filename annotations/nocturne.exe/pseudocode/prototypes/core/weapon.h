#pragma once

// Function prototypes for core/weapon.cpp
// Generated from Ghidra function signatures

// Original: core_weapon.cpp_CWeapon_ctor_FUN_00553d90
// Address: 00553d90
int __cdecl CWeapon::ctor(undefined4 param_1);

// Original: core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
// Address: 00553ea0
int __cdecl CWeapon::dtor(int param_1,byte param_2);

// Original: core_weapon.cpp_CWeapon_setup_FUN_00553f10
// Address: 00553f10
void __cdecl CWeapon::setup(int param_1);

// Original: core_weapon.cpp_CWeapon_process_FUN_00554030
// Address: 00554030
void __cdecl CWeapon::process(int param_1,float param_2);

// Original: core_weapon.cpp_CWeapon_archive_FUN_00554170
// Address: 00554170
void __cdecl CWeapon::archive(int param_1);

// Original: core_weapon.cpp_CWeapon_canPickup_FUN_00554260
// Address: 00554260
undefined4 __cdecl CWeapon::canPickup(int param_1,undefined4 param_2);

// Original: core_weapon.cpp_CWeapon_updateLighting_FUN_005543c0
// Address: 005543c0
void CWeapon::updateLighting(int param_1);

// Original: core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560
// Address: 00554560
void __cdecl CWeapon::setWeaponState(int param_1,undefined4 param_2);

// Original: core_weapon.cpp_CWeapon_fire_FUN_00554600
// Address: 00554600
undefined4 __cdecl CWeapon::fire(int param_1);

// Original: core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_00554660
// Address: 00554660
void __cdecl CWeapon::setupPhysicsBox(int param_1);

// Original: core_weapon.cpp_CWeapon_fireProjectile_FUN_00554750
// Address: 00554750
void CWeapon::fireProjectile(int param_1);
