// Name: core_fire.cpp_CTrail_render_FUN_004c5e90
// Address: 004c5e90
// Address Range: [[004c5e90, 004c6149]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CTrail_render_FUN_004c5e90(CTrail * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_render_FUN_004c5e90(CTrail *this_ptr)

{
  SMRGLHeaderPrimitive local_78;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  CVector3i local_50;
  float local_44;
  float local_40;
  float local_3c;
  CVector3i local_38;
  CVector3i local_2c;
  CVector3i local_20;
  CVector3i local_14;
  
  if (*(float *)(this_ptr->field0_0x0 + 0x10) <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,*(SMRGLTextureBasic **)(this_ptr->field0_0x0 + 0x20));
  local_78.base.count = 4;
  local_78.surface_normal.D = 0;
  local_78.surface_normal.C = 0;
  local_78.surface_normal.B = 0;
  local_78.surface_normal.A = 0;
  local_60 = 0;
  local_54 = 3;
  local_5c = 1;
  local_58 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
            (g_CDemonRendererPtr,*(float *)(this_ptr->field0_0x0 + 0x14));
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)&local_20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,&local_20,(CVector3i *)0x0);
  local_3c = 0.0;
  local_44 = *(float *)(this_ptr->field0_0x0 + 0xc) * *(float *)(this_ptr->field0_0x0 + 0x14);
  local_2c.x = (int)ROUND(local_44 * 256.0f);
  local_2c.y = (int)ROUND(local_44 * 256.0f);
  local_2c.z = (int)ROUND(256.0f * 0.0);
  local_40 = local_44;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_2c);
  local_44 = -local_44;
  local_14.x = (int)ROUND(local_44 * 256.0f);
  local_14.y = (int)ROUND(local_40 * 256.0f);
  local_14.z = (int)ROUND(local_3c * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_14);
  local_40 = -local_40;
  local_38.x = (int)ROUND(local_44 * 256.0f);
  local_38.y = (int)ROUND(local_40 * 256.0f);
  local_38.z = (int)ROUND(local_3c * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_38);
  local_44 = -local_44;
  local_50.x = (int)ROUND(local_44 * 256.0f);
  local_50.y = (int)ROUND(local_40 * 256.0f);
  local_50.z = (int)ROUND(local_3c * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_50);
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  g_RenderVertexBuffer[3].v = 7.34684e-40;
  g_RenderVertexBuffer[0].light = 9.18341e-41;
  g_RenderVertexBuffer[0].color = 0xffff;
  g_RenderVertexBuffer[0].fog = 9.18341e-41;
  g_RenderVertexBuffer[1].light = 9.18341e-41;
  g_RenderVertexBuffer[1].color = 0xffff;
  g_RenderVertexBuffer[1].fog = 9.18341e-41;
  g_RenderVertexBuffer[2].light = 9.18341e-41;
  g_RenderVertexBuffer[2].color = 0xffff;
  g_RenderVertexBuffer[2].fog = 9.18341e-41;
  g_RenderVertexBuffer[3].light = 9.18341e-41;
  g_RenderVertexBuffer[3].color = 0xffff;
  g_RenderVertexBuffer[3].fog = 9.18341e-41;
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&local_78);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
