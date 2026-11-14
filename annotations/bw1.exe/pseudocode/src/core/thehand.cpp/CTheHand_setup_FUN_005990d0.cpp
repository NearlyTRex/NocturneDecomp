// Name: core_thehand.cpp_CTheHand_setup_FUN_005990d0
// Address: 005990d0
// Address Range: [[005990d0, 00599144]]
// Convention: __cdecl
// Signature: void __cdecl core_thehand_cpp_CTheHand_setup_FUN_005990d0(CTheHand *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_thehand_cpp_CTheHand_setup_FUN_005990d0(CTheHand *this_ptr)

{
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  
  this_ptr_01 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_01);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_01);
  _DAT_02c8ad48 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"bipHand",1);
  _DAT_02c8ad4c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"bipArm 2",1);
  _DAT_02c8ad50 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"bipArm 1",1);
  _DAT_02c8ad54 = 0;
  return;
}
