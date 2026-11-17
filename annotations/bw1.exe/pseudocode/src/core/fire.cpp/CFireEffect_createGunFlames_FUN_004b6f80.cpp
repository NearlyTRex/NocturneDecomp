// Name: core_fire.cpp_CFireEffect_createGunFlames_FUN_004b6f80
// Address: 004b6f80
// Address Range: [[004b6f80, 004b6fd8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)

{
  for (; 0 < flame_count; flame_count = flame_count + -1) {
    core_fire_cpp_CGunFlame_activate_FUN_004b2b50
              (g_CGunFlame_ARRAY_01cb5824 + g_INT_01cb5820,position,euler_angles,flame_type);
    g_INT_01cb5820 = g_INT_01cb5820 + 1;
    if (499 < g_INT_01cb5820) {
      g_INT_01cb5820 = 0;
    }
  }
  return;
}
