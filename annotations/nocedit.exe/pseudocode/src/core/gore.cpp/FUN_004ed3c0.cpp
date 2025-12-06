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
  BADSPACEBASE *in_ESP;
  int iVar2;
  SRenderVertex *output;
  int in_stack_00000004;
  int in_stack_00000010;
  uint *in_stack_00000014;
  int in_stack_00000018;
  
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
            (g_CDemonRendererPtr,*(int *)(in_stack_00000004 + 0x38));
  _DAT_02d833b0 = 0;
  _DAT_02d833b4 = 0;
  _DAT_02d833b8 = 0;
  _DAT_02d833bc = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067cb28);
  iVar2 = in_stack_00000004 + 8;
  do {
    iVar2 = iVar2 + 0xc;
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&output->projected_vertex,(CVector3i *)&stack0xffffffec);
    output = output + 1;
  } while (iVar2 != in_stack_00000004 + 0x38);
  if (*(int *)(in_stack_00000010 + 0x3c) == 0) {
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
  uVar1 = *(uint *)(in_stack_00000010 + 4);
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
  uVar1 = *(uint *)(in_stack_00000010 + 4);
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
  uVar1 = *(uint *)(in_stack_00000010 + 4);
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
  uVar1 = *(uint *)(in_stack_00000010 + 4);
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
  if (in_stack_00000018 != 0) {
    *in_stack_00000014 = 1;
    return;
  }
  return;
}
