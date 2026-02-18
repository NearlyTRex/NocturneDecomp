// Name: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
// Address: 004c7a60
// Address Range: [[004c7a60, 004c7aa9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60(CFireEffect *this_ptr)

{
  CMuzzleFlash *this_ptr_00;
  int iVar1;
  CVector3f *in_stack_00000008;
  CMatrix3x3f *in_stack_0000000c;
  
  iVar1 = g_MuzzleFlashAllocIndex + 1;
  this_ptr_00 = g_MuzzleFlashPool + g_MuzzleFlashAllocIndex;
  g_MuzzleFlashAllocIndex = iVar1;
  if (0x13 < iVar1) {
    g_MuzzleFlashAllocIndex = 0;
  }
  core_fire_cpp_CMuzzleFlash_init_FUN_004c1940(this_ptr_00,in_stack_00000008,in_stack_0000000c);
  return;
}
