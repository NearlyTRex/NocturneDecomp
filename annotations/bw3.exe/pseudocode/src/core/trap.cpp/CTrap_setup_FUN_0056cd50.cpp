// Name: core_trap.cpp_CTrap_setup_FUN_0056cd50
// Address: 0056cd50
// Address Range: [[0056cd50, 0056cd78]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_setup_FUN_0056cd50(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_setup_FUN_0056cd50(CTrap *this_ptr)

{
  core_actor_cpp_FUN_00408890((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  *(uint *)&this_ptr->field_0x2d4 = 0;
  return;
}
