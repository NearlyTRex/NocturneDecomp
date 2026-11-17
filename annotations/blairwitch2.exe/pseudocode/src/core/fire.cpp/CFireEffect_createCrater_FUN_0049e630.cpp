// Name: core_fire.cpp_CFireEffect_createCrater_FUN_0049e630
// Address: 0049e630
// Address Range: [[0049e630, 0049e673]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0049e630(CFireEffect *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_0049e630(CFireEffect *this_ptr,CVector3f *position,float radius)

{
  core_fire_cpp_CCrater_activate_FUN_00499610
            (g_CCrater_ARRAY_01c9c4d4 + g_INT_01c9c4d0,position,radius);
  g_INT_01c9c4d0 = g_INT_01c9c4d0 + 1;
  if (g_INT_01c9c4d0 < 0x14) {
    return;
  }
  g_INT_01c9c4d0 = 0;
  return;
}
