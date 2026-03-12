// Name: core_glass.cpp_CGlass_onLaserHit_FUN_004eb250
// Address: 004eb250
// Address Range: [[004eb250, 004eb385]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004eb250(CGlass *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004eb250(CGlass *this_ptr,SLaserInfo *laser_info)

{
  int local_18;
  int local_14;
  float fVar5;
  float fVar4;
  float fVar3;
  float fVar2;
  float fVar1;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840(&this_ptr->base,laser_info);
  if (this_ptr->mirror_flag == 0) {
    laser_info->reflectivity = 1.0 - (float)this_ptr->opacity * (float)1.5259021896696401e-05;
    return;
  }
  if (this_ptr->shattered == 0) {
    laser_info->transparency = 1.0;
  }
  else {
    fVar1 = (laser_info->local_hit_position).y;
    fVar2 = (this_ptr->glass_size).y;
    fVar3 = (laser_info->local_hit_position).x;
    fVar4 = (this_ptr->glass_size).x;
    fVar5 = (float)0.5;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&this_ptr->broken_texture);
    local_18 = (int)ROUND(ROUND((fVar3 / fVar4 + fVar5) * (float)g_CurrentTextureDimension));
    local_14 = (int)ROUND(ROUND((1.0 - fVar1 / fVar2) * (float)g_CurrentTextureDimension));
    if (local_18 < 0) {
      local_18 = 0;
    }
    if (g_CurrentTextureDimension <= local_18) {
      local_18 = g_CurrentTextureDimension + -1;
    }
    if (local_14 < 0) {
      local_14 = 0;
    }
    if (g_CurrentTextureDimension <= local_14) {
      local_14 = g_CurrentTextureDimension + -1;
    }
    if (*(char *)(local_18 + local_14 * g_CurrentTextureDimension + (int)g_CurrentTextureData) ==
        '\0') {
      laser_info->transparency = 1.0;
      return;
    }
  }
  return;
}
