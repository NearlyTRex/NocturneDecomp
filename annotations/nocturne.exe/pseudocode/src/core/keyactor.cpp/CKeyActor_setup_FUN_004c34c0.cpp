// Name: core_keyactor.cpp_CKeyActor_setup_FUN_004c34c0
// Address: 004c34c0
// Address Range: [[004c34c0, 004c34df]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004c34c0(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004c34c0(CKeyActor *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  return;
}
