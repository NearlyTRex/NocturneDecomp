// Name: core_keyactor.cpp_CKeyActor_setup_FUN_004fc570
// Address: 004fc570
// Address Range: [[004fc570, 004fc58f]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004fc570(CKeyActor *this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004fc570(CKeyActor *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  return;
}
