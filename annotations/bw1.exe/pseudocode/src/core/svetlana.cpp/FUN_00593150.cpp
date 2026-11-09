// Name: core_svetlana.cpp_FUN_00593150
// Address: 00593150
// Address Range: [[00593150, 005938b7]]
// Convention: unknown
// Signature: void core_svetlana_cpp_FUN_00593150(CSvetlana *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_svetlana_cpp_FUN_00593150(CSvetlana *param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float afStackY_18ac [1521];
  CDeformableModelInstance *this_ptr;
  CQuaternion4f *source_quaternions;
  float fVar7;
  float *pfVar8;
  code *blend_callback;
  uint uStack_d0;
  float afStack_cc [7];
  uint auStack_b0 [3];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint auStack_98 [3];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  float afStack_7c [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  if ((*(float *)&param_1->field_0x2538 < (float)_DAT_005f756f) &&
     (fVar7 = *(float *)&param_1->field_0x2538 + param_2, *(float *)&param_1->field_0x2538 = fVar7,
     (float)_DAT_005f756f < fVar7)) {
    *(uint *)&param_1->field_0x2538 = 0x42c80000;
  }
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if ((iVar2 == 0) || (*(int *)&param_1->field_0x1ffa8 == 4)) {
switchD_005935af_caseD_9:
    return;
  }
  core_charactr_cpp_FUN_00434790(param_1,param_2);
  core_charactr_cpp_FUN_00435320(param_1,param_2);
  fVar7 = *(float *)&param_1->field_0xc1d0 - param_2;
  *(float *)&param_1->field_0xc1d0 = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)&param_1->field_0xc1d0 = 0;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_svetlana_cpp_FUN_005940a0(param_1,param_2);
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  iVar2 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    if (*(int *)&param_1->field_0xc1d4 == 2) {
      core_svetlana_cpp_FUN_005938c0(param_1,param_2);
    }
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
            if (iVar5 != 0) goto LAB_00593649;
            iVar5 = core_hero_cpp_FUN_004eb3e0(param_1,0);
            if ((iVar5 != 0) && (iVar5 != 1)) {
              core_hero_cpp_FUN_004eb5e0((CHero *)param_1);
            }
            if ((iVar5 != 0) ||
               (iVar5 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240((CHero *)param_1),
               iVar5 != 0)) goto LAB_00593649;
            iVar5 = core_hero_cpp_FUN_004eb660((CHero *)param_1);
            if (iVar5 != 0) {
              core_hero_cpp_FUN_004eb7f0(param_1);
              goto LAB_00593649;
            }
          }
          else {
LAB_00593649:
            if (!bVar1) goto LAB_0059366a;
          }
          *(uint *)&param_1->field_0xc1e4 = 0;
          if (*(int *)&param_1->field_0x1ffb0 == 0) {
            iVar2 = 0xf;
          }
          else {
            iVar2 = 0xe;
          }
        }
LAB_0059366a:
        *(float *)&param_1->field_0x2508 =
             *(float *)&param_1->field_0xc200 * *(float *)&param_1->field_0x2528;
        pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&param_1->field_0x158);
        if (iVar2 != *(int *)(pSVar3 + 0x24)) goto LAB_005932a3;
      }
      break;
    case 9:
      goto switchD_005935af_caseD_9;
    }
  }
  else {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    if ((*(int *)(pSVar3 + 0x24) != 0x1a) && (*(int *)(pSVar3 + 0x24) != 0x1b)) {
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    }
    uVar4 = *(uint *)&param_1->field_0x273c;
    if (uVar4 < 2) {
      if (uVar4 == 1) {
        iVar2 = 1;
      }
      else {
LAB_0059356b:
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
          goto switchD_005935af_caseD_4;
        }
        goto LAB_0059356b;
      }
      iVar2 = 2;
    }
