// Name: core_gore.cpp_FUN_004ecce0
// Address: 004ecce0
// Address Range: [[004ecce0, 004ed09e]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecce0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_gore.cpp_FUN_004ecce0(uint param_1, uint param_2) */

void core_gore_cpp_FUN_004ecce0
               (uint param_1,uint param_2,uint param_3,uint param_4,
               uint *param_5,uint param_6,int param_7)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float10 fVar2;
  CVector3i local_34;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  fVar2 = (float10)(float)param_5[6] * (float10)8;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(param_2,param_1));
  if (((-1 < (int)ROUND(fVar2)) && (0x1c < (int)ROUND(fVar2))) && (param_7 != 0)) {
    *param_5 = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(param_5 + 1));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&DAT_0067c028 + param_5[5] * 0x1d + unaff_EDI);
  local_34.z = -0x40556042;
  local_24 = 0xbfaa9fbe;
  local_28 = 0;
  local_14 = (int)ROUND(_DAT_0065f024 * -1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_14);
  local_28 = 0x3faa9fbe;
  local_24 = 0;
  local_20 = 0xbfaa9fbe;
  local_34.x = (int)ROUND(_DAT_0065f024 * 1.333);
  local_34.y = (int)ROUND(_DAT_0065f024 * 0.0);
  local_34.z = (int)ROUND(_DAT_0065f024 * -1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_34);
  local_24 = 0x3faa9fbe;
  local_1c = 0x3faa9fbe;
  local_20 = 0;
  local_18 = (int)ROUND(_DAT_0065f024 * 1.333);
  local_14 = (int)ROUND(_DAT_0065f024 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)&local_18);
  local_20 = 0xbfaa9fbe;
  local_1c = 0;
  local_18 = 0x3faa9fbe;
  local_34.x = (int)ROUND(_DAT_0065f024 * 0.0);
  local_34.y = (int)ROUND(_DAT_0065f024 * 1.333);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
             (CVector3i *)&stack0xffffffc8);
  uVar1 = param_5[4];
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
  uVar1 = param_5[4];
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
  uVar1 = param_5[4];
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
  uVar1 = param_5[4];
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
