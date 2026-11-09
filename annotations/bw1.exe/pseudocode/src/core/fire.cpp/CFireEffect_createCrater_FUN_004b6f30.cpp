// Name: core_fire.cpp_CFireEffect_createCrater_FUN_004b6f30
// Address: 004b6f30
// Address Range: [[004b6f30, 004b6f73]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004b6f30(CFireEffect *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004b6f30(CFireEffect *this_ptr,CVector3f *position,float radius)

{
  core_fire_cpp_FUN_004b1fb0(_DAT_01cb4f5c * 0x70 + 0x1cb4f60,position,radius);
  _DAT_01cb4f5c = _DAT_01cb4f5c + 1;
  if (_DAT_01cb4f5c < 0x14) {
    return;
  }
  _DAT_01cb4f5c = 0;
  return;
}
