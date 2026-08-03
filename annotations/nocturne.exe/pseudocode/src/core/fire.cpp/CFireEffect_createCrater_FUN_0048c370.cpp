// Name: core_fire.cpp_CFireEffect_createCrater_FUN_0048c370
// Address: 0048c370
// Address Range: [[0048c370, 0048c3b3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0048c370(CFireEffect *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0048c370(CFireEffect *this_ptr,CVector3f *position,float radius)

{
  core_fire_cpp_CCrater_activate_FUN_004876d0
            (g_CCrater_ARRAY_01c625f8 + _DAT_01c625f4,position,radius);
  _DAT_01c625f4 = _DAT_01c625f4 + 1;
  if (_DAT_01c625f4 < 0x14) {
    return;
  }
  _DAT_01c625f4 = 0;
  return;
}
