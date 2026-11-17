// Name: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
// Address: 004a2450
// Address Range: [[004a2450, 004a2499]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  CMuzzleFlash *this_ptr_00;
  int iVar1;
  
  iVar1 = g_MuzzleFlashAllocIndex + 1;
  this_ptr_00 = g_MuzzleFlashPool + g_MuzzleFlashAllocIndex;
  g_MuzzleFlashAllocIndex = iVar1;
  if (0x13 < iVar1) {
    g_MuzzleFlashAllocIndex = 0;
  }
  core_fire_cpp_CMuzzleFlash_init_FUN_0049a390(this_ptr_00,position,rotation_matrix);
  return;
}
