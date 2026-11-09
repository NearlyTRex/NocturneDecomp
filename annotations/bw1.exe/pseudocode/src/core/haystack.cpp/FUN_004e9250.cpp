// Name: core_haystack.cpp_FUN_004e9250
// Address: 004e9250
// Address Range: [[004e9250, 004e98a3]]
// Convention: unknown
// Signature: void core_haystack_cpp_FUN_004e9250(CHaystack *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_haystack_cpp_FUN_004e9250(CHaystack *param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1898 [1522];
  CDeformableModelInstance *this_ptr;
  CQuaternion4f *source_quaternions;
  float fVar7;
  float *pfVar8;
  code *blend_callback;
  CVector3f *velocity;
  uint uStack_bc;
  uint uStack_ac;
  float afStack_a8 [6];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [5];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [3];
  uint uStack_54;
  uint uStack_48;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)&param_1->field_0xc1d4 == 2) {
    core_haystack_cpp_FUN_004e98b0(param_1,param_2);
  }
  core_charactr_cpp_FUN_00435320(param_1,param_2);
  fVar7 = *(float *)&param_1->field_0xc1d0 - param_2;
  *(float *)&param_1->field_0xc1d0 = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)&param_1->field_0xc1d0 = 0;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_haystack_cpp_FUN_004e9f20(param_1,param_2);
  iVar2 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    switch(*(uint *)(pSVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)&param_1->field_0x2500 != 0) {
        iVar2 = 0;
        if (*(int *)&param_1->field_0x1ffac != 0) {
          iVar2 = 10;
        }
        if (*(int *)&param_1->field_0xc1d8 != 0) {
          if (*(int *)&param_1->field_0xc1e0 == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = 2;
          }
        }
        if (*(int *)&param_1->field_0xc1dc != 0) {
          iVar2 = 3;
        }
        if (*(int *)&param_1->field_0xc1f0 != 0) {
          *(uint *)&param_1->field_0xc1f0 = 0;
          uVar4 = (uint)(*(int *)&param_1->field_0x1ffac == 0);
          *(uint *)&param_1->field_0x1ffac = uVar4;
          if (uVar4 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = 10;
          }
        }
        if (*(int *)&param_1->field_0xc1e4 != 0) {
          bVar1 = true;
          if ((*(int *)&param_1->field_0x1ffac == 0) && (*(int *)&param_1->field_0xc1d4 != 2)) {
            iVar5 = core_hero_cpp_CHero_tryInteract_FUN_004eb090((CHero *)param_1);
            bVar1 = false;
            if (iVar5 != 0) goto LAB_004e965f;
            iVar5 = core_hero_cpp_FUN_004eb3e0(param_1,0);
            if ((iVar5 != 0) && (iVar5 != 1)) {
              core_hero_cpp_FUN_004eb5e0((CHero *)param_1);
            }
            if ((iVar5 != 0) ||
               (iVar5 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240((CHero *)param_1),
               iVar5 != 0)) goto LAB_004e965f;
            iVar5 = core_hero_cpp_FUN_004eb660((CHero *)param_1);
            if (iVar5 != 0) {
              core_hero_cpp_FUN_004eb7f0(param_1);
              goto LAB_004e965f;
            }
          }
          else {
LAB_004e965f:
            if (!bVar1) goto LAB_004e9680;
          }
          *(uint *)&param_1->field_0xc1e4 = 0;
          if (*(int *)&param_1->field_0x1ffb0 == 0) {
            iVar2 = 0xf;
          }
          else {
            iVar2 = 0xe;
          }
        }
LAB_004e9680:
        *(float *)&param_1->field_0x2508 =
             *(float *)&param_1->field_0xc200 * *(float *)&param_1->field_0x2528;
        pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&param_1->field_0x158);
        if (iVar2 != *(int *)(pSVar3 + 0x24)) goto LAB_004e931f;
      }
      break;
    case 9:
      goto switchD_004e9753_caseD_9;
    }
  }
  else {
    uVar4 = *(uint *)&param_1->field_0x273c;
    if (uVar4 < 2) {
      if (uVar4 == 1) {
        iVar2 = 1;
      }
      else {
LAB_004e95bd:
        iVar2 = 0;
      }
    }
    else {
      if (2 < uVar4) {
        if (uVar4 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1)
          ;
          goto switchD_004e9753_caseD_4;
        }
        goto LAB_004e95bd;
      }
      iVar2 = 2;
    }
