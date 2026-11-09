// Name: core_tentacle.cpp_FUN_00572630
// Address: 00572630
// Address Range: [[00572630, 005726b1]]
// Convention: unknown
// Signature: void core_tentacle_cpp_FUN_00572630(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tentacle_cpp_FUN_00572630(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)&param_1->field_0x2b4);
  _DAT_0264c0b0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"bipp02",1);
  _DAT_0264c0b4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"bipp05",1);
  _DAT_0264c0b8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"bipp06",1);
  _DAT_0264c0bc = core_skeleton_cpp_FUN_00540e80(this_ptr,"bipp09",1);
  return;
}
