// Name: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
// Address: 004a2450
// Address Range: [[004a2450, 004a2499]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  int iVar1;
  
  iVar1 = _DAT_01cbb9b8 * 0x5c;
  _DAT_01cbb9b8 = _DAT_01cbb9b8 + 1;
  if (0x13 < _DAT_01cbb9b8) {
    _DAT_01cbb9b8 = 0;
  }
  core_fire_cpp_CMuzzleFlash_init_FUN_0049a390
            ((CMuzzleFlash *)(&DAT_01cbb9bc + iVar1),position,rotation_matrix);
  return;
}