LAB_004e931f:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
switchD_004e9753_caseD_4:
  if (*(int *)&param_1->field_0x26fc == 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_90 = *(float *)&param_1->field_0x249c + *(float *)&param_1->field_0x250c;
    fStack_8c = *(float *)&param_1->field_0x24a0 + *(float *)&param_1->field_0x2510;
    fStack_88 = *(float *)&param_1->field_0x24a4 + *(float *)&param_1->field_0x2514;
    fStack_84 = fStack_90;
    afStack_80[(uint)bVar6 * -2] = afStack_a8[(uint)bVar6 * -2 + 7];
    afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 8];
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2514;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    if ((*(int *)(pSVar3 + 0x24) == 0xe) || (*(int *)(pSVar3 + 0x24) == 0xf)) {
      afStack_80[0] = 0.0;
      fStack_84 = 0.0;
      afStack_80[1] = 0.0;
    }
    fStack_6c = *(float *)&param_1->field_0x2518 * param_2;
    velocity = (CVector3f *)&fStack_84;
    fStack_68 = *(float *)&param_1->field_0x251c * param_2;
    fStack_64 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_30 = fStack_6c;
    afStack_80[(uint)bVar6 * -2 + 0x15] = afStack_80[(uint)bVar6 * -2 + 6];
    afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
         afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    fStack_84 = fStack_84 + fStack_30;
    afStack_80[0] = afStack_80[0] + fStack_2c;
    afStack_80[1] = afStack_80[1] + fStack_28;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,velocity);
  }
  else {
    if (*(int *)&param_1->field_0x2700 == 0) {
      core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
      afStack_60[0] = (float)uStack_54;
      afStack_80[(uint)bVar6 * -2 + 9] = afStack_80[(uint)bVar6 * -2 + 0xc];
      afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      core_vecdir_cpp_FUN_005a7520(afStack_80 + 8);
      afStack_80[2] = (float)uStack_48;
      afStack_80[(uint)bVar6 * -2 + 3] = afStack_80[(uint)bVar6 * -2 + 0xf];
      afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      fStack_14 = (float)core_actor_cpp_FUN_0040cd60(afStack_80[3]);
      fStack_1c = fStack_14;
      if (fStack_14 < _DAT_005e4533) {
        fStack_1c = fStack_14 + _DAT_005e4537;
      }
      if (_DAT_005e453b < fStack_1c) {
        fStack_1c = fStack_1c + _DAT_005e453f;
      }
      fStack_24 = param_2 * _DAT_005e4537;
      fStack_18 = -fStack_24;
      if (fStack_1c < fStack_18) {
        fStack_1c = fStack_18;
      }
      if (fStack_24 < fStack_1c) {
        fStack_1c = fStack_24;
      }
      *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_1c;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
    }
    iStack_20 = *(int *)&param_1->field_0x26fc;
    fStack_14 = *(float *)(iStack_20 + 0x154);
    core_skeleton_cpp_FUN_00569130(&param_1->field_0x158,0);
    pfVar8 = afStack_a8 + 3;
    afStack_a8[3] = (float)uStack_3c;
    afStack_a8[(uint)bVar6 * -2 + 4] = afStack_80[(uint)bVar6 * -2 + 0x12];
    afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] =
         afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
    iVar2 = (**(code **)((int)fStack_14 + 0x110))(iStack_20,param_1,pfVar8);
    if (iVar2 == 0) {
      *(uint *)&param_1->field_0x26fc = 0;
LAB_004e94ca:
      iVar2 = 0;
    }
    else {
      if (*(int *)&param_1->field_0x26fc == 0) goto LAB_004e94ca;
      if (*(int *)&param_1->field_0xc1e4 == 0) goto LAB_004e94dd;
      iVar2 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
LAB_004e94dd:
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  this_ptr = (CDeformableModelInstance *)&param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr);
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if ((iVar2 == 0) &&
     (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)this_ptr), *(int *)(pSVar3 + 0x24) != 0x13)) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar7 = *(float *)&param_1->field_0x1ffc0;
    iVar2 = _DAT_01d069d8;
    core_xform_cpp_FUN_005b7ed0(&param_1->field_0x1ffb4);
    source_quaternions = (CQuaternion4f *)&uStack_ac;
    uStack_ac = uStack_bc;
    afStack_a8[(uint)bVar6 * -2] = *(float *)(&stack0xffffff48 + (uint)bVar6 * -8);
    afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)(&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    (afStack_a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         *(float *)((int)(&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                   ((uint)bVar6 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (this_ptr,source_quaternions,fVar7,iVar2,blend_callback);
  }
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
switchD_004e9753_caseD_9:
  return;
}
