#pragma once

// Function prototypes for core/baron.cpp
// Generated from Ghidra function signatures

// Original: core_baron.cpp_CBaron_ctor_FUN_004101d0
// Address: 004101d0
int CBaron::ctor(undefined4 param_1);

// Original: core_baron.cpp_CBaron_setup_FUN_004102c0
// Address: 004102c0
void CBaron::setup(int param_1);

// Original: core_baron.cpp_CBaron_attachToOwner_FUN_00410a80
// Address: 00410a80
void __cdecl CBaron::attachToOwner(int param_1,int param_2);

// Original: core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0
// Address: 00410bb0
void __cdecl CBaron::detachFromOwner(int param_1,int param_2);

// Original: core_baron.cpp_CBaron_updateMountedPosition_FUN_00410bf0
// Address: 00410bf0
void __cdecl CBaron::updateMountedPosition(int param_1);

// Original: core_baron.cpp_CBaron_advanceMotion_FUN_00411010
// Address: 00411010
void CBaron::advanceMotion(int param_1,float param_2);

// Original: core_baron.cpp_CBaron_archive_FUN_00411080
// Address: 00411080
void CBaron::archive(int param_1);

// Original: core_baron.cpp_CBaron_processDamage_FUN_004112f0
// Address: 004112f0
undefined4 CBaron::processDamage(undefined4 param_1,int param_2);

// Original: core_baron.cpp_CBaronWeapon_ctor_FUN_00411350
// Address: 00411350
void CBaronWeapon::ctor(undefined4 param_1);

// Original: core_baron.cpp_CBaronWeapon_setup_FUN_004113b0
// Address: 004113b0
void CBaronWeapon::setup(undefined4 param_1);

// Original: core_baron.cpp_CBaronWeapon_process_FUN_004113d0
// Address: 004113d0
void CBaronWeapon::process(undefined4 param_1,undefined4 param_2);

// Original: core_baron.cpp_CBaronWeapon_fire_FUN_00411400
// Address: 00411400
undefined4 CBaronWeapon::fire(int param_1);

// Original: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00411440
// Address: 00411440
undefined8 CBaronWeapon::isReadyToFire(int param_1);

// Original: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004114a0
// Address: 004114a0
void CBaronWeapon::setWeaponState(int param_1,undefined4 param_2);

// Original: core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530
// Address: 00411530
void __cdecl CBaronWeapon::findOrCreateBaron(int param_1);
