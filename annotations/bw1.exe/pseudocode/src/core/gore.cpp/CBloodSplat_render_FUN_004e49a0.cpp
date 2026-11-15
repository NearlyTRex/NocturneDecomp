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
  double dVar2;
  CVector3i CStack_90;
  CVector3i local_84;
  uint local_78;
  uint local_74;
  uint local_70;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3i local_24;
  int local_18;
  
  CStack_90.x = 0x4e49c9;
  dVar2 = round
                    ((double)(this_ptr->age * (float)_DAT_005e403d + (float)_DAT_005e4045));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if ((0xf < local_18) && (local_18 = 0xf, expire_flag != 0)) {
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
               (&DAT_0061dd2c + local_18 * 0x18 + this_ptr->texture_variant * 0x180));
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,&this_ptr->rotation,(CVector3f *)0x0);
    local_78 = 0xbf000000;
    local_74 = 0xbf000000;
    local_70 = 0;
    local_6c.x = (int)ROUND(_DAT_006016a8 * -0.5);
    local_6c.y = (int)ROUND(_DAT_006016a8 * -0.5);
    local_6c.z = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_6c);
    local_78 = 0x3f000000;
    local_70 = 0;
    local_74 = 0xbf000000;
    local_54.x = (int)ROUND(_DAT_006016a8 * 0.5);
    local_54.y = (int)ROUND(_DAT_006016a8 * -0.5);
    local_54.z = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_54);
    local_78 = 0x3f000000;
    local_70 = 0;
    local_74 = 0x3f000000;
    local_3c.x = (int)ROUND(_DAT_006016a8 * 0.5);
    local_3c.y = (int)ROUND(_DAT_006016a8 * 0.5);
    local_3c.z = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_78 = 0xbf000000;
    local_70 = 0;
    local_74 = 0x3f000000;
    local_84.x = (int)ROUND(_DAT_006016a8 * -0.5);
    local_84.y = (int)ROUND(_DAT_006016a8 * 0.5);
    local_84.z = (int)ROUND(_DAT_006016a8 * 0.0);
    input = &local_84;
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
    local_48 = 0xbf000000;
    local_44 = 0;
    local_40 = 0xbf000000;
    local_24.x = (int)ROUND(_DAT_006016a8 * -0.5);
    local_24.y = (int)ROUND(_DAT_006016a8 * 0.0);
    local_24.z = (int)ROUND(_DAT_006016a8 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_24);
    local_48 = 0x3f000000;
    local_40 = 0xbf000000;
    local_44 = 0;
    CStack_90.x = (int)ROUND(_DAT_006016a8 * 0.5);
    CStack_90.y = (int)ROUND(_DAT_006016a8 * 0.0);
    CStack_90.z = (int)ROUND(_DAT_006016a8 * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_90);
    local_48 = 0x3f000000;
    local_44 = 0;
    local_40 = 0x3f000000;
    local_60.x = (int)ROUND(_DAT_006016a8 * 0.5);
    local_60.y = (int)ROUND(_DAT_006016a8 * 0.0);
    local_60.z = (int)ROUND(_DAT_006016a8 * 0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_60);
    local_48 = 0xbf000000;
    local_40 = 0x3f000000;
    local_44 = 0;
    local_30.x = (int)ROUND(_DAT_006016a8 * -0.5);
    local_30.y = (int)ROUND(_DAT_006016a8 * 0.0);
    local_30.z = (int)ROUND(_DAT_006016a8 * 0.5);
    input = &local_30;
  }
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,input);
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
