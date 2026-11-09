// Name: core_manpuz.cpp_CMirrorHack_setup_FUN_005064a0
// Address: 005064a0
// Address Range: [[005064a0, 005064bf]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_005064a0(CMirrorHack *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_005064a0(CMirrorHack *this_ptr)

{
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  return;
}
