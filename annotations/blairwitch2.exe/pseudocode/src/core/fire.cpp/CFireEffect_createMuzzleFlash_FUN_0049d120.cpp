// Name: core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0049d120
// Address: 0049d120
// Address Range: [[0049d120, 0049d169]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0049d120(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createMuzzleFlash_FUN_0049d120(CFireEffect *this_ptr,CVector3f *position,CMatrix3x3f *rotation_matrix)

{
  int iVar1;
  
  iVar1 = _DAT_01c85ff8 * 0x5c;
  _DAT_01c85ff8 = _DAT_01c85ff8 + 1;
  if (0x13 < _DAT_01c85ff8) {
    _DAT_01c85ff8 = 0;
  }
  core_fire_cpp_CMuzzleFlash_init_FUN_004969a0
            ((CMuzzleFlash *)(&DAT_01c85ffc + iVar1),position,rotation_matrix);
  return;
}
