// Name: core_keyactor.cpp_CKeyActor_setup_FUN_004fc570
// Address: 004fc570
// Address Range: [[004fc570, 004fc58f]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004fc570(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004fc570(CKeyActor *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  return;
}
