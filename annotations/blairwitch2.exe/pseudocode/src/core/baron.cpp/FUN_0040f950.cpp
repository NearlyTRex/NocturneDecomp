// Name: core_baron.cpp_FUN_0040f950
// Address: 0040f950
// Address Range: [[0040f950, 0040fee5]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_0040f950(CBaron *param_1,float param_2)

#include "nocturne.h"

void core_baron_cpp_FUN_0040f950(CBaron *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
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
  if (*(int *)&param_1->field_0x25738 == 0) {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1->field_0x25640);
    if (iVar2 != 0) {
      *(uint *)&param_1->field_0x25738 = 1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,6,1);
      *(uint *)&param_1->field_0x2573c = 1;
    }
  }
  else {
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1->field_0x256a4);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,7,1);
    }
  }
  if (((*(int *)&param_1->field_0x25738 == 0) && (*(int *)&param_1->field_0x10a64 == 2)) ||
     (iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                        ((CCharacter *)param_1,param_2), iVar2 == 0)) {
    return;
  }
  if (*(int *)&param_1->field_0x10a64 == 2) {
    core_baron_cpp_CBaron_updateMountedPosition_FUN_00410080(param_1,param_2);
  }
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2);
  fVar5 = *(float *)&param_1->field_0x10a60 - param_2;
  *(float *)&param_1->field_0x10a60 = fVar5;
  if (fVar5 < 0.0) {
    *(uint *)&param_1->field_0x10a60 = 0;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  core_baron_cpp_FUN_00410590(param_1,param_2);
  if (*(int *)&param_1->field_0x25738 == 0) {
    return;
  }
  iVar2 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    switch(*(uint *)(iVar2 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar2 = 0;
      if (*(int *)&param_1->field_0x10a68 != 0) {
        if (*(int *)&param_1->field_0x10a70 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = 3;
        }
      }
      if (*(int *)&param_1->field_0x10a6c != 0) {
        iVar2 = 2;
      }
      if (*(int *)&param_1->field_0x10a74 != 0) {
        *(uint *)&param_1->field_0x2571c = 1;
        iVar2 = 4;
        *(uint *)&param_1->field_0x10a74 = 0;
      }
      *(float *)&param_1->field_0x2578 =
           *(float *)&param_1->field_0x10a90 * *(float *)&param_1->field_0x2598;
      iVar3 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
      if (iVar2 == *(int *)(iVar3 + 0x24)) break;
      goto LAB_0040faba;
    case 4:
      core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + DAT_007bc4cc * 0x30);
      puVar6 = &uStack_38;
      uStack_38 = auStack_34[2];
      auStack_34[(uint)bVar4 * -2] = auStack_34[(uint)bVar4 * -2 + 3];
      auStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           auStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      core_actor_cpp_FUN_00408d70(param_1,puVar6);
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
      core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + DAT_007bc4d0 * 0x30);
      puVar6 = &uStack_50;
      uStack_50 = uStack_80;
      auStack_4c[(uint)bVar4 * -2] = auStack_7c[(uint)bVar4 * -2];
      auStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           auStack_7c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_actor_cpp_FUN_00408d70(param_1,puVar6);
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
      if (*(int *)&param_1->field_0x2571c == 0) {
        core_fire_cpp_FUN_0049e850
                  (0x01C3DEB4,&CStack_44,(CVector3f *)&param_1->field_0x25720,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_00609810);
        core_fire_cpp_FUN_0049e850
                  (0x01C3DEB4,&CStack_20,(CVector3f *)&param_1->field_0x2572c,2.0,0.5,0.5,
                   (SMRGLTextureBasic *)&DAT_00609810);
      }
      if ((CVector3f *)&param_1->field_0x25720 != &CStack_44) {
        *(uint *)&param_1->field_0x25720 = CStack_44._0_4_;
        *(uint *)&param_1->field_0x25724 = CStack_44._4_4_;
        *(uint *)&param_1->field_0x25728 = CStack_44._8_4_;
      }
      if ((CVector3f *)&param_1->field_0x2572c != &CStack_20) {
        *(uint *)&param_1->field_0x2572c = CStack_20._0_4_;
        *(uint *)&param_1->field_0x25730 = CStack_20._4_4_;
        *(uint *)&param_1->field_0x25734 = CStack_20._8_4_;
      }
      *(uint *)&param_1->field_0x2571c = 0;
    }
    goto switchD_0040fedf_default;
  }
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 != 1) goto LAB_0040fc5d;
    iVar2 = 1;
  }
  else if (uVar1 < 3) {
    iVar2 = 3;
  }
  else {
    if (uVar1 == 3) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
      goto switchD_0040fedf_default;
    }
LAB_0040fc5d:
    iVar2 = 0;
  }
LAB_0040faba:
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
switchD_0040fedf_default:
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  core_charactr_cpp_FUN_00423a10(param_1,param_2);
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  this_ptr = (CDeformableModelInstance *)&param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr);
  blend_callback = core_skeleton_cpp_FUN_00544cc0;
  fVar5 = *(float *)&param_1->field_0x25714;
  iVar2 = DAT_007bc498;
  core_xform_cpp_FUN_00594380(&param_1->field_0x25708);
  source_quaternions = (CQuaternion4f *)&uStack_a8;
  uStack_a8 = uStack_b8;
  auStack_a4[(uint)bVar4 * -2] = *(uint *)(&stack0xffffff4c + (uint)bVar4 * -8);
  auStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffff50 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  (auStack_a4 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff50 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_FUN_005466c0(this_ptr,source_quaternions,fVar5,iVar2,blend_callback);
  iVar2 = 0;
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  do {
    fStack_68 = (float)core_actor_cpp_FUN_0040cf60(0xc0000000,0x40000000);
    iVar2 = iVar2 + 1;
    fStack_64 = 2.0;
    fStack_14 = fStack_68;
    fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0xc0000000,0x40000000);
    fStack_68 = fStack_68 + *(float *)&param_1->field_0x20;
    fStack_64 = fStack_64 + *(float *)&param_1->field_0x24;
    fStack_60 = fStack_14 + *(float *)&param_1->field_0x28;
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
              (0x01C3DEB4,(CVector3f *)&fStack_68,2.0,(CVector3f *)0x0,0xffff);
  } while (iVar2 < 2);
  DAT_007bc4dc = DAT_007bc4dc + param_2;
  return;
}
