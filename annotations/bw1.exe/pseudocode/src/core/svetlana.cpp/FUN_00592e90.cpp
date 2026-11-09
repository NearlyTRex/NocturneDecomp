// Name: core_svetlana.cpp_FUN_00592e90
// Address: 00592e90
// Address Range: [[00592e90, 0059311b]]
// Convention: unknown
// Signature: void core_svetlana_cpp_FUN_00592e90(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_svetlana_cpp_FUN_00592e90(CHero *param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  char *pcVar2;
  
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    pcVar2 = "svetlanax.dfm";
  }
  else {
    pcVar2 = "svetlana.dfm";
  }
  core_skeleton_cpp_FUN_00569f50(param_1 + 0x158,pcVar2);
  core_hero_cpp_FUN_004eaa10(param_1);
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x158);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  _DAT_02c83708 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 head",1);
  _DAT_02c8370c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_02c83710 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_02c83714 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_02c83718 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_02c8371c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_02c83720 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_02c83724 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_02c83728 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_02c8372c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_02c83730 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_02c83734 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Calf",1);
  _DAT_02c83738 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Calf",1);
  _DAT_02c8373c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_02c83740 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_02c83744 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_02c83748 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  _DAT_02c8374c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bipblade01",1);
  _DAT_02c83750 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"BipR14",1)
  ;
  *(uint *)(param_1 + 0x1ffac) = 0;
  core_cloth_cpp_CCloth_load_FUN_0043e6d0((CCloth *)(param_1 + 0x1ffb4),"svetcape.cth");
  core_cloth_cpp_FUN_0043eea0
            ((CCloth *)(param_1 + 0x1ffb4),(CVector3f *)(param_1 + 0x20),
             (CVector3f *)(param_1 + 0x30),this_ptr);
  core_cloth_cpp_CCloth_load_FUN_0043e6d0((CCloth *)(param_1 + 0x5aae4),"svethair.cth");
  core_cloth_cpp_FUN_0043eea0
            ((CCloth *)(param_1 + 0x5aae4),(CVector3f *)(param_1 + 0x20),
             (CVector3f *)(param_1 + 0x30),this_ptr);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lblade01",1);
  *(int *)(param_1 + 0x95628) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rblade02",1);
  *(uint *)(param_1 + 0x95614) = 0;
  *(int *)(param_1 + 0x9562c) = iVar1;
  return;
}
