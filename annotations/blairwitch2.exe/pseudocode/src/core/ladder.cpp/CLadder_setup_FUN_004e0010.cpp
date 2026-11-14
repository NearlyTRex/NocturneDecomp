// Name: core_ladder.cpp_CLadder_setup_FUN_004e0010
// Address: 004e0010
// Address Range: [[004e0010, 004e002f]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_setup_FUN_004e0010(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_setup_FUN_004e0010(CLadder *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  return;
}
