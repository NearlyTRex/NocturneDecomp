// Name: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0049d120
// Address: 0049d120
// Address Range: [[0049d120, 0049d169]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0049d120(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0049d120(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  CMuzzleFlash *this_ptr_00;
  int iVar1;
  
  iVar1 = g_INT_01c85ff8 + 1;
  this_ptr_00 = &g_CMuzzleFlash_01c85ffc + g_INT_01c85ff8;
  g_INT_01c85ff8 = iVar1;
  if (0x13 < iVar1) {
    g_INT_01c85ff8 = 0;
  }
  core_fire_cpp_CMuzzleFlash_init_FUN_004969a0(this_ptr_00,position,rotation_matrix);
  return;
}
