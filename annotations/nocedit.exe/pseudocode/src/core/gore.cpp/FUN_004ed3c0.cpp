// Name: core_gore.cpp_FUN_004ed3c0
// Address: 004ed3c0
// Address Range: [[004ed3c0, 004ed725]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ed3c0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_gore.cpp_FUN_004ed3c0(uint param_1, uint param_2) */

void core_gore_cpp_FUN_004ed3c0(void)

{
  uint uVar1;
  float *pfVar2;
  SRenderVertex *output;
  uint *in_stack_00000004;
  int in_stack_00000008;
  CVector3i local_1c;
  
  _DAT_02d833ac = 4;
  _DAT_02d833c0 = 0;
  _DAT_02d833c4 = 1;
  _DAT_02d833c8 = 2;
  _DAT_02d833cc = 3;
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 7.34684e-40;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 2.2775203e-38;
  g_RenderVertexBuffer[3].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  output = g_RenderVertexBuffer;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,in_stack_00000004[0xe]);
  _DAT_02d833b0 = 0;
  _DAT_02d833b4 = 0;
  _DAT_02d833b8 = 0;
  _DAT_02d833bc = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067cb28);
  pfVar2 = (float *)(in_stack_00000004 + 2);
  do {
    local_1c.x = (int)ROUND(*pfVar2 * _DAT_0065f024);
    local_1c.y = (int)ROUND(pfVar2[1] * _DAT_0065f024);
    local_1c.z = (int)ROUND(pfVar2[2] * _DAT_0065f024);
    pfVar2 = pfVar2 + 3;
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&output->projected_vertex,&local_1c);
    output = output + 1;
  } while (pfVar2 != (float *)(in_stack_00000004 + 0xe));
  if (in_stack_00000004[0xf] == 0) {
    g_RenderVertexBuffer[0].color = 0x7ff;
    g_RenderVertexBuffer[0].fog = 2.86846e-42;
    g_RenderVertexBuffer[1].light = 2.86846e-42;
    g_RenderVertexBuffer[1].color = 0x7ff;
    g_RenderVertexBuffer[1].fog = 2.86846e-42;
    g_RenderVertexBuffer[2].light = 2.86846e-42;
    g_RenderVertexBuffer[2].color = 0x7ff;
    g_RenderVertexBuffer[2].fog = 2.86846e-42;
    g_RenderVertexBuffer[3].light = 2.86846e-42;
    g_RenderVertexBuffer[3].color = 0x7ff;
    g_RenderVertexBuffer[3].fog = 2.86846e-42;
    g_RenderVertexBuffer[0].light = 2.86846e-42;
    goto LAB_004ed595;
  }
  uVar1 = in_stack_00000004[1];
  if (uVar1 == 0) {
LAB_004ed4ec:
    g_RenderVertexBuffer[0].light = 1.14794e-41;
    g_RenderVertexBuffer[0].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[0].color = 0x7f80;
    g_RenderVertexBuffer[0].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ed4ec;
    g_RenderVertexBuffer[0].color = 0;
    g_RenderVertexBuffer[0].light = 0.0;
  }
  g_RenderVertexBuffer[0].fog = 0.0;
  uVar1 = in_stack_00000004[1];
  if (uVar1 == 0) {
LAB_004ed51e:
    g_RenderVertexBuffer[1].light = 1.14794e-41;
    g_RenderVertexBuffer[1].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[1].color = 0x7f80;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ed51e;
    g_RenderVertexBuffer[1].color = 0;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  g_RenderVertexBuffer[1].fog = 0.0;
  uVar1 = in_stack_00000004[1];
  if (uVar1 == 0) {
LAB_004ed550:
    g_RenderVertexBuffer[2].light = 1.14794e-41;
    g_RenderVertexBuffer[2].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[2].color = 0x7f80;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ed550;
    g_RenderVertexBuffer[2].color = 0;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  g_RenderVertexBuffer[2].fog = 0.0;
  uVar1 = in_stack_00000004[1];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      g_RenderVertexBuffer[3].color = 0x7f80;
      g_RenderVertexBuffer[3].fog = 0.0;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ed595;
    }
    if (uVar1 == 2) {
      g_RenderVertexBuffer[3].color = 0;
      g_RenderVertexBuffer[3].fog = 0.0;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ed595;
    }
  }
  g_RenderVertexBuffer[3].light = 1.14794e-41;
  g_RenderVertexBuffer[3].color = 0;
  g_RenderVertexBuffer[3].fog = 0.0;
LAB_004ed595:
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&DAT_02d833a8);
  if (in_stack_00000008 != 0) {
    *in_stack_00000004 = 1;
    return;
  }
  return;
}
