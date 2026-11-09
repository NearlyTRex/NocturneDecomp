// Name: core_stranger.cpp_FUN_00585670
// Address: 00585670
// Address Range: [[00585670, 005859bb]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00585670(CStranger *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_00585670(CStranger *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CMotionList *pCVar1;
  CDeformableModel *this_ptr_01;
  byte bVar2;
  uint auStackY_1028 [1015];
  char *pcVar3;
  int iVar4;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar2 = 0;
  core_hero_cpp_FUN_004eaa10((CHero *)param_1);
  this_ptr = &param_1->field_0x158;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_02c83600 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 head",1);
  _DAT_02c83604 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_02c83608 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_02c8360c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_02c83610 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_02c83614 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_02c83618 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_02c8361c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_02c83620 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_02c83624 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_02c83628 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_02c8362c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Calf",1);
  _DAT_02c83630 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Calf",1);
  _DAT_02c83634 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_02c83638 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_02c8363c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Neck",1);
  _DAT_02c83640 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_02c83644 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  _DAT_02c83648 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  _DAT_02c8364c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Pelvis",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  *(int *)&param_1->field_0x25a8 = _DAT_02c83634;
  *(int *)&param_1->field_0x2620 = _DAT_02c83638;
  pCVar1 = core_motion_cpp_FUN_00524a00((CMotionController *)this_ptr);
  _DAT_02c83650 = core_motion_cpp_FUN_005240c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "turnrstart";
  pCVar1 = core_motion_cpp_FUN_00524a00((CMotionController *)this_ptr);
  _DAT_02c83654 = core_motion_cpp_FUN_005240c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "pickup";
  pCVar1 = core_motion_cpp_FUN_00524a00((CMotionController *)this_ptr);
  iVar4 = core_motion_cpp_FUN_005240c0(pCVar1,pcVar3,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
            ((CDeformableModelInstance *)this_ptr,iVar4,22.0);
  core_skeleton_cpp_FUN_00569040(this_ptr,_DAT_02c83638);
  uStack_40 = uStack_1c;
  (&stack0xffffffc4)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((uint *)&param_1->field_0x20090 != &stack0xffffffc0) {
    *(uint *)&param_1->field_0x20090 = uStack_40;
    *(uint *)&param_1->field_0x20094 = uStack_3c;
    *(uint *)&param_1->field_0x20098 = uStack_38;
  }
  core_skeleton_cpp_FUN_00569040(&param_1->field_0x158,_DAT_02c83610);
  uStack_28 = uStack_34;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((uint *)&param_1->field_0x2009c != &stack0xffffffd8) {
    *(uint *)&param_1->field_0x2009c = uStack_28;
    *(uint *)&param_1->field_0x200a0 = uStack_24;
    *(uint *)&param_1->field_0x200a4 = uStack_20;
  }
  core_stranger_cpp_FUN_00588ad0(param_1);
  *(uint *)&param_1->field_0x200a8 = 0;
  *(uint *)&param_1->field_0x20238 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&param_1->field_0x200ac,"stranger-hat.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&param_1->field_0x200ac);
  *(uint *)&param_1->field_0x20240 = 0;
  *(uint *)&param_1->field_0x2001c = 0;
  *(uint *)&param_1->field_0x20020 = 0;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)&param_1->field_0x158);
  _DAT_02c83658 = core_skeleton_cpp_FUN_00565780(this_ptr_01,&DAT_005f6706,1);
  return;
}
