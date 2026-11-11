// Name: core_fire.cpp_CMuzzleFlash_process_FUN_004af400
// Address: 004af400
// Address Range: [[004af400, 004af42f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_004af400(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_004af400(CMuzzleFlash *this_ptr)

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
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004b5620(0x01C57074,&this_ptr->position);
  return;
}
