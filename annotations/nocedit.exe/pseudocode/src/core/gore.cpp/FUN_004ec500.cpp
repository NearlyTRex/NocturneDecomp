// Name: core_gore.cpp_FUN_004ec500
// Address: 004ec500
// Address Range: [[004ec500, 004ecac1]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ec500()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_gore.cpp_FUN_004ec500(uint param_1, uint param_2) */

void core_gore_cpp_FUN_004ec500
               (uint param_1,uint param_2,uint param_3,uint param_4,
               uint *param_5,int param_6)

{
  uint uVar1;
  CVector3i *input;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float10 fVar2;
  CVector3i local_68;
  CVector3i local_5c;
  byte local_48 [12];
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  CVector3i local_24;
  int local_18;
  int local_14;
  
  fVar2 = (float10)(float)param_5[9] * (float10)8 + (float10)4;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(param_2,param_1));
  if (((-1 < (int)ROUND(fVar2)) && (0xf < (int)ROUND(fVar2))) && (param_6 != 0)) {
    *param_5 = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(param_5 + 1));
  if (param_5[4] == 1) {
    DAT_02d83368.surface_normal.A = 0;
    DAT_02d83368.surface_normal.C = 0xffff;
    DAT_02d83368.surface_normal.B = 0;
    DAT_02d83368.surface_normal.D = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&DAT_0067ba28 + param_5[10] * 0x10 + unaff_EDI);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)(param_5 + 6),(CVector3i *)0x0);
    local_68.x = -0x41000000;
    local_68.y = -0x41000000;
    local_68.z = 0;
    local_5c.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_5c.y = (int)ROUND(_DAT_0065f024 * -0.5);
    local_5c.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_5c);
    local_68.y = 0x3f000000;
    local_5c.x = 0;
    local_68.z = -0x41000000;
    local_48._8_4_ = (uint)ROUND(_DAT_0065f024 * 0.5);
    local_3c = (int)ROUND(_DAT_0065f024 * -0.5);
    local_38 = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)(local_48 + 8));
    local_68.z = 0x3f000000;
    local_5c.y = 0;
    local_5c.x = 0x3f000000;
    local_24.x = (int)ROUND(_DAT_0065f024 * 0.5);
    local_24.y = (int)ROUND(_DAT_0065f024 * 0.5);
    local_24.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_24);
    local_5c.x = -0x41000000;
    local_5c.z = 0;
    local_5c.y = 0x3f000000;
    local_68.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_68.y = (int)ROUND(_DAT_0065f024 * 0.5);
    local_68.z = (int)ROUND(_DAT_0065f024 * 0.0);
    input = &local_68;
  }
  else {
    if (param_6 != 0) {
      *param_5 = 1;
    }
    DAT_02d83368.surface_normal.B = 0xffff;
    DAT_02d83368.surface_normal.A = 0;
    DAT_02d83368.surface_normal.C = 0;
    DAT_02d83368.surface_normal.D = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&DAT_0067b9c8 + param_5[10]);
    local_38 = -0x41000000;
    local_34 = 0;
    local_30 = 0xbf000000;
    local_18 = (int)ROUND(_DAT_0065f024 * -0.5);
    local_14 = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_14);
    local_34 = 0x3f000000;
    local_2c = 0xbf000000;
    local_30 = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)&stack0xffffff84);
    local_30 = 0x3f000000;
    local_2c = 0;
    local_28 = 0x3f000000;
    local_48._0_4_ = (uint)ROUND(_DAT_0065f024 * 0.5);
    local_48._4_4_ = (uint)ROUND(_DAT_0065f024 * 0.0);
    local_48._8_4_ = (uint)ROUND(_DAT_0065f024 * 0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_48);
    local_2c = 0xbf000000;
    local_24.x = 0x3f000000;
    local_28 = 0;
    local_14 = (int)ROUND(_DAT_0065f024 * -0.5);
    input = (CVector3i *)&local_14;
  }
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,input);
  uVar1 = param_5[5];
  if (uVar1 == 0) {
LAB_004ec747:
    g_RenderVertexBuffer[0].light = 1.14794e-41;
    g_RenderVertexBuffer[0].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[0].color = 0x7f80;
    g_RenderVertexBuffer[0].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ec747;
    g_RenderVertexBuffer[0].color = 0;
    g_RenderVertexBuffer[0].light = 0.0;
  }
  g_RenderVertexBuffer[0].fog = 0.0;
  uVar1 = param_5[5];
  if (uVar1 == 0) {
LAB_004ec774:
    g_RenderVertexBuffer[1].light = 1.14794e-41;
    g_RenderVertexBuffer[1].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[1].color = 0x7f80;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ec774;
    g_RenderVertexBuffer[1].color = 0;
    g_RenderVertexBuffer[1].light = 0.0;
  }
  g_RenderVertexBuffer[1].fog = 0.0;
  uVar1 = param_5[5];
  if (uVar1 == 0) {
LAB_004ec7a1:
    g_RenderVertexBuffer[2].light = 1.14794e-41;
    g_RenderVertexBuffer[2].color = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[2].color = 0x7f80;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ec7a1;
    g_RenderVertexBuffer[2].color = 0;
    g_RenderVertexBuffer[2].light = 0.0;
  }
  g_RenderVertexBuffer[2].fog = 0.0;
  uVar1 = param_5[5];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      g_RenderVertexBuffer[3].color = 0x7f80;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ec7e0;
    }
    if (uVar1 == 2) {
      g_RenderVertexBuffer[3].color = 0;
      g_RenderVertexBuffer[3].light = 0.0;
      goto LAB_004ec7e0;
    }
  }
  g_RenderVertexBuffer[3].light = 1.14794e-41;
  g_RenderVertexBuffer[3].color = 0;
LAB_004ec7e0:
  g_RenderVertexBuffer[3].fog = 0.0;
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&DAT_02d83368);
  if (param_5[4] == 1) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    return;
  }
  return;
}
