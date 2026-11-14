// Name: core_keyactor.cpp_CKeyActor_setup_FUN_004df1a0
// Address: 004df1a0
// Address Range: [[004df1a0, 004df1bf]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004df1a0(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004df1a0(CKeyActor *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  return;
}
