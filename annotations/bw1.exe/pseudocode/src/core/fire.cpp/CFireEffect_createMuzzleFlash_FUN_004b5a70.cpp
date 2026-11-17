// Name: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70
// Address: 004b5a70
// Address Range: [[004b5a70, 004b5ab9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  CMuzzleFlash *this_ptr_00;
  int iVar1;
  
  iVar1 = g_INT_01c9f1b8 + 1;
  this_ptr_00 = g_CMuzzleFlash_ARRAY_01c9f1bc + g_INT_01c9f1b8;
  g_INT_01c9f1b8 = iVar1;
  if (0x13 < iVar1) {
    g_INT_01c9f1b8 = 0;
  }
  core_fire_cpp_CMuzzleFlash_init_FUN_004af340(this_ptr_00,position,rotation_matrix);
  return;
}
