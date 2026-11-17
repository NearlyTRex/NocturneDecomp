// Name: core_gore.cpp_CBloodSplat_render_FUN_004c8010
// Address: 004c8010
// Address Range: [[004c8010, 004c8680]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004c8010(CBloodSplat *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004c8010(CBloodSplat *this_ptr,int expire_flag)

{
  EBloodType EVar1;
  CVector3i *input;
  double dVar2;
  CVector3i CStack_a0;
  CVector3i local_94;
  uint local_88;
  uint local_84;
  uint local_80;
  CVector3i local_7c;
  CVector3i local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  CVector3i local_58;
  CVector3i local_4c;
  CVector3i local_40;
  CVector3i local_34;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  
  CStack_a0.x = 0x4c803c;
  dVar2 = round
                    ((double)(this_ptr->age * (float)8 + (float)4));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if ((0xf < local_18) && (local_18 = 0xf, expire_flag != 0)) {
    this_ptr->expired = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (g_CDemonRenderer_PTR_0060b280,&this_ptr->position);
  if (this_ptr->is_wall_splat == 1) {
    g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.A.i = 0;
    g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.C.i = 0xffff;
    g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.B.i = 0;
    g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.D.i = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (g_CDemonRenderer_PTR_0060b280,
               g_SMRGLTextureBasic_ARRAY_00616868 + this_ptr->texture_variant * 0x10 + local_18);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (g_CDemonRenderer_PTR_0060b280,&this_ptr->rotation,(CVector3f *)0x0);
    local_88 = 0xbf000000;
    local_84 = 0xbf000000;
    local_80 = 0;
    local_7c.x = (int)ROUND(256.0f * -0.5);
    local_7c.y = (int)ROUND(256.0f * -0.5);
    local_7c.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,&local_7c);
    local_88 = 0x3f000000;
    local_80 = 0;
    local_84 = 0xbf000000;
    local_58.x = (int)ROUND(256.0f * 0.5);
    local_58.y = (int)ROUND(256.0f * -0.5);
    local_58.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_58);
    local_88 = 0x3f000000;
    local_80 = 0;
    local_84 = 0x3f000000;
    local_34.x = (int)ROUND(256.0f * 0.5);
    local_34.y = (int)ROUND(256.0f * 0.5);
    local_34.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_34);
    input = &CStack_a0;
    local_88 = 0xbf000000;
    local_80 = 0;
    local_84 = 0x3f000000;
    CStack_a0.x = (int)ROUND(256.0f * -0.5);
    CStack_a0.y = (int)ROUND(256.0f * 0.5);
    CStack_a0.z = (int)ROUND(256.0f * 0.0);
  }
  else {
    if (expire_flag != 0) {
      this_ptr->expired = 1;
    }
    g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.B.i = 0xffff;
    g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.A.i = 0;
    g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.C.i = 0;
    g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.D.i = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (g_CDemonRenderer_PTR_0060b280,
               g_SMRGLTextureBasic_ARRAY_00616808 + this_ptr->texture_variant);
    local_64 = 0xbf000000;
    local_60 = 0;
    local_5c = 0xbf000000;
    local_4c.x = (int)ROUND(256.0f * -0.5);
    local_4c.y = (int)ROUND(256.0f * 0.0);
    local_4c.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,&local_4c);
    local_64 = 0x3f000000;
    local_5c = 0xbf000000;
    local_60 = 0;
    local_40.x = (int)ROUND(256.0f * 0.5);
    local_40.y = (int)ROUND(256.0f * 0.0);
    local_40.z = (int)ROUND(256.0f * -0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_40);
    local_64 = 0x3f000000;
    local_60 = 0;
    local_5c = 0x3f000000;
    local_94.x = (int)ROUND(256.0f * 0.5);
    local_94.y = (int)ROUND(256.0f * 0.0);
    local_94.z = (int)ROUND(256.0f * 0.5);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_94);
    local_64 = 0xbf000000;
    local_5c = 0x3f000000;
    local_60 = 0;
    local_70.x = (int)ROUND(256.0f * -0.5);
    local_70.y = (int)ROUND(256.0f * 0.0);
    local_70.z = (int)ROUND(256.0f * 0.5);
    input = &local_70;
  }
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[3].projected_vertex,input);
  EVar1 = this_ptr->blood_type;
  local_28 = &g_SRenderVertex_ARRAY_00622014[0].b;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c827a:
    g_SRenderVertex_ARRAY_00622014[0].r = 0x2000;
    g_SRenderVertex_ARRAY_00622014[0].g = 0;
    *local_28 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_00622014[0].g = 0x9a80;
    g_SRenderVertex_ARRAY_00622014[0].b = 0xb100;
    g_SRenderVertex_ARRAY_00622014[0].r = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c827a;
    g_SRenderVertex_ARRAY_00622014[0].g = 0;
    g_SRenderVertex_ARRAY_00622014[0].b = 0;
    g_SRenderVertex_ARRAY_00622014[0].r = 0;
  }
  EVar1 = this_ptr->blood_type;
  local_1c = &g_SRenderVertex_ARRAY_00622014[1].g;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c82c2:
    g_SRenderVertex_ARRAY_00622014[1].r = 0x2000;
    *local_1c = 0;
    g_SRenderVertex_ARRAY_00622014[1].b = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_00622014[1].g = 0x9a80;
    g_SRenderVertex_ARRAY_00622014[1].b = 0xb100;
    g_SRenderVertex_ARRAY_00622014[1].r = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c82c2;
    g_SRenderVertex_ARRAY_00622014[1].g = 0;
    g_SRenderVertex_ARRAY_00622014[1].b = 0;
    g_SRenderVertex_ARRAY_00622014[1].r = 0;
  }
  EVar1 = this_ptr->blood_type;
  local_24 = &g_SRenderVertex_ARRAY_00622014[2].g;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c830d:
    g_SRenderVertex_ARRAY_00622014[2].r = 0x2000;
    *local_24 = 0;
    g_SRenderVertex_ARRAY_00622014[2].b = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_00622014[2].g = 0x9a80;
    g_SRenderVertex_ARRAY_00622014[2].b = 0xb100;
    g_SRenderVertex_ARRAY_00622014[2].r = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c830d;
    g_SRenderVertex_ARRAY_00622014[2].g = 0;
    g_SRenderVertex_ARRAY_00622014[2].b = 0;
    g_SRenderVertex_ARRAY_00622014[2].r = 0;
  }
  EVar1 = this_ptr->blood_type;
  local_20 = &g_SRenderVertex_ARRAY_00622014[3].g;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      g_SRenderVertex_ARRAY_00622014[3].g = 0x9a80;
      g_SRenderVertex_ARRAY_00622014[3].b = 0xb100;
      g_SRenderVertex_ARRAY_00622014[3].r = 0x9000;
      goto LAB_004c836f;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      g_SRenderVertex_ARRAY_00622014[3].g = 0;
      g_SRenderVertex_ARRAY_00622014[3].b = 0;
      g_SRenderVertex_ARRAY_00622014[3].r = 0;
      goto LAB_004c836f;
    }
  }
  g_SRenderVertex_ARRAY_00622014[3].r = 0x2000;
  *local_20 = 0;
  g_SRenderVertex_ARRAY_00622014[3].b = 0;
LAB_004c836f:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (g_CDemonRenderer_PTR_0060b280,&g_SMRGLPrimitiveQuadIndex_01cb8288.base);
  if (this_ptr->is_wall_splat == 1) {
    engine_drender_cpp_pop_FUN_0046b4a0();
    return;
  }
  return;
}
