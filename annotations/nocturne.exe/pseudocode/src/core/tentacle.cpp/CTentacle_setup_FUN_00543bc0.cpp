// Name: core_tentacle.cpp_CTentacle_setup_FUN_00543bc0
// Address: 00543bc0
// Address Range: [[00543bc0, 00543c41]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_setup_FUN_00543bc0(CTentacle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tentacle_cpp_CTentacle_setup_FUN_00543bc0(CTentacle *this_ptr)

{
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  
  this_ptr_01 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_01);
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_01);
  _DAT_02dca1d0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"bipp02",1)
  ;
  _DAT_02dca1d4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"bipp05",1)
  ;
  _DAT_02dca1d8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"bipp06",1)
  ;
  _DAT_02dca1dc = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"bipp09",1)
  ;
  return;
}
