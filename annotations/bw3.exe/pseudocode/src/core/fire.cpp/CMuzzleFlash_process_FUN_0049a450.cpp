// Name: core_fire.cpp_CMuzzleFlash_process_FUN_0049a450
// Address: 0049a450
// Address Range: [[0049a450, 0049a47f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_0049a450(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_0049a450(CMuzzleFlash *this_ptr)

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
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(0x01C73654,&this_ptr->position);
  return;
}
