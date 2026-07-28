#pragma once

// Function prototypes for core/stranger.cpp
// Generated from Ghidra function signatures

// Original: core_stranger.cpp_staticInit_FUN_00534e30
// Address: 00534e30
void __cdecl staticInit(void);

// Original: core_stranger.cpp_FUN_00534e90
// Address: 00534e90
float FUN_00534e90(undefined4 param_1,undefined4 param_2,float param_3,int param_4);

// Original: core_stranger.cpp_FUN_00534f90
// Address: 00534f90
bool FUN_00534f90(void);

// Original: core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00534fc0
// Address: 00534fc0
float getCarriedObjectVerticalOffset(CDemonActor *param_1);

// Original: core_stranger.cpp_FUN_00535090
// Address: 00535090
void FUN_00535090(void);

// Original: core_stranger.cpp_FUN_005350b0
// Address: 005350b0
CDemonActorType * FUN_005350b0(void);

// Original: core_stranger.cpp_FUN_005350c0
// Address: 005350c0
CCharacter * FUN_005350c0(undefined4 param_1);

// Original: core_stranger.cpp_FUN_00535450
// Address: 00535450
void FUN_00535450(int param_1);

// Original: core_stranger.cpp_FUN_005357d0
// Address: 005357d0
void FUN_005357d0(int param_1,float param_2);

// Original: core_stranger.cpp_FUN_00535900
// Address: 00535900
void FUN_00535900(CStranger *param_1,float param_2);

// Original: core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0
// Address: 00537cd0
void __cdecl CStranger::processMotionEvents(CStranger *this_ptr,float delta_time);

// Original: core_stranger.cpp_FUN_005383e0
// Address: 005383e0
undefined4 FUN_005383e0(int param_1);

// Original: core_stranger.cpp_FUN_00538440
// Address: 00538440
float * FUN_00538440(int param_1,float *param_2);

// Original: core_stranger.cpp_FUN_005384d0
// Address: 005384d0
void FUN_005384d0(CStranger *param_1);

// Original: core_stranger.cpp_FUN_005396d0
// Address: 005396d0
void FUN_005396d0(int param_1,SPose *param_2);

// Original: core_stranger.cpp_CStranger_updateTurnBlending_FUN_005397b0
// Address: 005397b0
void __cdecl CStranger::updateTurnBlending(CStranger *this_ptr,float delta_time);

// Original: core_stranger.cpp_CStranger_setPositionAndOrientation_FUN_00539ac0
// Address: 00539ac0
void CStranger::setPositionAndOrientation(CCharacter *param_1,CVector3f *param_2,int param_3);

