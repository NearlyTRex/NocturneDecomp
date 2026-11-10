// Name: core_health.cpp_CHealthItem_setup_FUN_004d1df0
// Address: 004d1df0
// Address Range: [[004d1df0, 004d1e0f]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_setup_FUN_004d1df0(CHealthItem *this_ptr)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_setup_FUN_004d1df0(CHealthItem *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  core_actor_cpp_CDemonActor_setup_FUN_00408890((CDemonActor *)this_ptr);
  return;
}
