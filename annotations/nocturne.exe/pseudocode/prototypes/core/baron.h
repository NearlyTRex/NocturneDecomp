#pragma once

// Function prototypes for core/baron.cpp
// Generated from Ghidra function signatures

// Original: core_baron.cpp_staticInit_FUN_00410140
// Address: 00410140
void __cdecl staticInit(void);

// Original: core_baron.cpp_factoryFuncBaron_FUN_004101a0
// Address: 004101a0
CBaron * __cdecl factoryFuncBaron(void);

// Original: core_baron.cpp_CBaron_getActorType_FUN_004101c0
// Address: 004101c0
CDemonActorType * __cdecl CBaron::getActorType(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_ctor_FUN_004101d0
// Address: 004101d0
CBaron * __cdecl CBaron::ctor(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_setup_FUN_004102c0
// Address: 004102c0
void __cdecl CBaron::setup(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_process_FUN_00410490
// Address: 00410490
void __cdecl CBaron::process(CBaron *this_ptr,float delta_time);

// Original: core_baron.cpp_CBaron_attachToOwner_FUN_00410a80
// Address: 00410a80
void __cdecl CBaron::attachToOwner(CBaron *this_ptr,CDemonActor *target);

// Original: core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0
// Address: 00410bb0
void __cdecl CBaron::detachFromOwner(CBaron *this_ptr,CDemonActor *target);

// Original: core_baron.cpp_CBaron_updateMountedPosition_FUN_00410bf0
// Address: 00410bf0
void __cdecl CBaron::updateMountedPosition(CBaron *this_ptr,float delta_time);

// Original: core_baron.cpp_CBaron_FUN_00410cc0
// Address: 00410cc0
void __cdecl CBaron(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_advanceMotion_FUN_00411010
// Address: 00411010
void __cdecl CBaron::advanceMotion(CBaron *this_ptr,float delta_time);

// Original: core_baron.cpp_CBaron_archive_FUN_00411080
// Address: 00411080
void __cdecl CBaron::archive(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_renderOpaque_FUN_004110e0
// Address: 004110e0
int __cdecl CBaron::renderOpaque(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_renderTransparent_FUN_004110f0
// Address: 004110f0
int __cdecl CBaron::renderTransparent(CBaron *this_ptr);

// Original: core_baron.cpp_CBaron_processDamage_FUN_004112f0
// Address: 004112f0
void __cdecl CBaron::processDamage(CBaron *this_ptr,SDamageInfo *damage_info);

// Original: core_baron.cpp_CBaron_handlePureVirtualCall_FUN_00411310
// Address: 00411310
void CBaron::handlePureVirtualCall(void);

// Original: core_baron.cpp_factoryFuncBaronWeapon_FUN_00411320
// Address: 00411320
CBaronWeapon * __cdecl factoryFuncBaronWeapon(void);

// Original: core_baron.cpp_CBaronWeapon_getActorType_FUN_00411340
// Address: 00411340
CDemonActorType * __cdecl CBaronWeapon::getActorType(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_ctor_FUN_00411350
// Address: 00411350
CBaronWeapon * __cdecl CBaronWeapon::ctor(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_setup_FUN_004113b0
// Address: 004113b0
void __cdecl CBaronWeapon::setup(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_process_FUN_004113d0
// Address: 004113d0
void __cdecl CBaronWeapon::process(CBaronWeapon *this_ptr,float delta_time);

// Original: core_baron.cpp_CBaronWeapon_renderOpaque_FUN_004113f0
// Address: 004113f0
void __cdecl CBaronWeapon::renderOpaque(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_fire_FUN_00411400
// Address: 00411400
int __cdecl CBaronWeapon::fire(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00411440
// Address: 00411440
int __cdecl CBaronWeapon::isReadyToFire(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaron_fireProjectile_FUN_00411470
// Address: 00411470
void __cdecl CBaron::fireProjectile(CBaron *this_ptr);

// Original: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004114a0
// Address: 004114a0
void __cdecl CBaronWeapon::setWeaponState(CBaronWeapon *this_ptr,int weapon_state);

// Original: core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530
// Address: 00411530
void __cdecl CBaronWeapon::findOrCreateBaron(CBaronWeapon *this_ptr);

// Original: core_baron.cpp_CBaron_getCollisionType_FUN_00411600
// Address: 00411600
ECollisionType __cdecl CBaron::getCollisionType(CBaron *this_ptr,SCollisionInfo *collision_info);

// Original: core_baron.cpp_CBaronWeapon_dtor_FUN_00411610
// Address: 00411610
CBaronWeapon * __cdecl CBaronWeapon::dtor(CBaronWeapon *this_ptr,uint flags);

// Original: core_baron.cpp_CBaron_dtor_FUN_00411660
// Address: 00411660
CBaron * __cdecl CBaron::dtor(CBaron *this_ptr,uint flags);
