// Name: core_scat.cpp_FUN_00540df0
// Address: 00540df0
// Address Range: [[00540df0, 005415b2]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_00540df0(CScat *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_00540df0(CScat *param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  SMotion *pSVar6;
  int desired_state_index;
  byte bVar7;
  float afStackY_1898 [1522];
  CDeformableModelInstance *this_ptr;
  CQuaternion4f *source_quaternions;
  CMotionController *this_ptr_00;
  float fVar8;
  CScat *pCVar9;
  float *pfVar10;
  code *blend_callback;
  CVector3f *velocity;
  uint uStack_bc;
  uint uStack_ac;
  float afStack_a8 [6];
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  float afStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [3];
  uint uStack_3c;
  float fStack_30;
  float afStack_2c [2];
  CMotionController *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
switchD_00541320_caseD_5:
    return;
  }
  core_charactr_cpp_FUN_00435320(param_1,param_2);
  fVar8 = *(float *)&param_1->field_0xc1d0 - param_2;
  *(float *)&param_1->field_0xc1d0 = fVar8;
  if (fVar8 < 0.0) {
    *(uint *)&param_1->field_0xc1d0 = 0;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_scat_cpp_FUN_00541af0(param_1,param_2);
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  iVar5 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    if (*(int *)&param_1->field_0xc1d4 == 2) {
      core_scat_cpp_FUN_005415c0(param_1,param_2);
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    switch(*(uint *)(pSVar6 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if (*(int *)&param_1->field_0x2500 != 0) {
        iVar5 = core_scat_cpp_FUN_00541de0(param_1);
        desired_state_index = 0;
        if (iVar5 != 0) {
          desired_state_index = 7;
        }
        if (*(int *)&param_1->field_0xc1d8 != 0) {
          iVar5 = core_scat_cpp_FUN_00541de0(param_1);
          if (iVar5 == 0) {
            if (*(int *)&param_1->field_0xc1e0 == 0) {
              desired_state_index = 1;
            }
            else {
              desired_state_index = 2;
            }
          }
          else {
            desired_state_index = 9;
          }
        }
        if (*(int *)&param_1->field_0xc1dc != 0) {
          iVar5 = core_scat_cpp_FUN_00541de0(param_1);
          if (iVar5 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if ((((*(int *)&param_1->field_0xc1e4 != 0) && (*(int *)&param_1->field_0x1ffac != 0)) &&
            (iVar5 = *(int *)&param_1->field_0x1ffc0, iVar5 != 0)) &&
           (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe8))(iVar5), iVar5 != 0)) {
          (**(code **)(*(int *)(*(int *)&param_1->field_0x1ffc0 + 0x154) + 0xe4))
                    (*(int *)&param_1->field_0x1ffc0);
          *(uint *)&param_1->field_0xc1e4 = 0;
          if (*(int *)(*(int *)&param_1->field_0x1ffc0 + 0x2e0) == 8) {
            desired_state_index = 0xb;
          }
        }
        *(float *)&param_1->field_0x2508 =
             *(float *)&param_1->field_0xc200 * *(float *)&param_1->field_0x2528 +
             *(float *)&param_1->field_0x2508;
        pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&param_1->field_0x158);
        if (desired_state_index != *(int *)(pSVar6 + 0x24)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,desired_state_index,1);
        }
        if (*(int *)&param_1->field_0xc1f0 != 0) {
          *(uint *)&param_1->field_0xc1f0 = 0;
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))
                    (param_1,*(int *)&param_1->field_0x1ffac == 0);
        }
      }
      break;
    case 5:
      goto switchD_00541320_caseD_5;
    }
  }
  else {
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    uVar1 = *(uint *)&param_1->field_0x273c;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar5 = core_scat_cpp_FUN_00541de0(param_1);
        if (iVar5 == 0) {
          iVar5 = 1;
        }
        else {
LAB_00540ee3:
          iVar5 = 9;
        }
      }
      else {
LAB_005412cd:
        iVar5 = core_scat_cpp_FUN_00541de0(param_1);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = 7;
        }
      }
    }
    else if (uVar1 < 3) {
      iVar5 = core_scat_cpp_FUN_00541de0(param_1);
      if (iVar5 != 0) goto LAB_00540ee3;
      iVar5 = 2;
    }
    else {
      if (uVar1 != 3) goto LAB_005412cd;
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
      iVar5 = core_scat_cpp_FUN_00541de0(param_1);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar5,1);
  }
  if (*(int *)&param_1->field_0x26fc == 0) {
    fStack_54 = *(float *)&param_1->field_0x249c + *(float *)&param_1->field_0x250c;
    fStack_50 = *(float *)&param_1->field_0x24a0 + *(float *)&param_1->field_0x2510;
    fStack_4c = *(float *)&param_1->field_0x24a4 + *(float *)&param_1->field_0x2514;
    fStack_30 = fStack_54;
    afStack_2c[(uint)bVar7 * -2] = afStack_a8[(uint)bVar7 * -2 + 0x16];
    afStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x17];
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_60 = *(float *)&param_1->field_0x2518 * param_2;
    velocity = (CVector3f *)&fStack_30;
    fStack_5c = *(float *)&param_1->field_0x251c * param_2;
    fStack_58 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_84 = fStack_60;
    afStack_a8[(uint)bVar7 * -2 + 10] = afStack_a8[(uint)bVar7 * -2 + 0x13];
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xb] =
         afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x14];
    fStack_30 = fStack_30 + fStack_84;
    afStack_2c[0] = afStack_2c[0] + fStack_80;
    afStack_2c[1] = afStack_2c[1] + fStack_7c;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,velocity);
    goto LAB_00541092;
  }
  core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
  afStack_6c[0] = (float)uStack_90;
  afStack_a8[(uint)bVar7 * -2 + 0x10] = afStack_a8[(uint)bVar7 * -2 + 7];
  afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x11] =
       afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8];
  core_vecdir_cpp_FUN_005a7520(afStack_a8 + 0xf);
  uStack_78 = uStack_3c;
  afStack_a8[(uint)bVar7 * -2 + 0xd] = afStack_a8[(uint)bVar7 * -2 + 0x1c];
  afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xe] =
       afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1d];
  fStack_14 = (float)core_actor_cpp_FUN_0040cd60(uStack_74);
  fStack_18 = fStack_14;
  if (fStack_14 < _DAT_005ede4b) {
    fStack_18 = fStack_14 + _DAT_005ede4f;
  }
  if (_DAT_005ede53 < fStack_18) {
    fStack_18 = fStack_18 + _DAT_005ede57;
  }
  fStack_1c = param_2 * _DAT_005ede4f;
  fStack_20 = -fStack_1c;
  if (fStack_18 < fStack_20) {
    fStack_18 = fStack_20;
  }
  if (fStack_1c < fStack_18) {
    fStack_18 = fStack_1c;
  }
  *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_18;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
  iVar5 = *(int *)&param_1->field_0x26fc;
  fStack_14 = *(float *)(iVar5 + 0x154);
  pCStack_24 = (CMotionController *)&param_1->field_0x158;
  core_skeleton_cpp_FUN_00569130(pCStack_24,0);
  fVar8 = fStack_14;
  pfVar10 = afStack_a8 + 0x18;
  afStack_48[0] = afStack_a8[3];
  afStack_a8[(uint)bVar7 * -2 + 0x19] = afStack_a8[(uint)bVar7 * -2 + 4];
  pCVar9 = param_1;
  afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1a] =
       afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
  iVar5 = (**(code **)((int)fVar8 + 0x110))(iVar5,pCVar9,pfVar10);
  if (iVar5 == 0) {
    *(uint *)&param_1->field_0x26fc = 0;
LAB_0054107f:
    iVar5 = 0;
    this_ptr_00 = (CMotionController *)&param_1->field_0x158;
  }
  else {
    if (*(int *)&param_1->field_0x26fc == 0) goto LAB_0054107f;
    if (*(int *)&param_1->field_0xc1e4 == 0) goto LAB_00541092;
    iVar5 = 0xf;
    this_ptr_00 = pCStack_24;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr_00,iVar5,1);
