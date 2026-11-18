// Name: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
// Address: 004a3c50
// Address Range: [[004a3c50, 004a3ce2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread,int mode,float lifetime,int render_alpha)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread,int mode,float lifetime,int render_alpha)

{
  core_fire_cpp_CLightningBolt_activateDirectional_FUN_0049f470
            (g_CLightningBolt_ARRAY_01d00eb0 + g_INT_01d00eac,start_position,end_position,end_width,
             end_spread,mode,lifetime,render_alpha);
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
