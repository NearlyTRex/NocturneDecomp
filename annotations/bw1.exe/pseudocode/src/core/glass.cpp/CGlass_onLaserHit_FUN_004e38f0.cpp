// Name: core_glass.cpp_CGlass_onLaserHit_FUN_004e38f0
// Address: 004e38f0
// Address Range: [[004e38f0, 004e3a25]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004e38f0(CGlass *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004e38f0(CGlass *this_ptr,SLaserInfo *laser_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  int iStack_20;
  int iStack_1c;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409680(&this_ptr->base,laser_info);
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
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (g_CDemonRenderer_PTR_00612560,&this_ptr->broken_texture);
    fVar6 = (float)g_CurrentTextureDimension;
    dVar7 = round((double)((fVar3 / fVar4 + fVar5) * fVar6));
    dVar8 = round((double)((1.0 - fVar1 / fVar2) * fVar6));
    iStack_20 = (int)ROUND(dVar7);
    iStack_1c = (int)ROUND(dVar8);
    if (iStack_20 < 0) {
      iStack_20 = 0;
    }
    if (g_CurrentTextureDimension <= iStack_20) {
      iStack_20 = g_CurrentTextureDimension + -1;
    }
    if (iStack_1c < 0) {
      iStack_1c = 0;
    }
    if (g_CurrentTextureDimension <= iStack_1c) {
      iStack_1c = g_CurrentTextureDimension + -1;
    }
    if (g_CurrentTextureData[iStack_20 + iStack_1c * g_CurrentTextureDimension] == '\0') {
      laser_info->transparency = 1.0;
      return;
    }
  }
  return;
}
