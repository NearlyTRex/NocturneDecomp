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
  uint extraout_EAX;
  uint extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  double value;
  float local_14;
  int iVar5;
  int iVar6;
  
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
    fVar3 = (float10)(1.0 - fVar1 / fVar2) * (float10)g_CurrentTextureDimension;
    fVar4 = (float10)local_14 * (float10)g_CurrentTextureDimension;
    value = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
    crt_math_c_round_FUN_005fe6b0(value);
    iVar5 = (int)ROUND(fVar3);
    iVar6 = (int)ROUND(fVar4);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (g_CurrentTextureDimension <= iVar5) {
      iVar5 = g_CurrentTextureDimension + -1;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    if (g_CurrentTextureDimension <= iVar6) {
      iVar6 = g_CurrentTextureDimension + -1;
    }
    if (*(char *)(iVar5 + iVar6 * g_CurrentTextureDimension + (int)g_CurrentTextureData) == '\0') {
      surface_info->alpha_or_wetness = 1.0;
      return;
    }
  }
  return;
}
