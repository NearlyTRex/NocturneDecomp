// Name: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004c8fd0
// Address: 004c8fd0
// Address Range: [[004c8fd0, 004c9053]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004c8fd0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004c8fd0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread)

{
  core_fire_cpp_CLightningBolt_activateDirectional_FUN_004c5680
            (g_LightningBoltPool + g_LightningBoltAllocIndex,start_position,end_position,end_width,
             end_spread);
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
