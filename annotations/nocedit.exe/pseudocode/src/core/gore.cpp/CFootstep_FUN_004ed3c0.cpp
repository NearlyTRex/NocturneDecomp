// Name: core_gore.cpp_CFootstep_FUN_004ed3c0
// Address: 004ed3c0
// Address Range: [[004ed3c0, 004ed725]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_FUN_004ed3c0(CFootstep *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CFootstep_FUN_004ed3c0(CFootstep *this_ptr)

{
  uint uVar1;
  CVector3f *pCVar2;
  SRenderVertex *output;
  int in_stack_00000008;
  CVector3i local_1c;
  
  INT_02d833ac = 4;
  INT_02d833c0 = 0;
  INT_02d833c4 = 1;
  INT_02d833c8 = 2;
  INT_02d833cc = 3;
  g_RenderVertexBuffer[0].u = 0x80000;
  g_RenderVertexBuffer[0].v = 0x80000;
  g_RenderVertexBuffer[1].u = 0xf80000;
  g_RenderVertexBuffer[2].u = 0xf80000;
  g_RenderVertexBuffer[2].v = 0xf80000;
  g_RenderVertexBuffer[3].v = 0xf80000;
  g_RenderVertexBuffer[1].v = 0x80000;
  g_RenderVertexBuffer[3].u = 0x80000;
  output = g_RenderVertexBuffer;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,*(int *)this_ptr->field2_0x38);
  INT_02d833b0 = 0;
  INT_02d833b4 = 0;
  INT_02d833b8 = 0;
  INT_02d833bc = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,&DAT_0067cb28);
  pCVar2 = this_ptr->unk2;
  do {
    local_1c.x = (int)ROUND(pCVar2->x * 256.0f);
    local_1c.y = (int)ROUND(pCVar2->y * 256.0f);
    local_1c.z = (int)ROUND(pCVar2->z * 256.0f);
    pCVar2 = pCVar2 + 1;
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&output->projected_vertex,&local_1c);
    output = output + 1;
  } while (pCVar2 != (CVector3f *)this_ptr->field2_0x38);
  if (*(int *)(this_ptr->field2_0x38 + 4) == 0) {
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
  uVar1 = *(uint *)(this_ptr->unk1 + 4);
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
  uVar1 = *(uint *)(this_ptr->unk1 + 4);
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
  uVar1 = *(uint *)(this_ptr->unk1 + 4);
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
  uVar1 = *(uint *)(this_ptr->unk1 + 4);
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
            (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&INT_02d833a8);
  if (in_stack_00000008 != 0) {
    this_ptr->unk1[0] = '\x01';
    this_ptr->unk1[1] = '\0';
    this_ptr->unk1[2] = '\0';
    this_ptr->unk1[3] = '\0';
    return;
  }
  return;
}
