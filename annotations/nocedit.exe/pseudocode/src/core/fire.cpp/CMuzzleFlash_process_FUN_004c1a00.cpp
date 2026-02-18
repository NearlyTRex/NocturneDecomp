// Name: core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00
// Address: 004c1a00
// Address Range: [[004c1a00, 004c1a2f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_004c1a00(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_004c1a00(CMuzzleFlash *this_ptr)

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
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004c7620(g_CFireEffectPtr,&this_ptr->position);
  return;
}
