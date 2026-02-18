// Name: core_fire.cpp_CFireEffect_createGunFlames_FUN_004c8ef0
// Address: 004c8ef0
// Address Range: [[004c8ef0, 004c8f48]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_004c8ef0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createGunFlames_FUN_004c8ef0(CFireEffect *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_count,int flame_type)

{
  for (; 0 < flame_count; flame_count = flame_count + -1) {
    core_fire_cpp_CGunFlame_activate_FUN_004c4db0
              (g_GunFlamePool + g_GunFlameAllocIndex,position,euler_angles,flame_type);
    g_GunFlameAllocIndex = g_GunFlameAllocIndex + 1;
    if (499 < g_GunFlameAllocIndex) {
      g_GunFlameAllocIndex = 0;
    }
  }
  return;
}
