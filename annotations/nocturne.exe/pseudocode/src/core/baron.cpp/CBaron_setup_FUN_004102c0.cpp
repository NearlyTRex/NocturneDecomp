// Name: core_baron.cpp_CBaron_setup_FUN_004102c0
// Address: 004102c0
// Address Range: [[004102c0, 00410474]]
// Convention: unknown
// Signature: void core_baron_cpp_CBaron_setup_FUN_004102c0(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_baron_cpp_CBaron_setup_FUN_004102c0(CHero *param_1)

{
  CCharacter *pCVar1;
  CSkeleton *this_ptr;
  int iVar2;
  
  core_hero_cpp_FUN_004b48d0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                       (&(param_1->base).model);
  DAT_007642e8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 head",1)
  ;
  _DAT_007642ec =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Clavicle",1);
  _DAT_007642f0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Clavicle",1);
  _DAT_007642f4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L UpperArm",1);
  _DAT_007642f8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R UpperArm",1);
  _DAT_007642fc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L ForeArm",1);
  _DAT_00764300 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R ForeArm",1);
  _DAT_00764304 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Foot",1);
  _DAT_00764308 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Foot",1);
  _DAT_0076430c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Thigh",1);
  _DAT_00764310 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Thigh",1);
  _DAT_00764314 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Calf",1);
  _DAT_00764318 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Calf",1);
  DAT_0076431c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr,"Bip01 L Hand",1);
  DAT_00764320 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr,"Bip01 R Hand",1);
  _DAT_00764324 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine2",1);
  _DAT_00764328 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine",1);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine1",1);
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[0x60] = '\0';
  (pCVar1->base).create_event[0x61] = '\0';
  (pCVar1->base).create_event[0x62] = '\0';
  (pCVar1->base).create_event[99] = '\0';
  (param_1->base).gesture_branch_root = iVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)&DAT_0076436c);
  return;
}
