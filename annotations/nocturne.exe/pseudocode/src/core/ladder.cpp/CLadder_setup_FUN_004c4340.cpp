// Name: core_ladder.cpp_CLadder_setup_FUN_004c4340
// Address: 004c4340
// Address Range: [[004c4340, 004c435f]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_setup_FUN_004c4340(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_setup_FUN_004c4340(CLadder *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  return;
}
