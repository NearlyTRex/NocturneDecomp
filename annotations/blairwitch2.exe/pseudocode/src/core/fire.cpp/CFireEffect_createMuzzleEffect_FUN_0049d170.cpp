// Name: core_fire.cpp_CFireEffect_createMuzzleEffect_FUN_0049d170
// Address: 0049d170
// Address Range: [[0049d170, 0049d1b9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleEffect_FUN_0049d170(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createMuzzleEffect_FUN_0049d170(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  int iVar1;
  
  iVar1 = _DAT_01c8672c * 0x5c;
  _DAT_01c8672c = _DAT_01c8672c + 1;
  if (0x13 < _DAT_01c8672c) {
    _DAT_01c8672c = 0;
  }
  core_muzzle_cpp_CMuzzleEffect_init_FUN_0059d360
            ((CMuzzleEffect *)(&DAT_01c86730 + iVar1),position,rotation_matrix);
  return;
}
