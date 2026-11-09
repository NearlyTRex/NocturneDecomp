// Name: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70
// Address: 004b5a70
// Address Range: [[004b5a70, 004b5ab9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  int iVar1;
  
  iVar1 = _DAT_01c9f1b8 * 0x5c;
  _DAT_01c9f1b8 = _DAT_01c9f1b8 + 1;
  if (0x13 < _DAT_01c9f1b8) {
    _DAT_01c9f1b8 = 0;
  }
  core_fire_cpp_FUN_004af340((CMuzzleFlash *)(&DAT_01c9f1bc + iVar1),position,rotation_matrix);
  return;
}
