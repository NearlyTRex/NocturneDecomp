// Name: core_glass.cpp_CGlass_getSurfaceProperties_FUN_004eb250
// Address: 004eb250
// Address Range: [[004eb250, 004eb385]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_getSurfaceProperties_FUN_004eb250(CGlass * this_ptr, SSurfaceInfo * surface_info)

#include "nocturne.h"

void __cdecl
core_glass_cpp_CGlass_getSurfaceProperties_FUN_004eb250(CGlass *this_ptr,SSurfaceInfo *surface_info)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  int local_18;
  float local_14;
  
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
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&this_ptr->broken_texture);
    fVar4 = (float10)local_14 * (float10)g_CurrentTextureDimension;
    dVar5 = crt_math_c_round_FUN_005fe6b0
                      ((double)((float10)(1.0 - fVar1 / fVar2) * (float10)g_CurrentTextureDimension)
                      );
    fVar3 = (float10)dVar5;
    dVar5 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
    local_18 = (int)ROUND(fVar3);
    local_14 = (float)(int)ROUND(dVar5);
    if (local_18 < 0) {
      local_18 = 0;
    }
    if (g_CurrentTextureDimension <= local_18) {
      local_18 = g_CurrentTextureDimension + -1;
    }
    if ((int)local_14 < 0) {
      local_14 = 0.0;
    }
    if (g_CurrentTextureDimension <= (int)local_14) {
      local_14 = (float)(g_CurrentTextureDimension + -1);
    }
    if (*(char *)(local_18 + (int)local_14 * g_CurrentTextureDimension + (int)g_CurrentTextureData)
        == '\0') {
      surface_info->alpha_or_wetness = 1.0;
      return;
    }
  }
  return;
}
