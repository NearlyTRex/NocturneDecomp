#pragma once

// Function prototypes for core/gabriela.cpp
// Generated from Ghidra function signatures

// Original: core_gabriela.cpp_staticInit_FUN_004954a0
// Address: 004954a0
void __cdecl staticInit(void);

// Original: core_gabriela.cpp_motionBlendWeightFunc_FUN_00495580
// Address: 00495580
float __cdecl motionBlendWeightFunc(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance);

// Original: core_gabriela.cpp_flashlightBlendWeightCallback_FUN_004955c0
// Address: 004955c0
float __cdecl flashlightBlendWeightCallback(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance);

// Original: core_gabriela.cpp_aimRotationBlendWeightCallback_FUN_00495610
// Address: 00495610
float __cdecl aimRotationBlendWeightCallback(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *model_ptr);

// Original: core_gabriela.cpp_factoryFuncGabriella_FUN_00495670
// Address: 00495670
CGabriella * __cdecl factoryFuncGabriella(void);

// Original: core_gabriela.cpp_CGabriella_getActorType_FUN_00495690
// Address: 00495690
CDemonActorType * __cdecl CGabriella::getActorType(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_ctor_FUN_004956a0
// Address: 004956a0
CGabriella * __cdecl CGabriella::ctor(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_setup_FUN_004957c0
// Address: 004957c0
void __cdecl CGabriella::setup(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_process_FUN_00495a20
// Address: 00495a20
void __cdecl CGabriella::process(CGabriella *this_ptr,float delta_time);

// Original: core_gabriela.cpp_CGabriella_processAI_FUN_00496d10
// Address: 00496d10
void __cdecl CGabriella::processAI(CGabriella *this_ptr,float delta_time);

// Original: core_gabriela.cpp_CGabriella_processMotionEvents_FUN_00497410
// Address: 00497410
void __cdecl CGabriella::processMotionEvents(CGabriella *this_ptr,float delta_time);

// Original: core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_00497810
// Address: 00497810
float __cdecl CGabriella::getFlashlightMinAngle(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_getFlashlightMaxAngle_FUN_00497860
// Address: 00497860
float __cdecl CGabriella::getFlashlightMaxAngle(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_getTorsoCenterPosition_FUN_00497870
// Address: 00497870
CVector3f * __cdecl CGabriella::getTorsoCenterPosition(CGabriella *this_ptr,CVector3f *out_position);

// Original: core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900
// Address: 00497900
void __cdecl CGabriella::updateWeaponAndAimAnimation(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004980d0
// Address: 004980d0
void __cdecl CGabriella::updateWeaponPosition(CGabriella *this_ptr,float delta_time);

// Original: core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0
// Address: 004983f0
int __cdecl CGabriella::findAndPickupNearbyObject(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_collectAmmo_FUN_00498790
// Address: 00498790
void __cdecl CGabriella::collectAmmo(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004987e0
// Address: 004987e0
int __cdecl CGabriella::tryClimbLadder(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_canFireWeapon_FUN_00498af0
// Address: 00498af0
int __cdecl CGabriella::canFireWeapon(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_tryFireWeapon_FUN_00498b60
// Address: 00498b60
void __cdecl CGabriella::tryFireWeapon(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_tryThrowObject_FUN_00498bd0
// Address: 00498bd0
int __cdecl CGabriella::tryThrowObject(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_archive_FUN_00498c10
// Address: 00498c10
void __cdecl CGabriella::archive(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_renderOpaque_FUN_00498cc0
// Address: 00498cc0
int __cdecl CGabriella::renderOpaque(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_renderTransparent_FUN_00498db0
// Address: 00498db0
int __cdecl CGabriella::renderTransparent(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_00498de0
// Address: 00498de0
float __cdecl CGabriella::scoreTargetVisibility(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov);

// Original: core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004990c0
// Address: 004990c0
void __cdecl CGabriella::updateAimTracking(CGabriella *this_ptr,float delta_time,int is_holstering);

// Original: core_gabriela.cpp_CGabriella_processDamage_FUN_004996b0
// Address: 004996b0
void __cdecl CGabriella::processDamage(CGabriella *this_ptr,SDamageInfo *damage_info);

// Original: core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004998c0
// Address: 004998c0
void __cdecl CGabriella::updateClavicleCollisionAvoidance(CGabriella *this_ptr,float delta_time,int has_carried_objects);

// Original: core_gabriela.cpp_CGabriella_binarySearchClavicleBlend_FUN_00499b00
// Address: 00499b00
void __cdecl CGabriella::binarySearchClavicleBlend(CGabriella *this_ptr,float delta_time,float *clavicle_blend,int probe_bone_index,int blend_bone_index,CVector3f *probe_offset);

// Original: core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_00499ca0
// Address: 00499ca0
void __stack2_esi CGabriella::getCarryObjToBodyXForm(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_gabriela.cpp_CGabriella_isWeaponDrawn_FUN_0049a110
// Address: 0049a110
int __cdecl CGabriella::isWeaponDrawn(CGabriella *this_ptr);

// Original: core_gabriela.cpp_CGabriella_drawWeapon_FUN_0049a130
// Address: 0049a130
void __cdecl CGabriella::drawWeapon(CGabriella *this_ptr,int drawn);

// Original: core_gabriela.cpp_getSelectedWeapon_FUN_0049a160
// Address: 0049a160
CWeapon * __cdecl getSelectedWeapon(CInventory *inventory_ptr);

// Original: core_gabriela.cpp_CGabriella_dtor_FUN_0049a170
// Address: 0049a170
CGabriella * __cdecl CGabriella::dtor(CGabriella *this_ptr,uint flags);
