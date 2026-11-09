// Name: core_anvil.cpp_CAnvil_setup_FUN_0040e660
// Address: 0040e660
// Address Range: [[0040e660, 0040e67f]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_setup_FUN_0040e660(CAnvil *this_ptr)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_setup_FUN_0040e660(CAnvil *this_ptr)

{
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  return;
}
