// Name: core_fire.cpp_CTrail_render_FUN_004c5e90
// Address: 004c5e90
// Address Range: [[004c5e90, 004c6149]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CTrail_render_FUN_004c5e90(CTrail * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_render_FUN_004c5e90(CTrail *this_ptr)

{
  BADSPACEBASE *in_ESP;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  CVector3i local_2c;
  float local_20;
  float fStack_1c;
  byte auStack_18 [8];
  float local_10;
  int local_c;
  
  if (*(float *)(this_ptr->field0_0x0 + 0x10) <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,*(SMRGLTextureBasic **)(this_ptr->field0_0x0 + 0x20));
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
            (g_CDemonRendererPtr,*(float *)(this_ptr->field0_0x0 + 0x14));
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,&local_10);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&local_c,(CVector3i *)0x0);
  local_2c.z = 0;
  local_2c.x = (int)(*(float *)(this_ptr->field0_0x0 + 0xc) *
                    *(float *)(this_ptr->field0_0x0 + 0x14));
  auStack_18._4_4_ = (uint)ROUND((float)local_2c.x * 256f);
  local_10 = (float)(int)ROUND((float)local_2c.x * 256f);
  local_c = (int)ROUND(256f * 0.0);
  local_2c.y = local_2c.x;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(auStack_18 + 4)
            );
  local_2c.y = (int)-(float)local_2c.y;
  iStack00000008 = (int)ROUND((float)local_2c.y * 256f);
  iStack0000000c = (int)ROUND((float)local_2c.z * 256f);
  iStack00000010 = (int)ROUND(local_20 * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)&stack0x00000008);
  local_20 = -local_20;
  auStack_18._0_4_ = (uint)ROUND((float)local_2c.z * 256f);
  auStack_18._4_4_ = (uint)ROUND(local_20 * 256f);
  local_10 = (float)(int)ROUND(fStack_1c * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)auStack_18);
  local_20 = -local_20;
  local_2c.x = (int)ROUND(local_20 * 256f);
  local_2c.y = (int)ROUND(fStack_1c * 256f);
  local_2c.z = (int)ROUND((float)auStack_18._0_4_ * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_2c);
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
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffb0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
