// Name: core_fire.cpp_CFireEffect_createLaserPath_FUN_004c7f80
// Address: 004c7f80
// Address Range: [[004c7f80, 004c81e9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_004c7f80(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_004c7f80(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *velocity,float beam_width ,float reticle_intensity,CVector3f *reflection_normal,float total_time,int red,int green,int blue)

{
  float fVar1;
  float local_84;
  float local_80;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  float cone_angle;
  
  local_80 = total_time;
  cone_angle = total_time * 0.05f;
  if (cone_angle < (float)0.050000000000000003) {
    cone_angle = 0.05;
  }
  local_70.x = start_position->x;
  local_70.y = start_position->y;
  local_70.z = start_position->z;
  local_28 = velocity->x;
  local_24 = velocity->y;
  local_20 = velocity->z;
  while( true ) {
    local_84 = local_80;
    if (cone_angle < local_80) {
      local_84 = cone_angle;
    }
    fVar1 = local_84 * (float)0.5 * local_84;
    local_80 = local_80 - local_84;
    local_40.x = local_70.x + local_28 * local_84 + fVar1 * 0.0;
    local_40.y = local_70.y + local_24 * local_84 + fVar1 * -32.0;
    local_40.z = local_70.z + local_20 * local_84 + fVar1 * 0.0;
    if (local_80 <= 0.0) break;
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_004c7eb0
              (this_ptr,&local_70,&local_40,beam_width,0.0,reflection_normal,red,green,blue,
               0.02f,cone_angle);
    if (&local_70 != &local_40) {
      local_70.x = local_40.x;
      local_70.y = local_40.y;
      local_70.z = local_40.z;
    }
    local_28 = local_28 + local_84 * 0.0;
    local_24 = local_24 + local_84 * -32.0;
    local_20 = local_20 + local_84 * 0.0;
  }
  core_fire_cpp_CFireEffect_createLaserSegment_FUN_004c7eb0
            (this_ptr,&local_70,&local_40,beam_width,reticle_intensity,reflection_normal,red,green,
             blue,0.02f,cone_angle);
  return;
}
