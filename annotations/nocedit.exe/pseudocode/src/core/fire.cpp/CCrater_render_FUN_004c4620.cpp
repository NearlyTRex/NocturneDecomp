// Name: core_fire.cpp_CCrater_render_FUN_004c4620
// Address: 004c4620
// Address Range: [[004c4620, 004c4874]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CCrater_render_FUN_004c4620(CCrater * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_render_FUN_004c4620(CCrater *this_ptr)

{
  SMRGLHeaderPrimitive local_6c;
  uint local_54;
  uint local_50;
  uint local_4c;
  CVector3i local_38;
  CVector3i local_2c;
  CVector3i local_20;
  CVector3i local_14;
  
  if (*(int *)this_ptr->field0_0x0 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(this_ptr->field0_0x0 + 0xc));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectBlastTexture);
  local_20.x = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x40) * 256.0f);
  local_20.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x44) * 256.0f);
  local_20.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x48) * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[0].projected_vertex,&local_20);
  local_2c.x = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x4c) * 256.0f);
  local_2c.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x50) * 256.0f);
  local_2c.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x54) * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[1].projected_vertex,&local_2c);
  local_38.x = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x58) * 256.0f);
  local_38.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x5c) * 256.0f);
  local_38.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x60) * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[2].projected_vertex,&local_38);
  local_14.x = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 100) * 256.0f);
  local_14.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x68) * 256.0f);
  local_14.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x6c) * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[3].projected_vertex,&local_14);
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
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  g_RenderVertexBuffer[3].v = 7.34684e-40;
  local_6c.surface_normal.B = 0xffff;
  local_6c.surface_normal.A = 0;
  local_6c.surface_normal.C = 0;
  local_6c.base.count = 3;
  local_6c.surface_normal.D = 0;
  local_54 = 0;
  local_50 = 1;
  local_4c = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&local_6c);
  local_54 = 0;
  local_50 = 2;
  local_4c = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&local_6c);
  return;
}
