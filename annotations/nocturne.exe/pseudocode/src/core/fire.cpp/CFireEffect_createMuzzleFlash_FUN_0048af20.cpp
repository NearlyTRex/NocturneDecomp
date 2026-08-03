// Name: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
// Address: 0048af20
// Address Range: [[0048af20, 0048af69]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  CMuzzleFlash *this_ptr_00;
  int iVar1;
  
  iVar1 = _DAT_01c4e954 + 1;
  this_ptr_00 = g_CMuzzleFlash_ARRAY_01c4e958 + _DAT_01c4e954;
  _DAT_01c4e954 = iVar1;
  if (0x13 < iVar1) {
    _DAT_01c4e954 = 0;
  }
  core_fire_cpp_CMuzzleFlash_init_FUN_00484e10(this_ptr_00,position,rotation_matrix);
  return;
}