LAB_00541092:
  core_inv_cpp_FUN_004f9f10(&param_1->field_0x1fae8);
  iVar5 = *(int *)&param_1->field_0x1ffc0;
  if (iVar5 != 0) {
    (**(code **)(*(int *)(iVar5 + 0x154) + 0xc))(iVar5,param_2);
  }
  core_scat_cpp_FUN_00541e30(param_1,param_2);
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  fVar8 = *(float *)&param_1->field_0x2538;
  iVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0xf4))(param_1);
  fStack_14 = (float)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,0xc);
  bVar2 = 0.0 < fStack_14;
  fStack_14 = (float)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,0xd);
  bVar3 = 0.0 < fStack_14;
  fStack_14 = (float)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,4);
  bVar4 = 0.0 < fStack_14;
  fStack_14 = (float)core_motion_cpp_FUN_00524a40(&param_1->field_0x158,5);
  core_scat_cpp_FUN_005424f0
            (param_1,param_2,
             0.0 < fStack_14 || (bVar4 || (bVar3 || (bVar2 || (iVar5 != 0 || fVar8 <= 0.0)))));
  this_ptr = (CDeformableModelInstance *)&param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr);
  core_scat_cpp_FUN_00542090(param_1);
  iVar5 = core_scat_cpp_FUN_00541de0(param_1);
  if ((iVar5 == 0) &&
     (iVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1), iVar5 == 0)) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar8 = *(float *)&param_1->field_0x1ffbc;
    iVar5 = _DAT_01e7e014;
    core_xform_cpp_FUN_005b7ed0(&param_1->field_0x1ffb0);
    source_quaternions = (CQuaternion4f *)&uStack_ac;
    uStack_ac = uStack_bc;
    afStack_a8[(uint)bVar7 * -2] = *(float *)(&stack0xffffff48 + (uint)bVar7 * -8);
    afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)(&stack0xffffff4c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    (afStack_a8 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         *(float *)((int)(&stack0xffffff4c + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                   ((uint)bVar7 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (this_ptr,source_quaternions,fVar8,iVar5,blend_callback);
  }
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  core_scat_cpp_FUN_00542f20(param_1);
  return;
}
