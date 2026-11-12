// Name: core_gore.cpp_CBloodSplat_render_FUN_004e49a0
// Address: 004e49a0
// Address Range: [[004e49a0, 004e4f6c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004e49a0(CBloodSplat *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004e49a0(CBloodSplat *this_ptr,int expire_flag)

{
  EBloodType EVar1;
  CVector3i *input;
  float10 fVar2;
  CVector3i local_8c;
  CVector3i local_80;
  uint local_74;
  uint local_70;
  uint local_6c;
  CVector3i local_68;
  CVector3i local_5c;
  CVector3i local_50;
  uint local_44;
  uint local_40;
  uint local_3c;
  CVector3i local_38;
  CVector3i local_2c;
  CVector3i local_20;
  int local_14;
  
  fVar2 = (float10)this_ptr->age * (float10)_DAT_005e403d + (float10)_DAT_005e4045;
  round();
  local_14 = (int)ROUND(fVar2);
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if ((0xf < local_14) && (local_14 = 0xf, expire_flag != 0)) {
    this_ptr->expired = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,&this_ptr->position);
  if (this_ptr->is_wall_splat == 1) {
    _DAT_01cd0e48 = 0;
    _DAT_01cd0e50 = 0xffff;
    _DAT_01cd0e4c = 0;
    _DAT_01cd0e54 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,
               (SMRGLTextureBasic *)
               (&DAT_0061dd2c + local_14 * 0x18 + this_ptr->texture_variant * 0x180));
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,&this_ptr->rotation,(CVector3f *)0x0);
    local_74 = 0xbf000000;
    local_70 = 0xbf000000;
    local_6c = 0;
    local_68.x = (int)ROUND(_DAT_006016a8 * -0.5);
    local_68.y = (int)ROUND(_DAT_006016a8 * -0.5);
    local_68.z = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_68);
    local_74 = 0x3f000000;
    local_6c = 0;
    local_70 = 0xbf000000;
    local_50.x = (int)ROUND(_DAT_006016a8 * 0.5);
    local_50.y = (int)ROUND(_DAT_006016a8 * -0.5);
    local_50.z = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_50);
    local_74 = 0x3f000000;
    local_6c = 0;
    local_70 = 0x3f000000;
    local_38.x = (int)ROUND(_DAT_006016a8 * 0.5);
    local_38.y = (int)ROUND(_DAT_006016a8 * 0.5);
    local_38.z = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_38);
    local_74 = 0xbf000000;
    local_6c = 0;
    local_70 = 0x3f000000;
    local_80.x = (int)ROUND(_DAT_006016a8 * -0.5);
    local_80.y = (int)ROUND(_DAT_006016a8 * 0.5);
    local_80.z = (int)ROUND(_DAT_006016a8 * 0.0);
    input = &local_80;
  }
  else {
    if (expire_flag != 0) {
      this_ptr->expired = 1;
    }
    _DAT_01cd0e4c = 0xffff;
    _DAT_01cd0e48 = 0;
    _DAT_01cd0e50 = 0;
    _DAT_01cd0e54 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)(&DAT_0061dccc + this_ptr->texture_variant * 0x18))
    ;
    local_44 = 0xbf000000;
    local_40 = 0;
    local_3c = 0xbf000000;
    local_20.x = (int)ROUND(_DAT_006016a8 * -0.5);
    local_20.y = (int)ROUND(_DAT_006016a8 * 0.0);
    local_20.z = (int)ROUND(_DAT_006016a8 * -0.5);
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_20);
    local_44 = 0x3f000000;
    local_3c = 0xbf000000;
    local_40 = 0;
    local_8c.x = (int)ROUND(_DAT_006016a8 * 0.5);
    local_8c.y = (int)ROUND(_DAT_006016a8 * 0.0);
    local_8c.z = (int)ROUND(_DAT_006016a8 * -0.5);
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_8c);
    local_44 = 0x3f000000;
    local_40 = 0;
    local_3c = 0x3f000000;
    local_5c.x = (int)ROUND(_DAT_006016a8 * 0.5);
    local_5c.y = (int)ROUND(_DAT_006016a8 * 0.0);
    local_5c.z = (int)ROUND(_DAT_006016a8 * 0.5);
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_5c);
    local_44 = 0xbf000000;
    local_3c = 0x3f000000;
    local_40 = 0;
    local_2c.x = (int)ROUND(_DAT_006016a8 * -0.5);
    local_2c.y = (int)ROUND(_DAT_006016a8 * 0.0);
    local_2c.z = (int)ROUND(_DAT_006016a8 * 0.5);
    input = &local_2c;
  }
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,input);
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e4be7:
    DAT_00629034 = 0x2000;
    DAT_00629038 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629038 = 0x7f80;
    DAT_00629034 = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e4be7;
    DAT_00629038 = 0;
    DAT_00629034 = 0;
  }
  DAT_0062903c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e4c14:
    DAT_00629064 = 0x2000;
    DAT_00629068 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629068 = 0x7f80;
    DAT_00629064 = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e4c14;
    DAT_00629068 = 0;
    DAT_00629064 = 0;
  }
  DAT_0062906c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e4c41:
    DAT_00629094 = 0x2000;
    DAT_00629098 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629098 = 0x7f80;
    DAT_00629094 = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e4c41;
    DAT_00629098 = 0;
    DAT_00629094 = 0;
  }
  DAT_0062909c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      DAT_006290c8 = 0x7f80;
      DAT_006290c4 = 0;
      goto LAB_004e4c80;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      DAT_006290c8 = 0;
      DAT_006290c4 = 0;
      goto LAB_004e4c80;
    }
  }
  DAT_006290c4 = 0x2000;
  DAT_006290c8 = 0;
LAB_004e4c80:
  DAT_006290cc = 0;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1cd0e40);
  if (this_ptr->is_wall_splat == 1) {
    engine_drender_cpp_pop_FUN_004839a0();
    return;
  }
  return;
}
