// Name: core_health.cpp_CHealthItem_setup_FUN_004ea390
// Address: 004ea390
// Address Range: [[004ea390, 004ea3af]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_setup_FUN_004ea390(CHealthItem *this_ptr)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_setup_FUN_004ea390(CHealthItem *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  core_actor_cpp_CDemonActor_setup_FUN_00408850((CDemonActor *)this_ptr);
  return;
}
