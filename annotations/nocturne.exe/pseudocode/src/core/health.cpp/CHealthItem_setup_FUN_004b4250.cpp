// Name: core_health.cpp_CHealthItem_setup_FUN_004b4250
// Address: 004b4250
// Address Range: [[004b4250, 004b426f]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_setup_FUN_004b4250(CHealthItem *this_ptr)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_setup_FUN_004b4250(CHealthItem *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  return;
}