// Original: core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10
// Address: 00539b10
void __cdecl CStranger::makeDrawDecision(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0053a260
// Address: 0053a260
void __cdecl CStranger::applyArmAimRotation(CStranger *this_ptr,int arm_side);

// Original: core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660
// Address: 0053a660
void __cdecl CStranger::updateWeaponPosition(CStranger *this_ptr,int hand_index);

// Original: core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760
// Address: 0053a760
float * CStranger::computeWeaponAttachXForm(int param_1,CDemonActor *param_2,float param_3);

// Original: core_stranger.cpp_CStranger_tryPickupObject_FUN_0053b630
// Address: 0053b630
int __cdecl CStranger::tryPickupObject(CStranger *this_ptr,char *class_name);

// Original: core_stranger.cpp_CStranger_processPickupComplete_FUN_0053beb0
// Address: 0053beb0
void __cdecl CStranger::processPickupComplete(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_dropRightHandObject_FUN_0053bf30
// Address: 0053bf30
void CStranger::dropRightHandObject(int param_1);

// Original: core_stranger.cpp_CStranger_tryClimbLadder_FUN_0053bf90
// Address: 0053bf90
int __cdecl CStranger::tryClimbLadder(CStranger *this_ptr);

// Original: core_stranger.cpp_CStranger_tryDescendLadder_FUN_0053c3b0
// Address: 0053c3b0
int __cdecl CStranger::tryDescendLadder(CStranger *this_ptr);

// Original: core_stranger.cpp_FUN_0053c800
// Address: 0053c800
undefined4 FUN_0053c800(CDemonActor *param_1);

// Original: core_stranger.cpp_CStranger_archive_FUN_0053cf90
// Address: 0053cf90
void CStranger::archive(int param_1);

// Original: core_stranger.cpp_FUN_0053d100
// Address: 0053d100
undefined4 FUN_0053d100(CStranger *param_1);

// Original: core_stranger.cpp_CStranger_renderTransparent_FUN_0053d6c0
// Address: 0053d6c0
undefined4 CStranger::renderTransparent(CCharacter *param_1);

// Original: core_stranger.cpp_adjustAimAngleForOffset_FUN_0053d700
// Address: 0053d700
void adjustAimAngleForOffset(void);

// Original: core_stranger.cpp_calculateAimAnglesWithOffset_FUN_0053d790
// Address: 0053d790
float * calculateAimAnglesWithOffset(float *param_1,float *param_2,float *param_3);

// Original: core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0053d910
// Address: 0053d910
void __cdecl CStranger::autoAimAtThreat(CStranger *this_ptr,int hand_index,float delta_time);

// Original: core_stranger.cpp_CStranger_aimLeftPistol_FUN_0053e320
// Address: 0053e320
void __cdecl CStranger::aimLeftPistol(CStranger *this_ptr);

// Original: core_stranger.cpp_FUN_0053e860
// Address: 0053e860
void FUN_0053e860(CHero *param_1,SDamageInfo *param_2);

// Original: core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0
// Address: 0053ecc0
void __cdecl CStranger::updateArmRecoilBlend(CStranger *this_ptr,float delta_time,int is_weapon_active);

// Original: core_stranger.cpp_FUN_0053f210
// Address: 0053f210
void FUN_0053f210(int param_1,int param_2);

// Original: core_stranger.cpp_CStranger_getThrowDirection_FUN_0053f260
// Address: 0053f260
CVector3f * __cdecl CStranger::getThrowDirection(CStranger *this_ptr,CVector3f *out_direction);

// Original: core_stranger.cpp_FUN_0053f310
// Address: 0053f310
void FUN_0053f310(CStranger *param_1,float param_2);

// Original: core_stranger.cpp_FUN_0053fc60
// Address: 0053fc60
void FUN_0053fc60(CStranger *param_1);

// Original: core_stranger.cpp_CStranger_tryThrowDynamite_FUN_0053ff50
// Address: 0053ff50
int __cdecl CStranger::tryThrowDynamite(CStranger *this_ptr);

// Original: core_stranger.cpp_FUN_0053ffe0
// Address: 0053ffe0
void FUN_0053ffe0(CStranger *param_1);

// Original: core_stranger.cpp_FUN_005402f0
// Address: 005402f0
void FUN_005402f0(int param_1);

// Original: core_stranger.cpp_CStranger_processWeaponTick_FUN_00540660
// Address: 00540660
void __cdecl CStranger::processWeaponTick(CStranger *this_ptr,float delta_time);

// Original: core_stranger.cpp_FUN_00540720
// Address: 00540720
undefined4 FUN_00540720(int param_1);

// Original: core_stranger.cpp_CStranger_drawWeapon_FUN_00540730
// Address: 00540730
void CStranger::drawWeapon(int param_1,int param_2);

// Original: core_stranger.cpp_CStranger_getGrabbed_FUN_00540770
// Address: 00540770
int CStranger::getGrabbed(CHero *param_1,CDemonActor *param_2,int param_3);

// Original: core_stranger.cpp_FUN_00540820
// Address: 00540820
void FUN_00540820(int param_1);

// Original: core_stranger.cpp_CStranger_getDeathState_FUN_00540890
// Address: 00540890
EDeathState CStranger::getDeathState(CCharacter *param_1);

// Original: core_stranger.cpp_CStranger_dropCarriedObject_FUN_005408c0
// Address: 005408c0
void CStranger::dropCarriedObject(CCharacter *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,CVector3f *param_6);

// Original: core_stranger.cpp_CStranger_drop_FUN_00540920
// Address: 00540920
void CStranger::drop(int param_1,int param_2,undefined4 param_3);

// Original: core_stranger.cpp_FUN_00540970
// Address: 00540970
float FUN_00540970(void);

// Original: core_stranger.cpp_FUN_005409a0
// Address: 005409a0
void FUN_005409a0(void);

// Original: core_stranger.cpp_FUN_005409c0
// Address: 005409c0
float FUN_005409c0(float *param_1,float *param_2);

// Original: core_stranger.cpp_setMatrixTranslation_FUN_005409f0
// Address: 005409f0
void setMatrixTranslation(void);

// Original: core_stranger.cpp_FUN_00540a10
// Address: 00540a10
undefined4 FUN_00540a10(void);

// Original: core_stranger.cpp_FUN_00540a20
// Address: 00540a20
undefined4 FUN_00540a20(void);

// Original: core_stranger.cpp_getScaleY_FUN_00540a30
// Address: 00540a30
undefined4 getScaleY(void);

// Original: core_stranger.cpp_FUN_00540a40
// Address: 00540a40
void FUN_00540a40(void);

// Original: core_stranger.cpp_FUN_00540a70
// Address: 00540a70
int FUN_00540a70(void);

// Original: core_stranger.cpp_CStranger_dtor_FUN_00540a90
// Address: 00540a90
CHero * CStranger::dtor(CHero *param_1,byte param_2);
