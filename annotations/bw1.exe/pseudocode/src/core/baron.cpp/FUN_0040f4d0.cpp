// Name: core_baron.cpp_FUN_0040f4d0
// Address: 0040f4d0
// Address Range: [[0040f4d0, 0040fa65]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_0040f4d0(CBaron *param_1,float param_2)

#include "nocturne.h"

void core_baron_cpp_FUN_0040f4d0(CBaron *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  byte bVar4;
  uint auStackY_1894 [1520];
  CDeformableModelInstance *this_ptr;
  CQuaternion4f *source_quaternions;
  float fVar5;
  code *blend_callback;
  uint *puVar6;
  uint uStack_b8;
  uint uStack_a8;
  uint auStack_a4 [3];
  CVector3f CStack_98;
  CVector3f CStack_8c;
  uint uStack_80;
  uint auStack_7c [2];
  CVector3f CStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  uint uStack_50;
  uint auStack_4c [2];
  CVector3f CStack_44;
  uint uStack_38;
  uint auStack_34 [5];
  CVector3f CStack_20;
  float fStack_14;
  
  bVar4 = 0;
  if (*(int *)&param_1->field_0x200a4 == 0) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1->field_0x1ffac);
    if (iVar2 != 0) {
      *(uint *)&param_1->field_0x200a4 = 1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,6,1);
      *(uint *)&param_1->field_0x200a8 = 1;
    }
  }
  else {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1->field_0x20010);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,7,1);
    }
  }
  if (((*(int *)&param_1->field_0x200a4 == 0) && (*(int *)&param_1->field_0xc1d4 == 2)) ||
     (iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                        ((CCharacter *)param_1,param_2), iVar2 == 0)) {
    return;
  }
  if (*(int *)&param_1->field_0xc1d4 == 2) {
    core_baron_cpp_CBaron_updateMountedPosition_FUN_0040fc00(param_1,param_2);
  }
  core_charactr_cpp_FUN_00435320(param_1,param_2);
  fVar5 = *(float *)&param_1->field_0xc1d0 - param_2;
  *(float *)&param_1->field_0xc1d0 = fVar5;
  if (fVar5 < 0.0) {
    *(uint *)&param_1->field_0xc1d0 = 0;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_baron_cpp_FUN_00410110(param_1,param_2);
  if (*(int *)&param_1->field_0x200a4 == 0) {
    return;
  }
  iVar2 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    switch(*(uint *)(pSVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar2 = 0;
      if (*(int *)&param_1->field_0xc1d8 != 0) {
        if (*(int *)&param_1->field_0xc1e0 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = 3;
        }
      }
      if (*(int *)&param_1->field_0xc1dc != 0) {
        iVar2 = 2;
      }
      if (*(int *)&param_1->field_0xc1e4 != 0) {
        *(uint *)&param_1->field_0x20088 = 1;
        iVar2 = 4;
        *(uint *)&param_1->field_0xc1e4 = 0;
      }
      *(float *)&param_1->field_0x2508 =
           *(float *)&param_1->field_0xc200 * *(float *)&param_1->field_0x2528;
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&param_1->field_0x158);
      if (iVar2 == *(int *)(pSVar3 + 0x24)) break;
      goto LAB_0040f63a;
    case 4:
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + DAT_007c34cc * 0x30);
      puVar6 = &uStack_38;
      uStack_38 = auStack_34[2];
      auStack_34[(uint)bVar4 * -2] = auStack_34[(uint)bVar4 * -2 + 3];
      auStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           auStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      core_actor_cpp_FUN_00408b40(param_1,puVar6);
      CStack_98._0_4_ = CStack_74._0_4_;
      *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      if (&CStack_44 != &CStack_98) {
        CStack_44._0_4_ = CStack_98._0_4_;
        CStack_44._4_4_ = CStack_98._4_4_;
        CStack_44._8_4_ = CStack_98._8_4_;
      }
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + DAT_007c34d0 * 0x30);
      puVar6 = &uStack_50;
      uStack_50 = uStack_80;
      auStack_4c[(uint)bVar4 * -2] = auStack_7c[(uint)bVar4 * -2];
      auStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           auStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_actor_cpp_FUN_00408b40(param_1,puVar6);
      CStack_5c._0_4_ = CStack_8c._0_4_;
      *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_8c + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_8c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      if (&CStack_20 != &CStack_5c) {
        CStack_20._0_4_ = CStack_5c._0_4_;
        CStack_20._4_4_ = CStack_5c._4_4_;
        CStack_20._8_4_ = CStack_5c._8_4_;
      }
      if (*(int *)&param_1->field_0x20088 == 0) {
        core_fire_cpp_FUN_004b7150
                  (0x01C57074,&CStack_44,(CVector3f *)&param_1->field_0x2008c,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_00610914);
        core_fire_cpp_FUN_004b7150
                  (0x01C57074,&CStack_20,(CVector3f *)&param_1->field_0x20098,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_00610914);
      }
      if ((CVector3f *)&param_1->field_0x2008c != &CStack_44) {
        *(uint *)&param_1->field_0x2008c = CStack_44._0_4_;
        *(uint *)&param_1->field_0x20090 = CStack_44._4_4_;
        *(uint *)&param_1->field_0x20094 = CStack_44._8_4_;
      }
      if ((CVector3f *)&param_1->field_0x20098 != &CStack_20) {
        *(uint *)&param_1->field_0x20098 = CStack_20._0_4_;
        *(uint *)&param_1->field_0x2009c = CStack_20._4_4_;
        *(uint *)&param_1->field_0x200a0 = CStack_20._8_4_;
      }
      *(uint *)&param_1->field_0x20088 = 0;
    }
    goto switchD_0040fa5f_default;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 != 1) goto LAB_0040f7dd;
    iVar2 = 1;
  }
  else if (uVar1 < 3) {
    iVar2 = 3;
  }
  else {
    if (uVar1 == 3) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0,1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
      goto switchD_0040fa5f_default;
    }
