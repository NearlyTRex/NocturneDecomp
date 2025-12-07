// Name: core_gore.cpp_FUN_004ec500
// Address: 004ec500
// Address Range: [[004ec500, 004ecac1]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ec500()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_gore.cpp_FUN_004ec500(uint param_1, uint param_2) */

void core_gore_cpp_FUN_004ec500(void)

{
  uint uVar1;
  CVector3i *input;
  BADSPACEBASE *in_ESP;
  double dVar2;
  uint *in_stack_00000004;
  int in_stack_00000008;
  CVector3i local_70;
  CVector3i local_64;
  byte local_50 [12];
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  CVector3i local_2c;
  int local_20;
  CVector3i local_1c;
  
  dVar2 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)in_stack_00000004[9] * (float)8 +
                             (float)4));
  local_1c.y = (int)ROUND(dVar2);
  if (local_1c.y < 0) {
    local_1c.y = 0;
  }
  else if ((0xf < local_1c.y) && (local_1c.y = 0xf, in_stack_00000008 != 0)) {
    *in_stack_00000004 = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(in_stack_00000004 + 1));
  if (in_stack_00000004[4] == 1) {
    DAT_02d83368.surface_normal.A = 0;
    DAT_02d83368.surface_normal.C = 0xffff;
    DAT_02d83368.surface_normal.B = 0;
    DAT_02d83368.surface_normal.D = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&DAT_0067ba28 + in_stack_00000004[10] * 0x10 + local_1c.z);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)(in_stack_00000004 + 6),(CVector3i *)0x0);
    local_70.x = -0x41000000;
    local_70.y = -0x41000000;
    local_70.z = 0;
    local_64.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_64.y = (int)ROUND(_DAT_0065f024 * -0.5);
    local_64.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_64);
    local_70.y = 0x3f000000;
    local_64.x = 0;
    local_70.z = -0x41000000;
    local_50._8_4_ = (uint)ROUND(_DAT_0065f024 * 0.5);
    local_44 = (int)ROUND(_DAT_0065f024 * -0.5);
    local_40 = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)(local_50 + 8));
    local_70.z = 0x3f000000;
    local_64.y = 0;
    local_64.x = 0x3f000000;
    local_2c.x = (int)ROUND(_DAT_0065f024 * 0.5);
    local_2c.y = (int)ROUND(_DAT_0065f024 * 0.5);
    local_2c.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_2c);
    local_64.x = -0x41000000;
    local_64.z = 0;
    local_64.y = 0x3f000000;
    local_70.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_70.y = (int)ROUND(_DAT_0065f024 * 0.5);
    local_70.z = (int)ROUND(_DAT_0065f024 * 0.0);
    input = &local_70;
  }
  else {
    if (in_stack_00000008 != 0) {
      *in_stack_00000004 = 1;
    }
    DAT_02d83368.surface_normal.B = 0xffff;
    DAT_02d83368.surface_normal.A = 0;
    DAT_02d83368.surface_normal.C = 0;
    DAT_02d83368.surface_normal.D = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&DAT_0067b9c8 + in_stack_00000004[10]);
    local_40 = -0x41000000;
    local_3c = 0;
    local_38 = 0xbf000000;
    local_20 = (int)ROUND(_DAT_0065f024 * -0.5);
    local_1c.x = (int)ROUND(_DAT_0065f024 * 0.0);
    local_1c.y = (int)ROUND(_DAT_0065f024 * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_1c);
    local_3c = 0x3f000000;
    local_34 = 0xbf000000;
    local_38 = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)&stack0xffffff7c);
    local_38 = 0x3f000000;
    local_34 = 0;
    local_30 = 0x3f000000;
    local_50._0_4_ = (uint)ROUND(_DAT_0065f024 * 0.5);
    local_50._4_4_ = (uint)ROUND(_DAT_0065f024 * 0.0);
    local_50._8_4_ = (uint)ROUND(_DAT_0065f024 * 0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_50);
    local_34 = 0xbf000000;
    local_2c.x = 0x3f000000;
    local_30 = 0;
    local_1c.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_1c.y = (int)ROUND(_DAT_0065f024 * 0.0);
    local_1c.z = (int)ROUND(_DAT_0065f024 * 0.5);
    input = &local_1c;
  }
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,input);
  uVar1 = in_stack_00000004[5];
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
  uVar1 = in_stack_00000004[5];
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
  uVar1 = in_stack_00000004[5];
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
  uVar1 = in_stack_00000004[5];
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
  if (in_stack_00000004[4] == 1) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    return;
  }
  return;
}
