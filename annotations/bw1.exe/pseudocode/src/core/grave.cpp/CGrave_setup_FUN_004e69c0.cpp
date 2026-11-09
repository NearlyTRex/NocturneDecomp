// Name: core_grave.cpp_CGrave_setup_FUN_004e69c0
// Address: 004e69c0
// Address Range: [[004e69c0, 004e69df]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_setup_FUN_004e69c0(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_setup_FUN_004e69c0(CGrave *this_ptr)

{
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  return;
}
