// Name: core_ladder.cpp_CLadder_setup_FUN_004fd3e0
// Address: 004fd3e0
// Address Range: [[004fd3e0, 004fd3ff]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_setup_FUN_004fd3e0(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_setup_FUN_004fd3e0(CLadder *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  return;
}
