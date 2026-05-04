// Name: core_gore.cpp_CBloodSplat_render_FUN_004ec500
// Address: 004ec500
// Address Range: [[004ec500, 004ecacc]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004ec500(CBloodSplat *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_gore_cpp_CBloodSplat_render_FUN_004ec500(CBloodSplat *this_ptr,int expire_flag)

{
  uint uVar2;
  CVector3i *input;
  CVector3i local_8c;
  CVector3i local_80;
  CVector3i local_68;
  CVector3i local_5c;
  CVector3i local_50;
  CVector3i local_38;
  CVector3i local_2c;
  CVector3i local_20;
  int local_14;
  uint uVar1;
  
  local_14 = (int)ROUND(ROUND(this_ptr->age * (float)8 + (float)4));
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if ((0xf < local_14) && (local_14 = 0xf, expire_flag != 0)) {
    this_ptr->expired = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->position);
  if (this_ptr->is_wall_splat == 1) {
    g_GoreQuadPrimitive.base.surface_normal.A.i = 0;
    g_GoreQuadPrimitive.base.surface_normal.C.i = 0xffff;
    g_GoreQuadPrimitive.base.surface_normal.B.i = 0;
    g_GoreQuadPrimitive.base.surface_normal.D.i = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,
               g_BloodSplatAnimTextures + this_ptr->texture_variant * 0x10 + local_14);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,&this_ptr->rotation,(CVector3f *)0x0);
    local_68.x = (int)ROUND(256.0f * -0.5);
    local_68.y = (int)ROUND(256.0f * -0.5);
    local_68.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_68);
    local_50.x = (int)ROUND(256.0f * 0.5);
    local_50.y = (int)ROUND(256.0f * -0.5);
    local_50.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_50);
    local_38.x = (int)ROUND(256.0f * 0.5);
    local_38.y = (int)ROUND(256.0f * 0.5);
    local_38.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_38);
    local_80.x = (int)ROUND(256.0f * -0.5);
    local_80.y = (int)ROUND(256.0f * 0.5);
    local_80.z = (int)ROUND(256.0f * 0.0);
    input = &local_80;
  }
  else {
    if (expire_flag != 0) {
      this_ptr->expired = 1;
    }
    g_GoreQuadPrimitive.base.surface_normal.B.i = 0xffff;
    g_GoreQuadPrimitive.base.surface_normal.A.i = 0;
    g_GoreQuadPrimitive.base.surface_normal.C.i = 0;
    g_GoreQuadPrimitive.base.surface_normal.D.i = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,g_BloodSplatTextures + this_ptr->texture_variant);
    local_20.x = (int)ROUND(256.0f * -0.5);
    local_20.y = (int)ROUND(256.0f * 0.0);
    local_20.z = (int)ROUND(256.0f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_20);
    local_8c.x = (int)ROUND(256.0f * 0.5);
    local_8c.y = (int)ROUND(256.0f * 0.0);
    local_8c.z = (int)ROUND(256.0f * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_8c);
    local_5c.x = (int)ROUND(256.0f * 0.5);
    local_5c.y = (int)ROUND(256.0f * 0.0);
    local_5c.z = (int)ROUND(256.0f * 0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_5c);
    local_2c.x = (int)ROUND(256.0f * -0.5);
    local_2c.y = (int)ROUND(256.0f * 0.0);
    local_2c.z = (int)ROUND(256.0f * 0.5);
    input = &local_2c;
  }
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,input);
  uVar1 = this_ptr->blood_type;
  if (uVar1 == 0) {
LAB_004ec747:
    g_RenderVertexBuffer[0].r = 0x2000;
    g_RenderVertexBuffer[0].g = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[0].g = 0x7f80;
    g_RenderVertexBuffer[0].r = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ec747;
    g_RenderVertexBuffer[0].g = 0;
    g_RenderVertexBuffer[0].r = 0;
  }
  g_RenderVertexBuffer[0].b = 0;
  uVar2 = this_ptr->blood_type;
  if (uVar2 == 0) {
LAB_004ec774:
    g_RenderVertexBuffer[1].r = 0x2000;
    g_RenderVertexBuffer[1].g = 0;
  }
  else if (uVar2 < 2) {
    g_RenderVertexBuffer[1].g = 0x7f80;
    g_RenderVertexBuffer[1].r = 0;
  }
  else {
    if (uVar2 != 2) goto LAB_004ec774;
    g_RenderVertexBuffer[1].g = 0;
    g_RenderVertexBuffer[1].r = 0;
  }
  g_RenderVertexBuffer[1].b = 0;
  uVar2 = this_ptr->blood_type;
  if (uVar2 == 0) {
LAB_004ec7a1:
    g_RenderVertexBuffer[2].r = 0x2000;
    g_RenderVertexBuffer[2].g = 0;
  }
  else if (uVar2 < 2) {
    g_RenderVertexBuffer[2].g = 0x7f80;
    g_RenderVertexBuffer[2].r = 0;
  }
  else {
    if (uVar2 != 2) goto LAB_004ec7a1;
    g_RenderVertexBuffer[2].g = 0;
    g_RenderVertexBuffer[2].r = 0;
  }
  g_RenderVertexBuffer[2].b = 0;
  uVar2 = this_ptr->blood_type;
  if (uVar2 != 0) {
    if (uVar2 < 2) {
      g_RenderVertexBuffer[3].g = 0x7f80;
      g_RenderVertexBuffer[3].r = 0;
      goto LAB_004ec7e0;
    }
    if (uVar2 == 2) {
      g_RenderVertexBuffer[3].g = 0;
      g_RenderVertexBuffer[3].r = 0;
      goto LAB_004ec7e0;
    }
  }
  g_RenderVertexBuffer[3].r = 0x2000;
  g_RenderVertexBuffer[3].g = 0;
LAB_004ec7e0:
  g_RenderVertexBuffer[3].b = 0;
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr2,&g_GoreQuadPrimitive.base);
  if (this_ptr->is_wall_splat == 1) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    return;
  }
  return;
}
