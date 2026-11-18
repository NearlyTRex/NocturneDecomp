// Name: core_toxhand.cpp_CTheHand_setup_FUN_0056c0c0
// Address: 0056c0c0
// Address Range: [[0056c0c0, 0056c134]]
// Convention: __cdecl
// Signature: void __cdecl core_toxhand_cpp_CTheHand_setup_FUN_0056c0c0(CTheHand *this_ptr)

#include "nocturne.h"

void __cdecl core_toxhand_cpp_CTheHand_setup_FUN_0056c0c0(CTheHand *this_ptr)

{
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  
  this_ptr_01 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_01);
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_01);
  g_INT_02cfd798 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"bipHand",1);
  g_INT_02cfd79c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"bipArm 2",1);
  g_INT_02cfd7a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"bipArm 1",1);
  g_INT_02cfd7a4 = 0;
  return;
}
