// Name: core_gore.cpp_FUN_004ecce0
// Address: 004ecce0
// Address Range: [[004ecce0, 004ed09e]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecce0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_gore.cpp_FUN_004ecce0(uint param_1, uint param_2) */

void core_gore_cpp_FUN_004ecce0(void)

{
  uint uVar1;
  double dVar2;
  uint *in_stack_00000004;
  CVector3i CStack_54;
  CVector3i local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  CVector3i local_30;
  CVector3i local_24;
  int local_18;
  
  CStack_54.x = 0x4eccf9;
  dVar2 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)in_stack_00000004[6] * (float)8));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if ((0x1c < local_18) && (local_18 = 0x1c, in_stack_00000004 != (uint *)0x0)) {
    *in_stack_00000004 = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(in_stack_00000004 + 1));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&DAT_0067c028 + in_stack_00000004[5] * 0x1d + local_18);
  local_3c = 0xbfaa9fbe;
  local_34 = 0xbfaa9fbe;
  local_38 = 0;
  local_24.x = (int)ROUND(_DAT_0065f024 * -1.333);
  local_24.y = (int)ROUND(_DAT_0065f024 * 0.0);
  local_24.z = (int)ROUND(_DAT_0065f024 * -1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_24);
  local_3c = 0x3faa9fbe;
  local_38 = 0;
  local_34 = 0xbfaa9fbe;
  local_48.x = (int)ROUND(_DAT_0065f024 * 1.333);
  local_48.y = (int)ROUND(_DAT_0065f024 * 0.0);
  local_48.z = (int)ROUND(_DAT_0065f024 * -1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_48);
  local_3c = 0x3faa9fbe;
  local_34 = 0x3faa9fbe;
  local_38 = 0;
  local_30.x = (int)ROUND(_DAT_0065f024 * 1.333);
  local_30.y = (int)ROUND(_DAT_0065f024 * 0.0);
  local_30.z = (int)ROUND(_DAT_0065f024 * 1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_30);
  local_3c = 0xbfaa9fbe;
  local_38 = 0;
  local_34 = 0x3faa9fbe;
  CStack_54.x = (int)ROUND(_DAT_0065f024 * -1.333);
  CStack_54.y = (int)ROUND(_DAT_0065f024 * 0.0);
  CStack_54.z = (int)ROUND(_DAT_0065f024 * 1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&CStack_54);
  uVar1 = in_stack_00000004[4];
  if (uVar1 == 0) {
LAB_004eced9:
    g_RenderVertexBuffer[0].light = 1.14794e-41;
    g_RenderVertexBuffer[0].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[0].light = 0.0;
    g_RenderVertexBuffer[0].color = 0x7f80;
  }
  else {
    if (uVar1 != 2) goto LAB_004eced9;
    g_RenderVertexBuffer[0].color = 0;
    g_RenderVertexBuffer[0].light = 0.0;
  }
  g_RenderVertexBuffer[0].fog = 0.0;
  uVar1 = in_stack_00000004[4];
  if (uVar1 == 0) {
LAB_004ecf06:
    g_RenderVertexBuffer[1].light = 1.14794e-41;
    g_RenderVertexBuffer[1].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[1].color = 0x7f80;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ecf06;
    g_RenderVertexBuffer[1].color = 0;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  g_RenderVertexBuffer[1].fog = 0.0;
  uVar1 = in_stack_00000004[4];
  if (uVar1 == 0) {
LAB_004ecf33:
    g_RenderVertexBuffer[2].light = 1.14794e-41;
    g_RenderVertexBuffer[2].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[2].color = 0x7f80;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ecf33;
    g_RenderVertexBuffer[2].color = 0;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  g_RenderVertexBuffer[2].fog = 0.0;
  uVar1 = in_stack_00000004[4];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      g_RenderVertexBuffer[3].color = 0x7f80;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ecf83;
    }
    if (uVar1 == 2) {
      g_RenderVertexBuffer[3].color = 0;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ecf83;
    }
  }
  g_RenderVertexBuffer[3].light = 1.14794e-41;
  g_RenderVertexBuffer[3].color = 0;
LAB_004ecf83:
  g_RenderVertexBuffer[3].fog = 0.0;
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&DAT_02d83368);
  return;
}
