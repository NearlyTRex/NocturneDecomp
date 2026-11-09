// Name: core_colonel.cpp_FUN_00444550
// Address: 00444550
// Address Range: [[00444550, 00444550]]
// Convention: unknown
// Signature: void core_colonel_cpp_FUN_00444550(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_colonel_cpp_FUN_00444550(CCharacter *param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  SMotion *pSVar5;
  byte bVar6;
  float afStackY_18b0 [1522];
  CDeformableModelInstance *this_ptr;
  CQuaternion4f *source_quaternions;
  float fVar7;
  CCharacter *pCVar8;
  uint *puVar9;
  code *blend_callback;
  uint uStack_d4;
  float afStack_d0 [7];
  float fStack_b4;
  uint auStack_b0 [5];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint auStack_48 [3];
  uint uStack_3c;
  uint uStack_30;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  fVar7 = *(float *)(param_1 + 1);
  *(float *)(param_1 + 1) = fVar7 - param_2;
  if (fVar7 - param_2 < 0.0) {
    *(uint *)(param_1 + 1) = 0;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  func_0x00445140(param_1,param_2);
  if (*(int *)&param_1[1].field_0x4 == 2) {
    core_colonel_cpp_FUN_00444b4e(param_1,param_2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2);
  iVar3 = core_charactr_cpp_FUN_00432240(param_1,param_2);
  if (iVar3 == 0) {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    switch(*(uint *)(pSVar5 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)&param_1->field_0x2500 != 0) {
        iVar3 = 0;
        if (*(int *)&param_1[1].field_0x8 != 0) {
          if (*(int *)&param_1[1].field_0x10 == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if (*(int *)&param_1[1].field_0xc != 0) {
          iVar3 = 3;
        }
        if (*(int *)&param_1[1].field_0x20 != 0) {
          iVar4 = *(int *)&param_1[2].field_0x7c0c;
          *(uint *)&param_1[1].field_0x20 = 0;
          iVar3 = 0;
          *(uint *)&param_1[2].field_0x7c0c = (uint)(iVar4 == 0);
        }
        if (*(int *)&param_1[1].field_0x14 != 0) {
          bVar2 = true;
          if ((*(int *)&param_1[2].field_0x7c0c == 0) && (*(int *)&param_1[1].field_0x4 != 2)) {
            iVar4 = core_hero_cpp_CHero_tryInteract_FUN_004eb090((CHero *)param_1);
            bVar2 = false;
            if (iVar4 != 0) goto code_r0x00444948;
            iVar4 = core_hero_cpp_FUN_004eb3e0(param_1,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              core_hero_cpp_FUN_004eb5e0((CHero *)param_1);
            }
            if ((iVar4 != 0) ||
               (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240((CHero *)param_1),
               iVar4 != 0)) goto code_r0x00444948;
            iVar4 = core_hero_cpp_FUN_004eb660((CHero *)param_1);
            if (iVar4 != 0) {
              core_hero_cpp_FUN_004eb7f0(param_1);
              goto code_r0x00444948;
            }
          }
          else {
code_r0x00444948:
            if (!bVar2) goto code_r0x00444956;
          }
          *(uint *)&param_1[1].field_0x14 = 0;
        }
code_r0x00444956:
        *(float *)&param_1->field_0x2508 =
             *(float *)&param_1[1].field_0x30 * *(float *)&param_1->field_0x2528;
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&param_1->field_0x158);
        if (iVar3 != *(int *)(pSVar5 + 0x24)) goto code_r0x00444639;
      }
      break;
    case 6:
      goto code_r0x0044487e;
    }
  }
  else {
    uVar1 = *(uint *)&param_1->field_0x273c;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar3 = 1;
      }
      else {
code_r0x004448bd:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1)
          ;
          goto DAT_00444641;
        }
        goto code_r0x004448bd;
      }
      iVar3 = 2;
    }
code_r0x00444639:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar3,1);
  }
