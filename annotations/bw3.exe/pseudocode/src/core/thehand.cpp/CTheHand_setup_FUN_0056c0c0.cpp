// Name: core_thehand.cpp_CTheHand_setup_FUN_0056c0c0
// Address: 0056c0c0
// Address Range: [[0056c0c0, 0056c134]]
// Convention: __cdecl
// Signature: void __cdecl core_thehand_cpp_CTheHand_setup_FUN_0056c0c0(CTheHand *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_thehand_cpp_CTheHand_setup_FUN_0056c0c0(CTheHand *this_ptr)

{
  CSkeleton *this_ptr_00;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_enemy_cpp_CEnemy_setup_FUN_00489110((CEnemy *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  _DAT_02cfd798 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"bipHand",1);
  _DAT_02cfd79c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"bipArm 2",1);
  _DAT_02cfd7a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"bipArm 1",1);
  _DAT_02cfd7a4 = 0;
  return;
}
