// Name: core_haystack.cpp_CHaystack_setup_FUN_004e9090
// Address: 004e9090
// Address Range: [[004e9090, 004e9221]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_setup_FUN_004e9090(CHaystack *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_haystack_cpp_CHaystack_setup_FUN_004e9090(CHaystack *this_ptr)

{
  CSkeleton *this_ptr_00;
  
  core_hero_cpp_CHero_setup_FUN_004eaa10((CHero *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  _DAT_01d069d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 head",1);
  _DAT_01d069dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_01d069e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_01d069e4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d069e8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d069ec =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01d069f0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01d069f4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01d069f8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01d069fc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_01d06a00 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_01d06a04 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Calf",1);
  _DAT_01d06a08 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Calf",1);
  _DAT_01d06a0c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01d06a10 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01d06a14 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01d06a18 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  this_ptr->guns_drawn = 0;
  return;
}
