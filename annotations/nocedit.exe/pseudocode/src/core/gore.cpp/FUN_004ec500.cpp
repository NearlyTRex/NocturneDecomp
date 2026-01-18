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
  double dVar2;
  uint *in_stack_00000004;
  int in_stack_00000008;
  CVector3i CStack_90;
  CVector3i local_84;
  uint local_78;
  uint local_74;
  uint local_70;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  uint local_48;
  uint local_44;
  uint local_40;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3i local_24;
  int local_18;
  
  CStack_90.x = 0x4ec529;
  dVar2 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)in_stack_00000004[9] * (float)8 +
                             (float)4));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if ((0xf < local_18) && (local_18 = 0xf, in_stack_00000008 != 0)) {
    *in_stack_00000004 = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)(in_stack_00000004 + 1));
  if (in_stack_00000004[4] == 1) {
    DAT_02d83368.surface_normal.A = 0;
    DAT_02d83368.surface_normal.C = 0xffff;
    DAT_02d83368.surface_normal.B = 0;
    DAT_02d83368.surface_normal.D = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&DAT_0067ba28 + in_stack_00000004[10] * 0x10 + local_18);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,(CVector3i *)(in_stack_00000004 + 6),(CVector3i *)0x0);
    local_78 = 0xbf000000;
    local_74 = 0xbf000000;
    local_70 = 0;
    local_6c.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_6c.y = (int)ROUND(_DAT_0065f024 * -0.5);
    local_6c.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_6c);
    local_78 = 0x3f000000;
    local_70 = 0;
    local_74 = 0xbf000000;
    local_54.x = (int)ROUND(_DAT_0065f024 * 0.5);
    local_54.y = (int)ROUND(_DAT_0065f024 * -0.5);
    local_54.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_54);
    local_78 = 0x3f000000;
    local_70 = 0;
    local_74 = 0x3f000000;
    local_3c.x = (int)ROUND(_DAT_0065f024 * 0.5);
    local_3c.y = (int)ROUND(_DAT_0065f024 * 0.5);
    local_3c.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_78 = 0xbf000000;
    local_70 = 0;
    local_74 = 0x3f000000;
    local_84.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_84.y = (int)ROUND(_DAT_0065f024 * 0.5);
    local_84.z = (int)ROUND(_DAT_0065f024 * 0.0);
    input = &local_84;
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
              (g_CDemonRendererPtr2,&DAT_0067b9c8 + in_stack_00000004[10]);
    local_48 = 0xbf000000;
    local_44 = 0;
    local_40 = 0xbf000000;
    local_24.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_24.y = (int)ROUND(_DAT_0065f024 * 0.0);
    local_24.z = (int)ROUND(_DAT_0065f024 * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_24);
    local_48 = 0x3f000000;
    local_40 = 0xbf000000;
    local_44 = 0;
    CStack_90.x = (int)ROUND(_DAT_0065f024 * 0.5);
    CStack_90.y = (int)ROUND(_DAT_0065f024 * 0.0);
    CStack_90.z = (int)ROUND(_DAT_0065f024 * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_90);
    local_48 = 0x3f000000;
    local_44 = 0;
    local_40 = 0x3f000000;
    local_60.x = (int)ROUND(_DAT_0065f024 * 0.5);
    local_60.y = (int)ROUND(_DAT_0065f024 * 0.0);
    local_60.z = (int)ROUND(_DAT_0065f024 * 0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_60);
    local_48 = 0xbf000000;
    local_40 = 0x3f000000;
    local_44 = 0;
    local_30.x = (int)ROUND(_DAT_0065f024 * -0.5);
    local_30.y = (int)ROUND(_DAT_0065f024 * 0.0);
    local_30.z = (int)ROUND(_DAT_0065f024 * 0.5);
    input = &local_30;
  }
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,input);
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
            (g_CDemonRendererPtr2,&DAT_02d83368);
  if (in_stack_00000004[4] == 1) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    return;
  }
  return;
}
