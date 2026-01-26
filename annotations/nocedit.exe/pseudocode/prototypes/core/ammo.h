#pragma once

// Function prototypes for core/ammo.cpp
// Generated from Ghidra function signatures

// Original: core_ammo.cpp_staticInit_FUN_00410d50
// Address: 00410d50
void staticInit(void);

// Original: core_ammo.cpp_factoryFunc_FUN_00410d80
// Address: 00410d80
CAmmo * factoryFunc(void);

// Original: core_ammo.cpp_CAmmo_getActorType_FUN_00410db0
// Address: 00410db0
CDemonActorType * CAmmo::getActorType(CAmmo * this_ptr);

// Original: core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
// Address: 00410dc0
CAmmo * CAmmo::ctor(CAmmo * this_ptr);

// Original: core_ammo.cpp_CAmmo_setup_FUN_00410e50
// Address: 00410e50
void CAmmo::setup(CAmmo * this_ptr);

// Original: core_ammo.cpp_CAmmo_process_FUN_00410e70
// Address: 00410e70
void CAmmo::process(CAmmo * this_ptr, float delta_time);

// Original: core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80
// Address: 00410e80
int CAmmo::renderOpaque(CAmmo * this_ptr);

// Original: core_ammo.cpp_CAmmo_getBoundingBox_FUN_00410ef0
// Address: 00410ef0
CBoundingBox3D * CAmmo::getBoundingBox(CAmmo * this_ptr, CBoundingBox3D * out_box);

// Original: core_ammo.cpp_CAmmo_serialize_FUN_00410f40
// Address: 00410f40
void CAmmo::serialize(CAmmo * this_ptr);

// Original: core_ammo.cpp_CAmmo_hasCollision_FUN_00410fa0
// Address: 00410fa0
int CAmmo::hasCollision(CAmmo * this_ptr, SCollisionInfo * collision_info);

// Original: core_ammo.cpp_CAmmo_FUN_00410fd0
// Address: 00410fd0
undefined CAmmo();

// Original: core_ammo.cpp_CAmmo_FUN_004111b0
// Address: 004111b0
undefined CAmmo();

// Original: core_ammo.cpp_CAmmo_canPickup_FUN_004111c0
// Address: 004111c0
int CAmmo::canPickup(CAmmo * this_ptr, CDemonActor * picker);

// Original: core_ammo.cpp_FUN_00411200
// Address: 00411200
undefined FUN_00411200();

// Original: core_ammo.cpp_FUN_004112b0
// Address: 004112b0
undefined FUN_004112b0();

// Original: core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360
// Address: 00411360
void CAmmo::getPropertyList(CAmmo * this_ptr, CActorPropertyList * property_list);

// Original: core_ammo.cpp_CAmmo_writeDependencies_FUN_004113e0
// Address: 004113e0
void CAmmo::writeDependencies(CAmmo * this_ptr, FILE * file_handle);

// Original: core_ammo.cpp_CAmmo_dtor_FUN_004114e0
// Address: 004114e0
CAmmo * CAmmo::dtor(CAmmo * this_ptr, uint d1, uint d2);
