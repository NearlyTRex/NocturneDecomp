// Name: core_grave.cpp_CGrave_setup_FUN_004ca1b0
// Address: 004ca1b0
// Address Range: [[004ca1b0, 004ca1cf]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_setup_FUN_004ca1b0(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_setup_FUN_004ca1b0(CGrave *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  return;
}
