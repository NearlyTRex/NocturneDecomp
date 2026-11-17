// Name: core_fire.cpp_CFireEffect_createGunFlames_FUN_0049e680
// Address: 0049e680
// Address Range: [[0049e680, 0049e6d8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)

{
  for (; 0 < flame_count; flame_count = flame_count + -1) {
    core_fire_cpp_CGunFlame_activate_FUN_0049a1b0
              (g_CGunFlame_ARRAY_01c9cd98 + g_INT_01c9cd94,position,euler_angles,flame_type);
    g_INT_01c9cd94 = g_INT_01c9cd94 + 1;
    if (499 < g_INT_01c9cd94) {
      g_INT_01c9cd94 = 0;
    }
  }
  return;
}
