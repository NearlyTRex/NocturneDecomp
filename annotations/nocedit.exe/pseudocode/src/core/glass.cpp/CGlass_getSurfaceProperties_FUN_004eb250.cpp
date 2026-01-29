// Name: core_glass.cpp_CGlass_getSurfaceProperties_FUN_004eb250
// Address: 004eb250
// Address Range: [[004eb250, 004eb385]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_getSurfaceProperties_FUN_004eb250(CGlass *this_ptr,SSurfaceInfo *surface_info)

#include "nocturne.h"

void __cdecl
core_glass_cpp_CGlass_getSurfaceProperties_FUN_004eb250(CGlass *this_ptr,SSurfaceInfo *surface_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  int local_20;
  int local_1c;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(&this_ptr->base,surface_info);
  if (this_ptr->mirror_flag == 0) {
    surface_info->reflectivity = 1.0 - (float)this_ptr->opacity * (float)1.5259021896696401e-05;
    return;
  }
  if (this_ptr->shattered == 0) {
    surface_info->alpha_or_wetness = 1.0;
  }
  else {
    fVar1 = (surface_info->hit_position).y;
    fVar2 = (this_ptr->glass_size).y;
    fVar3 = (surface_info->hit_position).x;
    fVar4 = (this_ptr->glass_size).x;
    fVar5 = (float)0.5;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&this_ptr->broken_texture);
    fVar6 = (float)g_CurrentTextureDimension;
    dVar7 = round((double)((fVar3 / fVar4 + fVar5) * fVar6));
    dVar8 = round((double)((1.0 - fVar1 / fVar2) * fVar6));
    local_20 = (int)ROUND(dVar7);
    local_1c = (int)ROUND(dVar8);
    if (local_20 < 0) {
      local_20 = 0;
    }
    if (g_CurrentTextureDimension <= local_20) {
      local_20 = g_CurrentTextureDimension + -1;
    }
    if (local_1c < 0) {
      local_1c = 0;
    }
    if (g_CurrentTextureDimension <= local_1c) {
      local_1c = g_CurrentTextureDimension + -1;
    }
    if (*(char *)(local_20 + local_1c * g_CurrentTextureDimension + (int)g_CurrentTextureData) ==
        '\0') {
      surface_info->alpha_or_wetness = 1.0;
      return;
    }
  }
  return;
}
