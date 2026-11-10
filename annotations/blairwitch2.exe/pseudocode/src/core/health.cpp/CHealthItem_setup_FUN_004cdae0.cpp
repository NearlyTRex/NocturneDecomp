// Name: core_health.cpp_CHealthItem_setup_FUN_004cdae0
// Address: 004cdae0
// Address Range: [[004cdae0, 004cdaff]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_setup_FUN_004cdae0(CHealthItem *this_ptr)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_setup_FUN_004cdae0(CHealthItem *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  return;
}
