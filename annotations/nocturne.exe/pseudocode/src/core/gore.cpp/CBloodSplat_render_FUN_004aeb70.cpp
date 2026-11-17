// Name: core_gore.cpp_CBloodSplat_render_FUN_004aeb70
// Address: 004aeb70
// Address Range: [[004aeb70, 004af127]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004aeb70(CBloodSplat *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004aeb70(CBloodSplat *this_ptr,int expire_flag)

{
  EBloodType EVar1;
  CVector3i *input;
  double dVar2;
  CVector3i CStack_90;
  CVector3i local_84;
  CVector3i local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  CVector3i local_60;
  CVector3i local_54;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3i local_24;
  int local_18;
  
  CStack_90.x = 0x4aeb92;
  dVar2 = round
                    ((double)(this_ptr->age * (float)8 + (float)4));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if (0xf < local_18) {
    this_ptr->expired = 1;
    local_18 = 0xf;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&this_ptr->position);
  if (this_ptr->is_wall_splat == 1) {
    g_SMRGLPrimitiveQuadIndex_01c78c80.base.surface_normal.A.i = 0;
    g_SMRGLPrimitiveQuadIndex_01c78c80.base.surface_normal.B.i = 0;
    g_SMRGLPrimitiveQuadIndex_01c78c80.base.surface_normal.D.i = 0;
    g_SMRGLPrimitiveQuadIndex_01c78c80.base.surface_normal.C.i = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,
               g_SMRGLTextureBasic_ARRAY_005b974c + this_ptr->texture_variant * 0x10 + local_18);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (g_CDemonRenderer_PTR_005ae704,&this_ptr->rotation,(CVector3f *)0x0);
    local_48 = 0xbf000000;
    local_44 = 0xbf000000;
    local_40 = 0;
    local_78.x = (int)ROUND(256.0f * -0.5);
    local_78.y = (int)ROUND(256.0f * -0.5);
    local_78.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_78);
    local_48 = 0x3f000000;
    local_44 = 0xbf000000;
    local_40 = 0;
    local_54.x = (int)ROUND(256.0f * 0.5);
    local_54.y = (int)ROUND(256.0f * -0.5);
    local_54.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_54);
    local_48 = 0x3f000000;
    local_44 = 0x3f000000;
    local_40 = 0;
    local_24.x = (int)ROUND(256.0f * 0.5);
    local_24.y = (int)ROUND(256.0f * 0.5);
    local_24.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_24);
    input = &CStack_90;
    local_48 = 0xbf000000;
    local_40 = 0;
    local_44 = 0x3f000000;
    CStack_90.x = (int)ROUND(256.0f * -0.5);
    CStack_90.y = (int)ROUND(256.0f * 0.5);
    CStack_90.z = (int)ROUND(256.0f * 0.0);
  }
  else {
    this_ptr->expired = 1;
    g_SMRGLPrimitiveQuadIndex_01c78c80.base.surface_normal.A.i = 0;
    g_SMRGLPrimitiveQuadIndex_01c78c80.base.surface_normal.C.i = 0;
    g_SMRGLPrimitiveQuadIndex_01c78c80.base.surface_normal.D.i = 0;
    g_SMRGLPrimitiveQuadIndex_01c78c80.base.surface_normal.B.i = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,
               g_SMRGLTextureBasic_ARRAY_005b96ec + this_ptr->texture_variant);
    local_6c = 0xbf000000;
    local_68 = 0;
    local_64 = 0xbf000000;
    local_60.x = (int)ROUND(256.0f * -0.5);
    local_60.y = (int)ROUND(256.0f * 0.0);
    local_60.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_60);
    local_6c = 0x3f000000;
    local_68 = 0;
    local_64 = 0xbf000000;
    local_3c.x = (int)ROUND(256.0f * 0.5);
    local_3c.y = (int)ROUND(256.0f * 0.0);
    local_3c.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_3c);
    local_6c = 0x3f000000;
    local_68 = 0;
    local_64 = 0x3f000000;
    local_30.x = (int)ROUND(256.0f * 0.5);
    local_30.y = (int)ROUND(256.0f * 0.0);
    local_30.z = (int)ROUND(256.0f * 0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_30);
    local_6c = 0xbf000000;
    local_68 = 0;
    local_64 = 0x3f000000;
    local_84.x = (int)ROUND(256.0f * -0.5);
    local_84.y = (int)ROUND(256.0f * 0.0);
    local_84.z = (int)ROUND(256.0f * 0.5);
    input = &local_84;
  }
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,input);
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004aedaf:
    g_SRenderVertex_ARRAY_005c5014[0].r = 0x2000;
    g_SRenderVertex_ARRAY_005c5014[0].g = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_005c5014[0].g = 0x7f80;
    g_SRenderVertex_ARRAY_005c5014[0].r = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004aedaf;
    g_SRenderVertex_ARRAY_005c5014[0].g = 0;
    g_SRenderVertex_ARRAY_005c5014[0].r = 0;
  }
  g_SRenderVertex_ARRAY_005c5014[0].b = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004aeddc:
    g_SRenderVertex_ARRAY_005c5014[1].r = 0x2000;
    g_SRenderVertex_ARRAY_005c5014[1].g = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_005c5014[1].g = 0x7f80;
    g_SRenderVertex_ARRAY_005c5014[1].r = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004aeddc;
    g_SRenderVertex_ARRAY_005c5014[1].g = 0;
    g_SRenderVertex_ARRAY_005c5014[1].r = 0;
  }
  g_SRenderVertex_ARRAY_005c5014[1].b = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004aee09:
    g_SRenderVertex_ARRAY_005c5014[2].r = 0x2000;
    g_SRenderVertex_ARRAY_005c5014[2].g = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_005c5014[2].g = 0x7f80;
    g_SRenderVertex_ARRAY_005c5014[2].r = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004aee09;
    g_SRenderVertex_ARRAY_005c5014[2].g = 0;
    g_SRenderVertex_ARRAY_005c5014[2].r = 0;
  }
  g_SRenderVertex_ARRAY_005c5014[2].b = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      g_SRenderVertex_ARRAY_005c5014[3].g = 0x7f80;
      g_SRenderVertex_ARRAY_005c5014[3].r = 0;
      goto LAB_004aee48;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      g_SRenderVertex_ARRAY_005c5014[3].g = 0;
      g_SRenderVertex_ARRAY_005c5014[3].r = 0;
      goto LAB_004aee48;
    }
  }
  g_SRenderVertex_ARRAY_005c5014[3].r = 0x2000;
  g_SRenderVertex_ARRAY_005c5014[3].g = 0;
LAB_004aee48:
  g_SRenderVertex_ARRAY_005c5014[3].b = 0;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
            (g_CDemonRenderer_PTR_005ae704,&g_SMRGLPrimitiveQuadIndex_01c78c80.base);
  if (this_ptr->is_wall_splat == 1) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
    return;
  }
  return;
}
