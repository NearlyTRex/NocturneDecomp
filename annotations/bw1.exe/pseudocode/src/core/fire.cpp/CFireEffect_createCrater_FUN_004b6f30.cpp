// Name: core_fire.cpp_CFireEffect_createCrater_FUN_004b6f30
// Address: 004b6f30
// Address Range: [[004b6f30, 004b6f73]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004b6f30(CFireEffect *this_ptr,CVector3f *position,float radius)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004b6f30(CFireEffect *this_ptr,CVector3f *position,float radius)

{
  core_fire_cpp_CCrater_activate_FUN_004b1fb0
            (g_CCrater_ARRAY_01cb4f60 + g_INT_01cb4f5c,position,radius);
  g_INT_01cb4f5c = g_INT_01cb4f5c + 1;
  if (g_INT_01cb4f5c < 0x14) {
    return;
  }
  g_INT_01cb4f5c = 0;
  return;
}
