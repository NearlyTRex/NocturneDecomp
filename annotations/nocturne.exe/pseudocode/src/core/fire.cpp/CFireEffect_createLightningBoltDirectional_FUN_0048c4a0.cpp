// Name: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0
// Address: 0048c4a0
// Address Range: [[0048c4a0, 0048c523]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0048c4a0(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread)

{
  core_fire_cpp_CLightningBolt_activateDirectional_FUN_00488b50
            (g_CLightningBolt_ARRAY_01c67510 + g_INT_01c6750c,start_position,end_position,end_width,
             end_spread);
  g_INT_01c6750c = g_INT_01c6750c + 1;
  if (g_INT_01c6750c < 10) {
    if (enable_camera_shake == 0) {
      return;
    }
  }
  else {
    g_INT_01c6750c = 0;
    if (enable_camera_shake == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_initCameraShake_FUN_0050e660(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
  return;
}