DAT_00444641:
  if (*(int *)&param_1->field_0x26fc == 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_60 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_5c = *(float *)&param_1->field_0x251c * param_2;
    fStack_58 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_9c = fStack_60;
    auStack_b0[(uint)bVar6 * -2 + 6] = auStack_b0[(uint)bVar6 * -2 + 0x15];
    auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    fStack_54 = *(float *)&param_1->field_0x249c + *(float *)&param_1->field_0x250c;
    fStack_50 = *(float *)&param_1->field_0x24a0 + *(float *)&param_1->field_0x2510;
    fStack_4c = *(float *)&param_1->field_0x24a4 + *(float *)&param_1->field_0x2514;
    fStack_84 = fStack_54;
    auStack_b0[(uint)bVar6 * -2 + 0xc] = auStack_b0[(uint)bVar6 * -2 + 0x18];
    auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
    fStack_78 = fStack_84 + fStack_9c;
    fStack_74 = fStack_80 + fStack_98;
    fStack_70 = fStack_7c + fStack_94;
    fStack_b4 = fStack_84 + fStack_9c;
    auStack_b0[(uint)bVar6 * -2] = auStack_b0[(uint)bVar6 * -2 + 0xf];
    auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_0042d750(param_1,(CVector3f *)&fStack_b4);
  }
  else {
    if (*(int *)&param_1->field_0x2700 == 0) {
      core_actor_cpp_FUN_00408bb0(param_1,*(int *)&param_1->field_0x26fc + 0x20);
      auStack_b0[2] = uStack_6c;
      auStack_b0[(uint)bVar6 * -2 + 3] = auStack_b0[(uint)bVar6 * -2 + 0x12];
      auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      core_vecdir_cpp_FUN_005a7520(auStack_b0 + 2);
      uStack_90 = uStack_30;
      auStack_b0[(uint)bVar6 * -2 + 9] = auStack_b0[(uint)bVar6 * -2 + 0x21];
      auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
      fStack_14 = (float)core_actor_cpp_FUN_0040cd60(uStack_8c);
      fStack_18 = fStack_14;
      if (fStack_14 < _DAT_005d6ca3) {
        fStack_18 = fStack_14 + _DAT_005d6ca7;
      }
      if (_DAT_005d6cab < fStack_18) {
        fStack_18 = fStack_18 + _DAT_005d6caf;
      }
      fStack_1c = param_2 * _DAT_005d6ca7;
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
    fVar7 = fStack_14;
    iVar3 = iStack_24;
    puVar9 = auStack_48;
    auStack_48[0] = uStack_3c;
    auStack_b0[(uint)bVar6 * -2 + 0x1b] = auStack_b0[(uint)bVar6 * -2 + 0x1e];
    pCVar8 = param_1;
    auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
         auStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
    iVar3 = (**(code **)((int)fVar7 + 0x110))(iVar3,pCVar8,puVar9);
    if (iVar3 == 0) {
      *(uint *)&param_1->field_0x26fc = 0;
LAB_004447f0:
      iVar3 = 0;
    }
    else {
      if (*(int *)&param_1->field_0x26fc == 0) goto LAB_004447f0;
      if (*(int *)&param_1[1].field_0x14 == 0) goto LAB_00444803;
      iVar3 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar3,1);
  }
LAB_00444803:
  core_charactr_cpp_FUN_0042e160(param_1);
  this_ptr = (CDeformableModelInstance *)&param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr);
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if (iVar3 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar7 = *(float *)&param_1[2].field_0x7c20;
    iVar3 = DAT_007db570;
    core_xform_cpp_FUN_005b7ed0(&param_1[2].field_0x7c14);
    source_quaternions = (CQuaternion4f *)&uStack_d4;
    uStack_d4 = afStack_d0[3];
    afStack_d0[(uint)bVar6 * -2] = afStack_d0[(uint)bVar6 * -2 + 4];
    afStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    (afStack_d0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (afStack_d0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (this_ptr,source_quaternions,fVar7,iVar3,blend_callback);
  }
  core_charactr_cpp_FUN_00433e80(param_1,param_2);
code_r0x0044487e:
  return;
}
