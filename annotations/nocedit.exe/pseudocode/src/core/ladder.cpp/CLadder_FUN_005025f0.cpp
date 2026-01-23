// Name: core_ladder.cpp_CLadder_FUN_005025f0
// Address: 005025f0
// Address Range: [[005025f0, 005025f9]]
// Convention: __cdecl
// Signature: void core_ladder.cpp_CLadder_FUN_005025f0(CLadder * this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_FUN_005025f0(CLadder *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)&this_ptr->model);
  return;
}