LAB_0040f7dd:
    iVar2 = 0;
  }
LAB_0040f63a:
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&param_1->field_0x158,iVar2,1);
switchD_0040fa5f_default:
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_charactr_cpp_FUN_0042d700(param_1,param_2);
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  this_ptr = (CDeformableModelInstance *)&param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(this_ptr);
  blend_callback = core_skeleton_cpp_FUN_00567360;
  fVar5 = *(float *)&param_1->field_0x20080;
  iVar2 = DAT_007c3498;
  core_xform_cpp_FUN_005b7ed0(&param_1->field_0x20074);
  source_quaternions = (CQuaternion4f *)&uStack_a8;
  uStack_a8 = uStack_b8;
  auStack_a4[(uint)bVar4 * -2] = *(uint *)(&stack0xffffff4c + (uint)bVar4 * -8);
  auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffff50 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  (auStack_a4 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff50 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
            (this_ptr,source_quaternions,fVar5,iVar2,blend_callback);
  iVar2 = 0;
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  do {
    fStack_68 = (float)core_actor_cpp_FUN_0040cc00(0xc0000000,0x40000000);
    iVar2 = iVar2 + 1;
    fStack_64 = 2.0;
    fStack_14 = fStack_68;
    fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0xc0000000,0x40000000);
    fStack_68 = fStack_68 + *(float *)&param_1->field_0x20;
    fStack_64 = fStack_64 + *(float *)&param_1->field_0x24;
    fStack_60 = fStack_14 + *(float *)&param_1->field_0x28;
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
              (0x01C57074,(CVector3f *)&fStack_68,2.0,(CVector3f *)0x0,0xffff);
  } while (iVar2 < 2);
  DAT_007c34dc = DAT_007c34dc + param_2;
  return;
}
