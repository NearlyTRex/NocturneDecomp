// Name: core_gore.cpp_CBloodPool_render_FUN_004e5180
// Address: 004e5180
// Address Range: [[004e5180, 004e553e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_render_FUN_004e5180(CBloodPool *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodPool_render_FUN_004e5180(CBloodPool *this_ptr,int expire_flag)

{
  EBloodType EVar1;
  float10 fVar2;
  CVector3i local_50;
  CVector3i local_44;
  uint local_38;
  uint local_34;
  uint local_30;
  CVector3i local_2c;
  CVector3i local_20;
  int local_14;
  
  fVar2 = (float10)this_ptr->age * (float10)_DAT_005e40bd;
  round();
  local_14 = (int)ROUND(fVar2);
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if ((0x1c < local_14) && (local_14 = 0x1c, expire_flag != 0)) {
    this_ptr->expired = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,
             (SMRGLTextureBasic *)
             (&DAT_0061e32c + local_14 * 0x18 + this_ptr->texture_variant * 0x2b8));
  local_38 = 0xbfaa9fbe;
  local_30 = 0xbfaa9fbe;
  local_34 = 0;
  local_20.x = (int)ROUND(_DAT_006016a8 * -1.333);
  local_20.y = (int)ROUND(_DAT_006016a8 * 0.0);
  local_20.z = (int)ROUND(_DAT_006016a8 * -1.333);
  engine_special_cpp_FUN_00580173((SProjectedVertex *)DAT_00612560->vertex_buffer_ptr,&local_20);
  local_38 = 0x3faa9fbe;
  local_34 = 0;
  local_30 = 0xbfaa9fbe;
  local_44.x = (int)ROUND(_DAT_006016a8 * 1.333);
  local_44.y = (int)ROUND(_DAT_006016a8 * 0.0);
  local_44.z = (int)ROUND(_DAT_006016a8 * -1.333);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x30),&local_44);
  local_38 = 0x3faa9fbe;
  local_30 = 0x3faa9fbe;
  local_34 = 0;
  local_2c.x = (int)ROUND(_DAT_006016a8 * 1.333);
  local_2c.y = (int)ROUND(_DAT_006016a8 * 0.0);
  local_2c.z = (int)ROUND(_DAT_006016a8 * 1.333);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x60),&local_2c);
  local_38 = 0xbfaa9fbe;
  local_34 = 0;
  local_30 = 0x3faa9fbe;
  local_50.x = (int)ROUND(_DAT_006016a8 * -1.333);
  local_50.y = (int)ROUND(_DAT_006016a8 * 0.0);
  local_50.z = (int)ROUND(_DAT_006016a8 * 1.333);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x90),&local_50);
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e5379:
    DAT_00629034 = 0x2000;
    DAT_00629038 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629034 = 0;
    DAT_00629038 = 0x7f80;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e5379;
    DAT_00629038 = 0;
    DAT_00629034 = 0;
  }
  DAT_0062903c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e53a6:
    DAT_00629064 = 0x2000;
    DAT_00629068 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629068 = 0x7f80;
    DAT_00629064 = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e53a6;
    DAT_00629068 = 0;
    DAT_00629064 = 0;
  }
  DAT_0062906c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e53d3:
    DAT_00629094 = 0x2000;
    DAT_00629098 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629098 = 0x7f80;
    DAT_00629094 = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e53d3;
    DAT_00629098 = 0;
    DAT_00629094 = 0;
  }
  DAT_0062909c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      DAT_006290c8 = 0x7f80;
      DAT_006290c4 = 0;
      goto LAB_004e5423;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      DAT_006290c8 = 0;
      DAT_006290c4 = 0;
      goto LAB_004e5423;
    }
  }
  DAT_006290c4 = 0x2000;
  DAT_006290c8 = 0;
LAB_004e5423:
  DAT_006290cc = 0;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1cd0e40);
  return;
}
