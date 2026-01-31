// Name: core_health.cpp_CHealthItem_setup_FUN_004f1e30
// Address: 004f1e30
// Address Range: [[004f1e30, 004f1e4b]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_setup_FUN_004f1e30(CHealthItem *this_ptr)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_setup_FUN_004f1e30(CHealthItem *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  return;
}
