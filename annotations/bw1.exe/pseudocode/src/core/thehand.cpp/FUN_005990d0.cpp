// Name: core_thehand.cpp_FUN_005990d0
// Address: 005990d0
// Address Range: [[005990d0, 00599144]]
// Convention: unknown
// Signature: void core_thehand_cpp_FUN_005990d0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_thehand_cpp_FUN_005990d0(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&param_1->field_0x158);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  _DAT_02c8ad48 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"bipHand",1);
  _DAT_02c8ad4c = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"bipArm 2",1);
  _DAT_02c8ad50 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"bipArm 1",1);
  _DAT_02c8ad54 = 0;
  return;
}
