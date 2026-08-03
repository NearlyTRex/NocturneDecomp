// Name: core_fire.cpp_CMuzzleFlash_process_FUN_00484ed0
// Address: 00484ed0
// Address Range: [[00484ed0, 00484eff]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_00484ed0(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_00484ed0(CMuzzleFlash *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->frames_remaining + -1;
  this_ptr->frames_remaining = iVar1;
  if (iVar1 < 0) {
    this_ptr->frames_remaining = 0;
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_0048aae0
            (g_CFireEffect_PTR_005b80f0,&this_ptr->position);
  return;
}
