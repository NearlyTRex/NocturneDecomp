// Name: core_keyactor.cpp_CKeyActor_setup_FUN_004de890
// Address: 004de890
// Address Range: [[004de890, 004de8af]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004de890(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004de890(CKeyActor *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  return;
}
