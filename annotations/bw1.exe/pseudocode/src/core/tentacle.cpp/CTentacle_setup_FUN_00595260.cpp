// Name: core_tentacle.cpp_CTentacle_setup_FUN_00595260
// Address: 00595260
// Address Range: [[00595260, 005952e1]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_setup_FUN_00595260(CTentacle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tentacle_cpp_CTentacle_setup_FUN_00595260(CTentacle *this_ptr)

{
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  
  this_ptr_01 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_01);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_01);
  _DAT_02c83880 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"bipp02",1)
  ;
  _DAT_02c83884 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"bipp05",1)
  ;
  _DAT_02c83888 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"bipp06",1)
  ;
  _DAT_02c8388c = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"bipp09",1)
  ;
  return;
}
