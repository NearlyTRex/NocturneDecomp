// Name: core_keyactor.cpp_CKeyActor_setup_FUN_004de890
// Address: 004de890
// Address Range: [[004de890, 004de8af]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004de890(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004de890(CKeyActor *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  core_actor_cpp_FUN_00408890((CDemonActor *)this_ptr);
  return;
}
