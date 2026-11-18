// Name: core_fire.cpp_CFireEffect_createLightningBolt_FUN_004b6fe0
// Address: 004b6fe0
// Address Range: [[004b6fe0, 004b705f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004b6fe0(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004b6fe0(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

{
  core_fire_cpp_CLightningBolt_activate_FUN_004b3490
            (g_CLightningBolt_ARRAY_01cb9e78 + g_INT_01cb9e74,start_position,start_width,end_width);
  g_INT_01cb9e74 = g_INT_01cb9e74 + 1;
  if (g_INT_01cb9e74 < 10) {
    if (enable_camera_shake == 0) {
      return;
    }
  }
  else {
    g_INT_01cb9e74 = 0;
    if (enable_camera_shake == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_initCameraShake_FUN_00555ab0(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
  return;
}
