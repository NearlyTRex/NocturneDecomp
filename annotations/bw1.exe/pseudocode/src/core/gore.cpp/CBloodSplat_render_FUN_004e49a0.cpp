// Name: core_gore.cpp_CBloodSplat_render_FUN_004e49a0
// Address: 004e49a0
// Address Range: [[004e49a0, 004e4f6c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004e49a0(CBloodSplat *this_ptr,int expire_flag)

#include "nocturne.h"

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
                    ((double)(this_ptr->age * (float)8 + (float)4));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if ((0xf < local_18) && (local_18 = 0xf, expire_flag != 0)) {
    this_ptr->expired = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (g_CDemonRenderer_PTR_00612560,&this_ptr->position);
  if (this_ptr->is_wall_splat == 1) {
    g_GoreQuadPrimitive.base.surface_normal.A.i = 0;
    g_GoreQuadPrimitive.base.surface_normal.C.i = 0xffff;
    g_GoreQuadPrimitive.base.surface_normal.B.i = 0;
    g_GoreQuadPrimitive.base.surface_normal.D.i = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (g_CDemonRenderer_PTR_00612560,
               g_BloodSplatAnimTextures + this_ptr->texture_variant * 0x10 + local_18);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (g_CDemonRenderer_PTR_00612560,&this_ptr->rotation,(CVector3f *)0x0);
    local_78 = 0xbf000000;
    local_74 = 0xbf000000;
    local_70 = 0;
    local_6c.x = (int)ROUND(256.0f * -0.5);
    local_6c.y = (int)ROUND(256.0f * -0.5);
    local_6c.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex,&local_6c);
    local_78 = 0x3f000000;
    local_70 = 0;
    local_74 = 0xbf000000;
    local_54.x = (int)ROUND(256.0f * 0.5);
    local_54.y = (int)ROUND(256.0f * -0.5);
    local_54.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[1].projected_vertex,&local_54);
    local_78 = 0x3f000000;
    local_70 = 0;
    local_74 = 0x3f000000;
    local_3c.x = (int)ROUND(256.0f * 0.5);
    local_3c.y = (int)ROUND(256.0f * 0.5);
    local_3c.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_78 = 0xbf000000;
    local_70 = 0;
    local_74 = 0x3f000000;
    local_84.x = (int)ROUND(256.0f * -0.5);
    local_84.y = (int)ROUND(256.0f * 0.5);
    local_84.z = (int)ROUND(256.0f * 0.0);
    input = &local_84;
  }
  else {
    if (expire_flag != 0) {
      this_ptr->expired = 1;
    }
    g_GoreQuadPrimitive.base.surface_normal.B.i = 0xffff;
    g_GoreQuadPrimitive.base.surface_normal.A.i = 0;
    g_GoreQuadPrimitive.base.surface_normal.C.i = 0;
    g_GoreQuadPrimitive.base.surface_normal.D.i = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (g_CDemonRenderer_PTR_00612560,g_BloodSplatTextures + this_ptr->texture_variant);
    local_48 = 0xbf000000;
    local_44 = 0;
    local_40 = 0xbf000000;
    local_24.x = (int)ROUND(256.0f * -0.5);
    local_24.y = (int)ROUND(256.0f * 0.0);
    local_24.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex,&local_24);
    local_48 = 0x3f000000;
    local_40 = 0xbf000000;
    local_44 = 0;
    CStack_90.x = (int)ROUND(256.0f * 0.5);
    CStack_90.y = (int)ROUND(256.0f * 0.0);
    CStack_90.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_90);
    local_48 = 0x3f000000;
    local_44 = 0;
    local_40 = 0x3f000000;
    local_60.x = (int)ROUND(256.0f * 0.5);
    local_60.y = (int)ROUND(256.0f * 0.0);
    local_60.z = (int)ROUND(256.0f * 0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[2].projected_vertex,&local_60);
    local_48 = 0xbf000000;
    local_40 = 0x3f000000;
    local_44 = 0;
    local_30.x = (int)ROUND(256.0f * -0.5);
    local_30.y = (int)ROUND(256.0f * 0.0);
    local_30.z = (int)ROUND(256.0f * 0.5);
    input = &local_30;
  }
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[3].projected_vertex,input);
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e4be7:
    g_SRenderVertex_ARRAY_00629014[0].r = 0x2000;
    g_SRenderVertex_ARRAY_00629014[0].g = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_00629014[0].g = 0x7f80;
    g_SRenderVertex_ARRAY_00629014[0].r = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e4be7;
    g_SRenderVertex_ARRAY_00629014[0].g = 0;
    g_SRenderVertex_ARRAY_00629014[0].r = 0;
  }
  g_SRenderVertex_ARRAY_00629014[0].b = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e4c14:
    g_SRenderVertex_ARRAY_00629014[1].r = 0x2000;
    g_SRenderVertex_ARRAY_00629014[1].g = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_00629014[1].g = 0x7f80;
    g_SRenderVertex_ARRAY_00629014[1].r = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e4c14;
    g_SRenderVertex_ARRAY_00629014[1].g = 0;
    g_SRenderVertex_ARRAY_00629014[1].r = 0;
  }
  g_SRenderVertex_ARRAY_00629014[1].b = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e4c41:
    g_SRenderVertex_ARRAY_00629014[2].r = 0x2000;
    g_SRenderVertex_ARRAY_00629014[2].g = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_00629014[2].g = 0x7f80;
    g_SRenderVertex_ARRAY_00629014[2].r = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e4c41;
    g_SRenderVertex_ARRAY_00629014[2].g = 0;
    g_SRenderVertex_ARRAY_00629014[2].r = 0;
  }
  g_SRenderVertex_ARRAY_00629014[2].b = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      g_SRenderVertex_ARRAY_00629014[3].g = 0x7f80;
      g_SRenderVertex_ARRAY_00629014[3].r = 0;
      goto LAB_004e4c80;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      g_SRenderVertex_ARRAY_00629014[3].g = 0;
      g_SRenderVertex_ARRAY_00629014[3].r = 0;
      goto LAB_004e4c80;
    }
  }
  g_SRenderVertex_ARRAY_00629014[3].r = 0x2000;
  g_SRenderVertex_ARRAY_00629014[3].g = 0;
LAB_004e4c80:
  g_SRenderVertex_ARRAY_00629014[3].b = 0;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (g_CDemonRenderer_PTR_00612560,&g_GoreQuadPrimitive.base);
  if (this_ptr->is_wall_splat == 1) {
    engine_drender_cpp_pop_FUN_004839a0();
    return;
  }
  return;
}
