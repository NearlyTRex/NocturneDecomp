// Name: core_tentacle.cpp_CTentacle_setup_FUN_00572630
// Address: 00572630
// Address Range: [[00572630, 005726b1]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_setup_FUN_00572630(CTentacle *this_ptr)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_setup_FUN_00572630(CTentacle *this_ptr)

{
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  
  this_ptr_01 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_01);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_01);
  g_TentacleIndices[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"bipp02",1);
  g_TentacleIndices[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"bipp05",1);
  g_TentacleIndices[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"bipp06",1);
  g_TentacleIndices[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"bipp09",1);
  return;
}
