// Name: core_stranger.cpp_FUN_00562b90
// Address: 00562b90
// Address Range: [[00562b90, 00562edb]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00562b90(CStranger *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_00562b90(CStranger *param_1)

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
  core_hero_cpp_FUN_004ce4a0((CHero *)param_1);
  this_ptr = &param_1->field_0x2b4;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_0264be30 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 head",1);
  _DAT_0264be34 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_0264be38 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_0264be3c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_0264be40 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_0264be44 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_0264be48 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_0264be4c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_0264be50 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_0264be54 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_0264be58 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_0264be5c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Calf",1);
  _DAT_0264be60 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Calf",1);
  _DAT_0264be64 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  _DAT_0264be68 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_0264be6c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Neck",1);
  _DAT_0264be70 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  _DAT_0264be74 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  _DAT_0264be78 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_0264be7c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Pelvis",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  *(int *)&param_1->field_0x2618 = _DAT_0264be64;
  *(int *)&param_1->field_0x2690 = _DAT_0264be68;
  pCVar1 = core_motion_cpp_FUN_00503860((CMotionController *)this_ptr);
  _DAT_0264be80 = core_motion_cpp_FUN_00502f10(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "turnrstart";
  pCVar1 = core_motion_cpp_FUN_00503860((CMotionController *)this_ptr);
  _DAT_0264be84 = core_motion_cpp_FUN_00502f10(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "pickup";
  pCVar1 = core_motion_cpp_FUN_00503860((CMotionController *)this_ptr);
  iVar4 = core_motion_cpp_FUN_00502f10(pCVar1,pcVar3,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50
            ((CDeformableModelInstance *)this_ptr,iVar4,22.0);
  core_skeleton_cpp_FUN_005469a0(this_ptr,_DAT_0264be68);
  uStack_40 = uStack_1c;
  (&stack0xffffffc4)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((uint *)&param_1->field_0x25728 != &stack0xffffffc0) {
    *(uint *)&param_1->field_0x25728 = uStack_40;
    *(uint *)&param_1->field_0x2572c = uStack_3c;
    *(uint *)&param_1->field_0x25730 = uStack_38;
  }
  core_skeleton_cpp_FUN_005469a0(&param_1->field_0x2b4,_DAT_0264be40);
  uStack_28 = uStack_34;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((uint *)&param_1->field_0x25734 != &stack0xffffffd8) {
    *(uint *)&param_1->field_0x25734 = uStack_28;
    *(uint *)&param_1->field_0x25738 = uStack_24;
    *(uint *)&param_1->field_0x2573c = uStack_20;
  }
  core_stranger_cpp_FUN_00565ff0(param_1);
  *(uint *)&param_1->field_0x25740 = 0;
  *(uint *)&param_1->field_0x258d0 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&param_1->field_0x25744,"stranger-hat.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&param_1->field_0x25744);
  *(uint *)&param_1->field_0x258d8 = 0;
  *(uint *)&param_1->field_0x256b4 = 0;
  *(uint *)&param_1->field_0x256b8 = 0;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)&param_1->field_0x2b4);
  _DAT_0264be88 = core_skeleton_cpp_FUN_00543100(this_ptr_01,&DAT_005eb493,1);
  return;
}
