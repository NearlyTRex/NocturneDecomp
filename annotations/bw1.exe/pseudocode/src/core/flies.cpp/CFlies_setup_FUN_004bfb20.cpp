// Name: core_flies.cpp_CFlies_setup_FUN_004bfb20
// Address: 004bfb20
// Address Range: [[004bfb20, 004bfb5c]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_setup_FUN_004bfb20(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_setup_FUN_004bfb20(CFlies *this_ptr)

{
  int fly_index;
  
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  fly_index = 0;
  if (0 < *(int *)&this_ptr->field_0x164) {
    do {
      core_flies_cpp_FUN_004c0530(this_ptr,fly_index);
      fly_index = fly_index + 1;
    } while (fly_index < *(int *)&this_ptr->field_0x164);
  }
  *(uint *)&this_ptr->field_0x2a1c = 1;
  return;
}
