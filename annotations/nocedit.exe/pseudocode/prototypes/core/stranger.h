#pragma once

// Function prototypes for core/stranger.cpp
// Generated from Ghidra function signatures

// Original: core_stranger.cpp_staticInit_FUN_005bae80
// Address: 005bae80
void __cdecl staticInit(void);

// Original: core_stranger.cpp_blendWeightCallback_FUN_005baee0
// Address: 005baee0
float __cdecl blendWeightCallback(int bone,int target,float weight,int distance,CDeformableModelInstance *instance);

// Original: core_stranger.cpp_getWeaponInteractionType_FUN_005baf20
// Address: 005baf20
int __cdecl getWeaponInteractionType(CWeapon *weapon);

// Original: core_stranger.cpp_getWeaponHoldType_FUN_005bafa0
// Address: 005bafa0
int __cdecl getWeaponHoldType(CWeapon *weapon);

// Original: core_stranger.cpp_canPickupObject_FUN_005bafe0
// Address: 005bafe0
int __cdecl canPickupObject(CDemonActor *actor,CDemonActor *object);

// Original: core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_005bb010
// Address: 005bb010
float __cdecl getCarriedObjectVerticalOffset(CDemonActor *object);

// Original: core_stranger.cpp_factoryFunc_FUN_005bb0e0
// Address: 005bb0e0
CStranger * __cdecl factoryFunc(void);

