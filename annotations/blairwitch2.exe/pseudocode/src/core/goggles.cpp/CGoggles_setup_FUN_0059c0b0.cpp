// Name: core_goggles.cpp_CGoggles_setup_FUN_0059c0b0
// Address: 0059c0b0
// Address Range: [[0059c0b0, 0059c0cf]]
// Convention: __cdecl
// Signature: void __cdecl core_goggles_cpp_CGoggles_setup_FUN_0059c0b0(CGoggles *this_ptr)

#include "nocturne.h"

void __cdecl core_goggles_cpp_CGoggles_setup_FUN_0059c0b0(CGoggles *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  return;
}
