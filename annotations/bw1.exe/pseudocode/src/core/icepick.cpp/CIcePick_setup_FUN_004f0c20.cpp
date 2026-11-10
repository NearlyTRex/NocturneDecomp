// Name: core_icepick.cpp_CIcePick_setup_FUN_004f0c20
// Address: 004f0c20
// Address Range: [[004f0c20, 004f0e34]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004f0c20(CIcePick *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004f0c20(CIcePick *this_ptr)

{
  CIcePick *pCVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  
  core_hero_cpp_CHero_setup_FUN_004eaa10((CHero *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  _DAT_01d06c74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 head",1);
  _DAT_01d06c78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_01d06c7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_01d06c80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d06c84 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d06c88 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01d06c8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01d06c90 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01d06c94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01d06c98 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_01d06c9c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_01d06ca0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Calf",1);
  _DAT_01d06ca4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Calf",1);
  _DAT_01d06ca8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01d06cac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01d06cb0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01d06cb4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01d06cb8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  *(uint *)&this_ptr->field_0x25ac = 0;
  *(uint *)&this_ptr->field_0x2624 = 0;
  this_ptr->guns_drawn = 0;
  *(int *)&this_ptr->field_0x25a8 = _DAT_01d06ca8;
  *(int *)&this_ptr->field_0x2620 = _DAT_01d06cac;
  iVar2 = _DAT_01d06ab4;
  this_ptr->pending_pickup_target = (CDemonActor *)0x0;
  pCVar1 = *(CIcePick **)(iVar2 * 4 + 0x1d06aa4);
  if (this_ptr == pCVar1) {
    *(uint *)&pCVar1->field_0x2ff0 = 0x3fc00000;
  }
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[0] = 0;
  this_ptr->aim_pitch = 0.0;
  return;
}