// Original: core_stranger.cpp_CStranger_getActorType_FUN_005bb110
// Address: 005bb110
CDemonActorType * __cdecl CStranger::getActorType(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_ctor_FUN_005bb120
// Address: 005bb120
CStranger * __cdecl CStranger::ctor(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_setup_FUN_005bb4b0
// Address: 005bb4b0
void __cdecl CStranger::setup(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_process_FUN_005bb830
// Address: 005bb830
void __cdecl CStranger::process(CStranger *this_ptr,float delta_time);

// Original: core_stranger.cpp_CStranger_processFrame_FUN_005bb960
// Address: 005bb960
void __cdecl CStranger::processFrame(CStranger *this_ptr,float delta_time);

// Original: core_stranger.cpp_CStranger_processMotionEvents_FUN_005bdd20
// Address: 005bdd20
void __cdecl CStranger::processMotionEvents(CStranger *this_ptr,float delta_time);

// Original: core_stranger.cpp_CStranger_getCarryLightIntensity_FUN_005be430
// Address: 005be430
float __cdecl CStranger::getCarryLightIntensity(CStranger *this_ptr);

// Original: core_stranger.cpp_getDefaultAimPitch_FUN_005be480
// Address: 005be480
float __cdecl getDefaultAimPitch(void);

// Original: core_stranger.cpp_CStranger_getHandsMidpoint_FUN_005be490
// Address: 005be490
CVector3f * __cdecl CStranger::getHandsMidpoint(CStranger *this_ptr,CVector3f *out_position);

// Original: core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520
// Address: 005be520
void __cdecl CStranger::updateProceduralAnimation(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_extractTurnPoseData_FUN_005bf720
// Address: 005bf720
void __cdecl CStranger::extractTurnPoseData(CStranger *this_ptr,SPoseData *out_pose);

// Original: core_stranger.cpp_CStranger_updateTurnBlending_FUN_005bf800
// Address: 005bf800
void __cdecl CStranger::updateTurnBlending(CStranger *this_ptr,float delta_time);

// Original: core_stranger.cpp_CStranger_setPositionAndOrientation_FUN_005bfb10
// Address: 005bfb10
void __cdecl CStranger::setPositionAndOrientation(CStranger *this_ptr,CVector3f *new_position,CVector3f *new_orientation);

// Original: core_stranger.cpp_CStranger_makeDrawDecision_FUN_005bfb60
// Address: 005bfb60
void __cdecl CStranger::makeDrawDecision(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0
// Address: 005c02b0
void __cdecl CStranger::applyArmAimRotation(CStranger *this_ptr,int arm_side);

// Original: core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005c06b0
// Address: 005c06b0
void __cdecl CStranger::updateWeaponPosition(CStranger *this_ptr,int hand_index);

// Original: core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0
// Address: 005c07b0
CMatrix3x4f * __stack3_esi CStranger::computeWeaponAttachXForm(CStranger *this_ptr,CDemonActor *carried_actor,int hand_index,CMatrix3x4f *output_matrix);

// Original: core_stranger.cpp_CStranger_tryPickupObject_FUN_005c1680
// Address: 005c1680
int __cdecl CStranger::tryPickupObject(CStranger *this_ptr,char *class_name);

// Original: core_stranger.cpp_CStranger_processPickupComplete_FUN_005c1f00
// Address: 005c1f00
void __cdecl CStranger::processPickupComplete(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_dropRightHandObject_FUN_005c1f80
// Address: 005c1f80
void __cdecl CStranger::dropRightHandObject(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_tryClimbLadder_FUN_005c1fe0
// Address: 005c1fe0
int __cdecl CStranger::tryClimbLadder(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_tryDescendLadder_FUN_005c2400
// Address: 005c2400
int __cdecl CStranger::tryDescendLadder(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_tryPlaceObject_FUN_005c2850
// Address: 005c2850
int __cdecl CStranger::tryPlaceObject(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_archive_FUN_005c2fe0
// Address: 005c2fe0
void __cdecl CStranger::archive(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_renderOpaque_FUN_005c3150
// Address: 005c3150
int __cdecl CStranger::renderOpaque(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_renderTransparent_FUN_005c3710
// Address: 005c3710
int __cdecl CStranger::renderTransparent(CStranger *this_ptr);

// Original: core_stranger.cpp_adjustAimAngleForOffset_FUN_005c3750
// Address: 005c3750
void __cdecl adjustAimAngleForOffset(float *angle,float distance,float offset);

// Original: core_stranger.cpp_calculateAimAnglesWithOffset_FUN_005c37e0
// Address: 005c37e0
CVector3f * __cdecl calculateAimAnglesWithOffset(CVector3f *out_angles,CVector3f *direction,float *offset_pair);

// Original: core_stranger.cpp_CStranger_autoAimAtThreat_FUN_005c3960
// Address: 005c3960
void __cdecl CStranger::autoAimAtThreat(CStranger *this_ptr,int hand_index,float delta_time);

// Original: core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370
// Address: 005c4370
void __cdecl CStranger::aimLeftPistol(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_processDamage_FUN_005c48b0
// Address: 005c48b0
void __cdecl CStranger::processDamage(CStranger *this_ptr,SDamageInfo *damage_info);

// Original: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_005c4c20
// Address: 005c4c20
void __cdecl CStranger::updateArmRecoilBlend(CStranger *this_ptr,float delta_time,int is_weapon_active);

// Original: core_stranger.cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170
// Address: 005c5170
void __stack2_esi CStranger::getCarryObjToBodyXForm(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_stranger.cpp_CStranger_getThrowDirection_FUN_005c51c0
// Address: 005c51c0
CVector3f * __cdecl CStranger::getThrowDirection(CStranger *this_ptr,CVector3f *out_direction);

// Original: core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005c5270
// Address: 005c5270
void __cdecl CStranger::updateWeaponLayerActions(CStranger *this_ptr,float delta_time);

// Original: core_stranger.cpp_CStranger_handleActionButton_FUN_005c5b90
// Address: 005c5b90
void __cdecl CStranger::handleActionButton(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_tryThrowDynamite_FUN_005c5e80
// Address: 005c5e80
int __cdecl CStranger::tryThrowDynamite(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_handleFireButton_FUN_005c5f10
// Address: 005c5f10
void __cdecl CStranger::handleFireButton(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_updateClothSimulation_FUN_005c6220
// Address: 005c6220
void __cdecl CStranger::updateClothSimulation(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_processWeaponTick_FUN_005c6590
// Address: 005c6590
void __cdecl CStranger::processWeaponTick(CStranger *this_ptr,float delta_time);

// Original: core_stranger.cpp_CStranger_isWeaponDrawn_FUN_005c6650
// Address: 005c6650
int __cdecl CStranger::isWeaponDrawn(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_drawWeapon_FUN_005c6660
// Address: 005c6660
void __cdecl CStranger::drawWeapon(CStranger *this_ptr,int drawn);

// Original: core_stranger.cpp_CStranger_getGrabbed_FUN_005c66a0
// Address: 005c66a0
int __cdecl CStranger::getGrabbed(CStranger *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_stranger.cpp_CStranger_reset_FUN_005c6750
// Address: 005c6750
void __cdecl CStranger::reset(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_getDeathState_FUN_005c67c0
// Address: 005c67c0
EDeathState __cdecl CStranger::getDeathState(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_dropCarriedObject_FUN_005c67f0
// Address: 005c67f0
void __cdecl CStranger::dropCarriedObject(CStranger *this_ptr,int hand_index,CVector3f *drop_direction);

// Original: core_stranger.cpp_CStranger_drop_FUN_005c6850
// Address: 005c6850
void __cdecl CStranger::drop(CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position);

// Original: core_stranger.cpp_CStranger_onActorDeleted_FUN_005c68a0
// Address: 005c68a0
void __cdecl CStranger::onActorDeleted(CStranger *this_ptr,CDemonActor *deleted_actor);

// Original: core_stranger.cpp_CStranger_getPropertyList_FUN_005c68f0
// Address: 005c68f0
void __cdecl CStranger::getPropertyList(CStranger *this_ptr,CActorPropertyList *property_list);

// Original: core_stranger.cpp_CStranger_addFilesToExtract_FUN_005c6910
// Address: 005c6910
void __cdecl CStranger::addFilesToExtract(CStranger *this_ptr,_FILE *file_handle);

// Original: core_stranger.cpp_setMatrixTranslation_FUN_005c6930
// Address: 005c6930
void __cdecl setMatrixTranslation(CMatrix3x4f *matrix,CVector3f *translation);

// Original: core_stranger.cpp_isProcessDisabled_FUN_005c6950
// Address: 005c6950
int __cdecl isProcessDisabled(CDemonActor *actor);

// Original: core_stranger.cpp_getScaleY_FUN_005c695e
// Address: 005c695e
int __cdecl getScaleY(CDemonActor *actor);

// Original: core_stranger.cpp_setWindVelocity_FUN_005c6970
// Address: 005c6970
void __cdecl setWindVelocity(CCloth *cloth_ptr,CVector3f *velocity);

// Original: core_stranger.cpp_getCurrentMotionStateIndex_FUN_005c69a0
// Address: 005c69a0
int __cdecl getCurrentMotionStateIndex(CCharacter *this_ptr);

// Original: core_stranger.cpp_CStranger_dtor_FUN_005c69c0
// Address: 005c69c0
CStranger * __cdecl CStranger::dtor(CStranger *this_ptr,uint flags);
