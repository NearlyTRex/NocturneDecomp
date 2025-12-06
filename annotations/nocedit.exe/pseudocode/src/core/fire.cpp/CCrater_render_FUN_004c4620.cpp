// Name: core_fire.cpp_CCrater_render_FUN_004c4620
// Address: 004c4620
// Address Range: [[004c4620, 004c4874]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CCrater_render_FUN_004c4620(CCrater * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_render_FUN_004c4620(CCrater *this_ptr)

{
  BADSPACEBASE *in_ESP;
  int iStack00000008;
  byte local_50 [12];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  byte local_28 [12];
  int local_1c;
  CVector3i local_18;
  
  if (*(int *)this_ptr->field0_0x0 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(this_ptr->field0_0x0 + 0xc));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectBlastTexture);
  local_18.x = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x40) * 256f);
  local_18.y = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x44) * 256f);
  local_18.z = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x48) * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[0].projected_vertex,&local_18);
  local_28._8_4_ = (uint)ROUND(*(float *)(this_ptr->field0_0x0 + 0x4c) * 256f);
  local_1c = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x50) * 256f);
  local_18.x = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x54) * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[1].projected_vertex,(CVector3i *)(local_28 + 8));
  local_28._0_4_ = (uint)ROUND(*(float *)(this_ptr->field0_0x0 + 0x58) * 256f);
  local_28._4_4_ = (uint)ROUND(*(float *)(this_ptr->field0_0x0 + 0x5c) * 256f);
  local_28._8_4_ = (uint)ROUND(*(float *)(this_ptr->field0_0x0 + 0x60) * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[2].projected_vertex,(CVector3i *)local_28);
  iStack00000008 = (int)ROUND(*(float *)(this_ptr->field0_0x0 + 0x6c) * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_RenderVertexBuffer[3].projected_vertex,(CVector3i *)&stack0x00000000);
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
  local_50._8_4_ = 0xffff;
  local_50._4_4_ = 0;
  iStack_44 = 0;
  local_50._0_4_ = 3;
  iStack_40 = 0;
  iStack_3c = 0;
  local_38 = 1;
  local_34 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_50);
  local_34 = 0;
  local_30 = 2;
  local_2c = 3;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_50 + 8));
  return;
}
