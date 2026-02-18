// Name: core_fire.cpp_CFireEffect_createLightningBolt_FUN_004c8f50
// Address: 004c8f50
// Address Range: [[004c8f50, 004c8fcf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004c8f50(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004c8f50(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

{
  core_fire_cpp_CLightningBolt_activate_FUN_004c5640
            (g_LightningBoltPool + g_LightningBoltAllocIndex,start_position,start_width,end_width);
  g_LightningBoltAllocIndex = g_LightningBoltAllocIndex + 1;
  if (g_LightningBoltAllocIndex < 10) {
    if (enable_camera_shake == 0) {
      return;
    }
  }
  else {
    g_LightningBoltAllocIndex = 0;
    if (enable_camera_shake == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_initCameraShake_FUN_00570fa0(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
  return;
}
