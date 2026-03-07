#pragma once

// Function prototypes for core/weapon.cpp
// Generated from Ghidra function signatures

// Original: core_weapon.cpp_staticInit_FUN_005ede40
// Address: 005ede40
void __cdecl staticInit(void);

// Original: core_weapon.cpp_CWeapon_ctor_FUN_005ede70
// Address: 005ede70
CWeapon * __cdecl CWeapon::ctor(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_dtor_FUN_005edf80
// Address: 005edf80
CWeapon * __cdecl CWeapon::dtor(CWeapon *this_ptr,uint flags);

// Original: core_weapon.cpp_CWeapon_setup_FUN_005edff0
// Address: 005edff0
void __cdecl CWeapon::setup(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_renderOpaque_FUN_005ee030
// Address: 005ee030
int __cdecl CWeapon::renderOpaque(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_getBoundingBox_FUN_005ee0c0
// Address: 005ee0c0
CBoundingBox3D * __cdecl CWeapon::getBoundingBox(CWeapon *this_ptr,CBoundingBox3D *out_box);

// Original: core_weapon.cpp_CWeapon_process_FUN_005ee110
// Address: 005ee110
void __cdecl CWeapon::process(CWeapon *this_ptr,float delta_time);

// Original: core_weapon.cpp_CWeapon_archive_FUN_005ee250
// Address: 005ee250
void __cdecl CWeapon::archive(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_hasCollision_FUN_005ee330
// Address: 005ee330
int __cdecl CWeapon::hasCollision(CWeapon *this_ptr,SCollisionInfo *collision_info);

// Original: core_weapon.cpp_CWeapon_canPickup_FUN_005ee340
// Address: 005ee340
int __cdecl CWeapon::canPickup(CWeapon *this_ptr,CDemonActor *picker);

// Original: core_weapon.cpp_CWeapon_pickup_FUN_005ee3e0
// Address: 005ee3e0
void __cdecl CWeapon::pickup(CWeapon *this_ptr,CDemonActor *carrier);

// Original: core_weapon.cpp_CWeapon_onDropped_FUN_005ee3f0
// Address: 005ee3f0
void __cdecl CWeapon::onDropped(CWeapon *this_ptr,CVector3f *drop_position);

// Original: core_weapon.cpp_CWeapon_getCarrier_FUN_005ee490
// Address: 005ee490
CDemonActor * __cdecl CWeapon::getCarrier(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_updateLighting_FUN_005ee4a0
// Address: 005ee4a0
void __cdecl CWeapon::updateLighting(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_setWeaponState_FUN_005ee640
// Address: 005ee640
void __cdecl CWeapon::setWeaponState(CWeapon *this_ptr,int weapon_state);

// Original: core_weapon.cpp_CWeapon_onPickup_FUN_005ee650
// Address: 005ee650
void __cdecl CWeapon::onPickup(CWeapon *this_ptr,CDemonActor *owner);

// Original: core_weapon.cpp_CWeapon_getMuzzlePoint_FUN_005ee670
// Address: 005ee670
CVector3f * __cdecl CWeapon::getMuzzlePoint(CWeapon *this_ptr,CVector3f *out_point);

// Original: core_weapon.cpp_CWeapon_fire_FUN_005ee6e0
// Address: 005ee6e0
int __cdecl CWeapon::fire(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_isReadyToFire_FUN_005ee710
// Address: 005ee710
int __cdecl CWeapon::isReadyToFire(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_getDamage_FUN_005ee730
// Address: 005ee730
float __cdecl CWeapon::getDamage(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_005ee740
// Address: 005ee740
void __cdecl CWeapon::setupPhysicsBox(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_fireProjectile_FUN_005ee830
// Address: 005ee830
void __cdecl CWeapon::fireProjectile(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_onFired_FUN_005ee860
// Address: 005ee860
void __cdecl CWeapon::onFired(CWeapon *this_ptr);

// Original: core_weapon.cpp_CWeapon_getPropertyList_FUN_005ee9f0
// Address: 005ee9f0
void __cdecl CWeapon::getPropertyList(CWeapon *this_ptr,CActorPropertyList *property_list);

// Original: core_weapon.cpp_CWeapon_addFilesToExtract_FUN_005eea60
// Address: 005eea60
void __cdecl CWeapon::addFilesToExtract(CWeapon *this_ptr,_FILE *file_handle);

// Original: core_weapon.cpp_CDemonGlobe_ctor_FUN_005eea80
// Address: 005eea80
CDemonGlobe * __cdecl CDemonGlobe::ctor(CDemonGlobe *this_ptr);

// Original: core_weapon.cpp_CDemonGlobe_dtor_FUN_005eea90
// Address: 005eea90
CDemonGlobe * __cdecl CDemonGlobe::dtor(CDemonGlobe *this_ptr,uint flags);
