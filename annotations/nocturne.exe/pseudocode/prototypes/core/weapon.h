#pragma once

// Function prototypes for core/weapon.cpp
// Generated from Ghidra function signatures

// Original: core_weapon.cpp_staticInit_FUN_00553d60
// Address: 00553d60
void __cdecl staticInit(void);

// Original: core_weapon.cpp_CWeapon_ctor_FUN_00553d90
// Address: 00553d90
CWeapon * __cdecl CWeapon::ctor(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
// Address: 00553ea0
CWeapon * __cdecl CWeapon::dtor(CWeapon *this_ptr,uint flags);

// Original: core_weapon.cpp_CWeapon_setup_FUN_00553f10
// Address: 00553f10
void __cdecl CWeapon::setup(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_renderOpaque_FUN_00553f50
// Address: 00553f50
int __cdecl CWeapon::renderOpaque(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_getBoundingBox_FUN_00553fe0
// Address: 00553fe0
undefined4 * CWeapon::getBoundingBox(int param_1,undefined4 *param_2);

// Original: core_weapon.cpp_CWeapon_process_FUN_00554030
// Address: 00554030
void __cdecl CWeapon::process(CWeapon *this_ptr,float delta_time);

// Original: core_weapon.cpp_CWeapon_archive_FUN_00554170
// Address: 00554170
void __cdecl CWeapon::archive(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_getCollisionType_FUN_00554250
// Address: 00554250
undefined4 CWeapon::getCollisionType(void);

// Original: core_weapon.cpp_CWeapon_canPickup_FUN_00554260
// Address: 00554260
int __cdecl CWeapon::canPickup(CWeapon *this_ptr,CDemonActor *picker);

// Original: core_weapon.cpp_CWeapon_pickup_FUN_00554300
// Address: 00554300
void CWeapon::pickup(int param_1,undefined4 param_2);

// Original: core_weapon.cpp_CWeapon_onDropped_FUN_00554310
// Address: 00554310
void CWeapon::onDropped(CCharacter *param_1,CVector3f *param_2);

// Original: core_weapon.cpp_CLadder_getGroundType_FUN_005543b0
// Address: 005543b0
EGroundType __cdecl CLadder::getGroundType(CLadder *this_ptr);

// Original: core_weapon.cpp_CWeapon_updateLighting_FUN_005543c0
// Address: 005543c0
void CWeapon::updateLighting(CCharacter *param_1);

// Original: core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560
// Address: 00554560
void __cdecl CWeapon::setWeaponState(CWeapon *this_ptr,int weapon_state);

// Original: core_weapon.cpp_CWeapon_onPickup_FUN_00554570
// Address: 00554570
void CWeapon::onPickup(CDemonActor *param_1,CDemonActor *param_2);

// Original: core_weapon.cpp_FUN_00554590
// Address: 00554590
undefined4 * FUN_00554590(int param_1,undefined4 *param_2);

// Original: core_weapon.cpp_CWeapon_fire_FUN_00554600
// Address: 00554600
int __cdecl CWeapon::fire(CWeapon *this_ptr);

// Original: core_weapon.cpp_FUN_00554630
// Address: 00554630
bool FUN_00554630(int param_1);

// Original: core_weapon.cpp_FUN_00554650
// Address: 00554650
undefined4 FUN_00554650(void);

// Original: core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_00554660
// Address: 00554660
void __cdecl CWeapon::setupPhysicsBox(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_fireProjectile_FUN_00554750
// Address: 00554750
void CWeapon::fireProjectile(CCharacter *param_1);

// Original: core_weapon.cpp_FUN_00554780
// Address: 00554780
void FUN_00554780(void);

// Original: core_weapon.cpp_FUN_00554910
// Address: 00554910
undefined4 FUN_00554910(undefined4 param_1);

// Original: core_weapon.cpp_FUN_00554920
// Address: 00554920
undefined4 FUN_00554920(undefined4 param_1);
