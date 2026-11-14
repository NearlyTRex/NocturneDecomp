// Name: core_muzzle.cpp_CMuzzleEffect_process_FUN_0059d420
// Address: 0059d420
// Address Range: [[0059d420, 0059d434]]
// Convention: __cdecl
// Signature: void __cdecl core_muzzle_cpp_CMuzzleEffect_process_FUN_0059d420(CMuzzleEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_muzzle_cpp_CMuzzleEffect_process_FUN_0059d420(CMuzzleEffect *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->frames_remaining + -1;
  this_ptr->frames_remaining = iVar1;
  if (-1 < iVar1) {
    return;
  }
  this_ptr->frames_remaining = 0;
  return;
}
