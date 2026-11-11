// Name: core_goggles.cpp_CGoggles_setup_FUN_004e3b80
// Address: 004e3b80
// Address Range: [[004e3b80, 004e3b9f]]
// Convention: __cdecl
// Signature: void __cdecl core_goggles_cpp_CGoggles_setup_FUN_004e3b80(CGoggles *this_ptr)

#include "nocturne.h"

void __cdecl core_goggles_cpp_CGoggles_setup_FUN_004e3b80(CGoggles *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  return;
}