LAB_005932a3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
switchD_005935af_caseD_4:
  if (*(int *)&param_1->field_0x26fc == 0) {
    fStack_8c = *(float *)&param_1->field_0x249c;
    fStack_88 = *(float *)&param_1->field_0x24a0;
    fStack_84 = *(float *)&param_1->field_0x24a4;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    if (*(int *)(pSVar3 + 0x24) != 0x1a) {
      core_charactr_cpp_FUN_0042d700(param_1,param_2);
    }
    afStack_7c[2] = *(float *)&param_1->field_0x2518 * param_2;
    afStack_7c[3] = *(float *)&param_1->field_0x251c * param_2;
    fStack_6c = *(float *)&param_1->field_0x2520 * param_2;
    fStack_44 = afStack_7c[2];
    afStack_7c[(uint)bVar6 * -2 + 0xf] = afStack_7c[(uint)bVar6 * -2 + 3];
    afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
         afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_68 = fStack_44 + *(float *)&param_1->field_0x250c;
    fStack_64 = fStack_40 + *(float *)&param_1->field_0x2510;
    fStack_60 = fStack_3c + *(float *)&param_1->field_0x2514;
    fStack_a4 = fStack_68;
    afStack_cc[(uint)bVar6 * -2 + 0xb] = afStack_7c[(uint)bVar6 * -2 + 6];
    afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xc] =
         afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    fStack_8c = fStack_8c + fStack_a4;
    fStack_88 = fStack_88 + fStack_a0;
    fStack_84 = fStack_84 + fStack_9c;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    iVar2 = *(int *)(pSVar3 + 0x24);
    if ((((iVar2 != 0x17) && (iVar2 != 0x18)) && (iVar2 != 0x19)) &&
       (((iVar2 != 0x25 && (iVar2 != 0x26)) && ((iVar2 != 0x27 && (iVar2 != 0x28)))))) {
      core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_8c);
    }
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    if (*(int *)(pSVar3 + 0x24) == 0x1a) {
      *(float *)&param_1->field_0x24 =
           param_2 * (float)_DAT_005f7577 + *(float *)&param_1->field_0x24;
    }
    goto LAB_00593467;
  }
  if (*(int *)&param_1->field_0x2700 == 0) {
    core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
    auStack_98[0] = uStack_5c;
    afStack_cc[(uint)bVar6 * -2 + 0xe] = afStack_7c[(uint)bVar6 * -2 + 9];
    afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xf] =
         afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    core_vecdir_cpp_FUN_005a7520(afStack_cc + 0xd);
    uStack_80 = uStack_50;
    afStack_7c[(uint)bVar6 * -2] = afStack_7c[(uint)bVar6 * -2 + 0xc];
    afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    fStack_14 = (float)core_actor_cpp_FUN_0040cd60(afStack_7c[0]);
    fStack_18 = fStack_14;
    if (fStack_14 < _DAT_005f757f) {
      fStack_18 = fStack_14 + _DAT_005f7583;
    }
    if (_DAT_005f7587 < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005f758b;
    }
    fStack_1c = param_2 * _DAT_005f7583;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_18;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
  }
  iStack_24 = *(int *)&param_1->field_0x26fc;
  fStack_14 = *(float *)(iStack_24 + 0x154);
  core_skeleton_cpp_FUN_00569130(&param_1->field_0x158,0);
  pfVar8 = afStack_cc + 7;
  auStack_b0[0] = uStack_38;
  afStack_cc[(uint)bVar6 * -2 + 8] = afStack_7c[(uint)bVar6 * -2 + 0x12];
  afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
       afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
  iVar2 = (**(code **)((int)fStack_14 + 0x110))(iStack_24,param_1,pfVar8);
  if (iVar2 == 0) {
    *(uint *)&param_1->field_0x26fc = 0;
LAB_00593454:
    iVar2 = 0;
  }
  else {
    if (*(int *)&param_1->field_0x26fc == 0) goto LAB_00593454;
    if (*(int *)&param_1->field_0xc1e4 == 0) goto LAB_00593467;
    iVar2 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&param_1->field_0x158,iVar2,1);
LAB_00593467:
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  this_ptr = (CDeformableModelInstance *)&param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr);
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if (iVar2 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar7 = *(float *)&param_1->field_0x95624;
    iVar2 = _DAT_02c83708;
    core_xform_cpp_FUN_005b7ed0(&param_1->field_0x95618);
    source_quaternions = (CQuaternion4f *)&uStack_d0;
    uStack_d0 = afStack_cc[3];
    afStack_cc[(uint)bVar6 * -2] = afStack_cc[(uint)bVar6 * -2 + 4];
    afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    (afStack_cc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_cc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (this_ptr,source_quaternions,fVar7,iVar2,blend_callback);
  }
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  core_cloth_cpp_CCloth_process_FUN_00440610
            ((CCloth *)&param_1->field_0x1ffb4,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2504,
             (CDeformableModelInstance *)&param_1->field_0x158);
  core_cloth_cpp_CCloth_process_FUN_00440610
            ((CCloth *)&param_1->field_0x5aae4,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2504,
             (CDeformableModelInstance *)&param_1->field_0x158);
  return;
}
