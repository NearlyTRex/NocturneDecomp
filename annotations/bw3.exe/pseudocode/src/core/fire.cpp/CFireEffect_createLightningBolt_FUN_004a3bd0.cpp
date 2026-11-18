// Name: core_fire.cpp_CFireEffect_createLightningBolt_FUN_004a3bd0
// Address: 004a3bd0
// Address Range: [[004a3bd0, 004a3c4a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004a3bd0(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004a3bd0(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)

{
  core_fire_cpp_CLightningBolt_activate_FUN_0049f420
            (g_CLightningBolt_ARRAY_01d00eb0 + g_INT_01d00eac,start_position,start_width,end_width);
  g_INT_01d00eac = g_INT_01d00eac + 1;
  if (g_INT_01d00eac < 0x40) {
    if (enable_camera_shake == 0) {
      return;
    }
  }
  else {
    g_INT_01d00eac = 0;
    if (enable_camera_shake == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
  return;
}
