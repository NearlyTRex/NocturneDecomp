// Name: core_gore.cpp_CBloodPool_render_FUN_004ecce0
// Address: 004ecce0
// Address Range: [[004ecce0, 004ed09e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_render_FUN_004ecce0(CBloodPool *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_gore_cpp_CBloodPool_render_FUN_004ecce0(CBloodPool *this_ptr,int expire_flag)

{
  uint uVar1;
  CVector3i local_50;
  CVector3i local_44;
  uint local_38;
  uint local_34;
  uint local_30;
  CVector3i local_2c;
  CVector3i local_20;
  int local_14;
  
  local_14 = (int)ROUND(ROUND(this_ptr->age * (float)8));
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if ((0x1c < local_14) && (local_14 = 0x1c, expire_flag != 0)) {
    this_ptr->expired = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,
             g_BloodPoolAnimTextures + this_ptr->texture_variant * 0x1d + local_14);
  local_38 = 0xbfaa9fbe;
  local_30 = 0xbfaa9fbe;
  local_34 = 0;
  local_20.x = (int)ROUND(256.0f * -1.333);
  local_20.y = (int)ROUND(256.0f * 0.0);
  local_20.z = (int)ROUND(256.0f * -1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_20);
  local_38 = 0x3faa9fbe;
  local_34 = 0;
  local_30 = 0xbfaa9fbe;
  local_44.x = (int)ROUND(256.0f * 1.333);
  local_44.y = (int)ROUND(256.0f * 0.0);
  local_44.z = (int)ROUND(256.0f * -1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_44);
  local_38 = 0x3faa9fbe;
  local_30 = 0x3faa9fbe;
  local_34 = 0;
  local_2c.x = (int)ROUND(256.0f * 1.333);
  local_2c.y = (int)ROUND(256.0f * 0.0);
  local_2c.z = (int)ROUND(256.0f * 1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_2c);
  local_38 = 0xbfaa9fbe;
  local_34 = 0;
  local_30 = 0x3faa9fbe;
  local_50.x = (int)ROUND(256.0f * -1.333);
  local_50.y = (int)ROUND(256.0f * 0.0);
  local_50.z = (int)ROUND(256.0f * 1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_50);
  uVar1 = this_ptr->blood_type;
  if (uVar1 == 0) {
LAB_004eced9:
    g_RenderVertexBuffer[0].light = 0x2000;
    g_RenderVertexBuffer[0].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[0].light = 0;
    g_RenderVertexBuffer[0].color = 0x7f80;
  }
  else {
    if (uVar1 != 2) goto LAB_004eced9;
    g_RenderVertexBuffer[0].color = 0;
    g_RenderVertexBuffer[0].light = 0;
  }
  g_RenderVertexBuffer[0].fog = 0;
  uVar1 = this_ptr->blood_type;
  if (uVar1 == 0) {
LAB_004ecf06:
    g_RenderVertexBuffer[1].light = 0x2000;
    g_RenderVertexBuffer[1].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[1].color = 0x7f80;
    g_RenderVertexBuffer[1].light = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ecf06;
    g_RenderVertexBuffer[1].color = 0;
    g_RenderVertexBuffer[1].light = 0;
  }
  g_RenderVertexBuffer[1].fog = 0;
  uVar1 = this_ptr->blood_type;
  if (uVar1 == 0) {
LAB_004ecf33:
    g_RenderVertexBuffer[2].light = 0x2000;
    g_RenderVertexBuffer[2].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[2].color = 0x7f80;
    g_RenderVertexBuffer[2].light = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ecf33;
    g_RenderVertexBuffer[2].color = 0;
    g_RenderVertexBuffer[2].light = 0;
  }
  g_RenderVertexBuffer[2].fog = 0;
  uVar1 = this_ptr->blood_type;
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      g_RenderVertexBuffer[3].color = 0x7f80;
      g_RenderVertexBuffer[3].light = 0;
      goto LAB_004ecf83;
    }
    if (uVar1 == 2) {
      g_RenderVertexBuffer[3].color = 0;
      g_RenderVertexBuffer[3].light = 0;
      goto LAB_004ecf83;
    }
  }
  g_RenderVertexBuffer[3].light = 0x2000;
  g_RenderVertexBuffer[3].color = 0;
LAB_004ecf83:
  g_RenderVertexBuffer[3].fog = 0;
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr2,&g_GoreQuadPrimitive.base);
  return;
}
