// Name: core_fire.cpp_CFireEffect_createCrater_FUN_0049e630
// Address: 0049e630
// Address Range: [[0049e630, 0049e673]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0049e630(CFireEffect *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0049e630(CFireEffect *this_ptr,CVector3f *position,float radius)

{
  core_fire_cpp_FUN_00499610(_DAT_01c9c4d0 * 0x70 + 0x1c9c4d4,position,radius);
  _DAT_01c9c4d0 = _DAT_01c9c4d0 + 1;
  if (_DAT_01c9c4d0 < 0x14) {
    return;
  }
  _DAT_01c9c4d0 = 0;
  return;
}
