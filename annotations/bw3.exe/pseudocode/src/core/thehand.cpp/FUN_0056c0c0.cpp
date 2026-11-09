// Name: core_thehand.cpp_FUN_0056c0c0
// Address: 0056c0c0
// Address Range: [[0056c0c0, 0056c134]]
// Convention: unknown
// Signature: void core_thehand_cpp_FUN_0056c0c0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_thehand_cpp_FUN_0056c0c0(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)&param_1->field_0x158);
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  _DAT_02cfd798 = core_skeleton_cpp_FUN_00548090(this_ptr,"bipHand",1);
  _DAT_02cfd79c = core_skeleton_cpp_FUN_00548090(this_ptr,"bipArm 2",1);
  _DAT_02cfd7a0 = core_skeleton_cpp_FUN_00548090(this_ptr,"bipArm 1",1);
  _DAT_02cfd7a4 = 0;
  return;
}
