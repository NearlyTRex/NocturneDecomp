#pragma once

// Function prototypes for core/gabriela.cpp
// Generated from Ghidra function signatures

// Original: core_gabriela.cpp_staticInit_FUN_004d2910
// Address: 004d2910
void __cdecl staticInit(void);

// Original: core_gabriela.cpp_weaponDrawBlendWeightCallback_FUN_004d29f0
// Address: 004d29f0
float __cdecl weaponDrawBlendWeightCallback(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance);

// Original: core_gabriela.cpp_flashlightBlendWeightCallback_FUN_004d2a30
// Address: 004d2a30
float __cdecl flashlightBlendWeightCallback(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance);

// Original: core_gabriela.cpp_aimRotationBlendWeightCallback_FUN_004d2a80
// Address: 004d2a80
float __cdecl aimRotationBlendWeightCallback(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *model_ptr);

// Original: core_gabriela.cpp_factoryFuncGabriella_FUN_004d2ae0
// Address: 004d2ae0
CGabriella * __cdecl factoryFuncGabriella(void);

// Original: core_gabriela.cpp_CGabriella_getActorType_FUN_004d2b10
// Address: 004d2b10
CDemonActorType * __cdecl CGabriella::getActorType(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_ctor_FUN_004d2b20
// Address: 004d2b20
CGabriella * __cdecl CGabriella::ctor(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_setup_FUN_004d2c40
// Address: 004d2c40
void __cdecl CGabriella::setup(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_process_FUN_004d2ea0
// Address: 004d2ea0
void __cdecl CGabriella::process(CGabriella *this_ptr,float delta_time);

// Original: core_gabriela.cpp_CGabriella_processAI_FUN_004d4190
// Address: 004d4190
void __cdecl CGabriella::processAI(CGabriella *this_ptr,float delta_time);

// Original: core_gabriela.cpp_CGabriella_processMotionEvents_FUN_004d4890
// Address: 004d4890
void __cdecl CGabriella::processMotionEvents(CGabriella *this_ptr,float delta_time);

// Original: core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004d4c90
// Address: 004d4c90
float __cdecl CGabriella::getFlashlightMinAngle(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_getFlashlightMaxAngle_FUN_004d4ce0
// Address: 004d4ce0
float __cdecl CGabriella::getFlashlightMaxAngle(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_getTorsoCenterPosition_FUN_004d4cf0
// Address: 004d4cf0
CVector3f * __cdecl CGabriella::getTorsoCenterPosition(CGabriella *this_ptr,CVector3f *out_position);

// Original: core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80
// Address: 004d4d80
void __cdecl CGabriella::updateWeaponAndAimAnimation(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004d5550
// Address: 004d5550
void __cdecl CGabriella::updateWeaponPosition(CGabriella *this_ptr,float delta_time);

// Original: core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004d5870
// Address: 004d5870
int __cdecl CGabriella::findAndPickupNearbyObject(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_collectAmmo_FUN_004d5c10
// Address: 004d5c10
void __cdecl CGabriella::collectAmmo(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004d5c60
// Address: 004d5c60
int __cdecl CGabriella::tryClimbLadder(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_canFireWeapon_FUN_004d5f70
// Address: 004d5f70
int __cdecl CGabriella::canFireWeapon(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_tryFireWeapon_FUN_004d5fe0
// Address: 004d5fe0
void __cdecl CGabriella::tryFireWeapon(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_tryThrowObject_FUN_004d6050
// Address: 004d6050
int __cdecl CGabriella::tryThrowObject(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_archive_FUN_004d6090
// Address: 004d6090
void __cdecl CGabriella::archive(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_renderOpaque_FUN_004d6140
// Address: 004d6140
int __cdecl CGabriella::renderOpaque(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_renderTransparent_FUN_004d6230
// Address: 004d6230
int __cdecl CGabriella::renderTransparent(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004d6260
// Address: 004d6260
float __cdecl CGabriella::scoreTargetVisibility(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov);

// Original: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004d6540
// Address: 004d6540
void __cdecl CGabriella::updateAimTracking(CGabriella *this_ptr,float delta_time,int is_holstering);

// Original: core_gabriela.cpp_CGabriella_processDamage_FUN_004d6b30
// Address: 004d6b30
void __cdecl CGabriella::processDamage(CGabriella *this_ptr,SDamageInfo *damage_info);

// Original: core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004d6d40
// Address: 004d6d40
void __cdecl CGabriella::updateClavicleCollisionAvoidance(CGabriella *this_ptr,float delta_time,int has_carried_objects);

// Original: core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80
// Address: 004d6f80
void __cdecl CGabriella::binarySearchClavicleBlend(CGabriella *this_ptr,float delta_time,float *clavicle_blend,int probe_bone_index,int blend_bone_index,CVector3f *probe_offset);

// Original: core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004d7120
// Address: 004d7120
void __stack2_esi CGabriella::getCarryObjToBodyXForm(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_gabriela.cpp_CGabriella_isWeaponDrawn_FUN_004d7590
// Address: 004d7590
int __cdecl CGabriella::isWeaponDrawn(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_drawWeapon_FUN_004d75b0
// Address: 004d75b0
void __cdecl CGabriella::drawWeapon(CGabriella *this_ptr,int drawn);

// Original: core_gabriela.cpp_CGabriella_onActorDeleted_FUN_004d75e0
// Address: 004d75e0
void __cdecl CGabriella::onActorDeleted(CGabriella *this_ptr,CDemonActor *deleted_actor);

// Original: core_gabriela.cpp_CGabriella_getPropertyList_FUN_004d7610
// Address: 004d7610
void __cdecl CGabriella::getPropertyList(CGabriella *this_ptr,CActorPropertyList *property_list);

// Original: core_gabriela.cpp_CGabriella_addFilesToExtract_FUN_004d7630
// Address: 004d7630
void __cdecl CGabriella::addFilesToExtract(CGabriella *this_ptr,_FILE *file_handle);

// Original: core_gabriela.cpp_getSelectedWeapon_FUN_004d7650
// Address: 004d7650
CWeapon * __cdecl getSelectedWeapon(CInventory *inventory_ptr);

// Original: core_gabriela.cpp_CGabriella_dtor_FUN_004d7660
// Address: 004d7660
CGabriella * __cdecl CGabriella::dtor(CGabriella *this_ptr,uint flags);
