// Name: core_fire.cpp_CFireEffect_createMuzzleEffect_FUN_0049d170
// Address: 0049d170
// Address Range: [[0049d170, 0049d1b9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleEffect_FUN_0049d170(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createMuzzleEffect_FUN_0049d170(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  CMuzzleEffect *this_ptr_00;
  int iVar1;
  
  iVar1 = g_INT_01c8672c + 1;
  this_ptr_00 = (CMuzzleEffect *)(g_CMuzzleFlash_ARRAY_01c86730 + g_INT_01c8672c);
  g_INT_01c8672c = iVar1;
  if (0x13 < iVar1) {
    g_INT_01c8672c = 0;
  }
  core_muzzle_cpp_CMuzzleEffect_init_FUN_0059d360(this_ptr_00,position,rotation_matrix);
  return;
}
