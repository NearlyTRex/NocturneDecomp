// Name: core_ladder.cpp_CLadder_setup_FUN_004df700
// Address: 004df700
// Address Range: [[004df700, 004df71f]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_setup_FUN_004df700(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_setup_FUN_004df700(CLadder *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  return;
}
