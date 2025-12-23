// Name: core_gore.cpp_FUN_004ebac0
// Address: 004ebac0
// Address Range: [[004ebac0, 004ebe5c] [004ec23c, 004ec280]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ebac0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_gore.cpp_FUN_004ebac0(uint param_1) */

void core_gore_cpp_FUN_004ebac0(void)

{
  SRenderVertex *output;
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000004;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  byte auStack_d8 [12];
  int local_cc;
  int local_c8;
  byte auStack_c0 [12];
  int local_b4;
  int local_b0;
  CVector3i CStack_a8;
  float fStack_9c;
  float fStack_98;
  CVector3i local_94;
  byte local_88 [8];
  int local_80;
  CVector3i local_7c;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  byte auStack_60 [12];
  int local_54;
  int local_50;
  uint local_4c;
  float local_48;
  float local_44;
  uint uStack_40;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  output = g_CDemonRendererPtr->vertex_buffer_ptr;
  auStack_60._8_4_ = (uint)ROUND(in_stack_00000004->x * _DAT_0065f024);
  local_54 = (int)ROUND(in_stack_00000004->y * _DAT_0065f024);
  local_50 = (int)ROUND(in_stack_00000004->z * _DAT_0065f024);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&output->projected_vertex,(CVector3i *)(auStack_60 + 8));
  if ((int)((output->projected_vertex).screen_x & -0x80000000) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,in_stack_00000004);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,(CVector3i *)&DAT_02d83390,(CVector3i *)0x0);
  local_4c = 0xbdcccccd;
  local_48 = -0.1;
  local_44 = 0.0;
  auStack_c0._8_4_ = (uint)ROUND(_DAT_0065f024 * -0.1);
  local_b4 = (int)ROUND(_DAT_0065f024 * -0.1);
  local_b0 = (int)ROUND(_DAT_0065f024 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(auStack_c0 + 8)
            );
  local_4c = 0x3dcccccd;
  local_48 = -0.1;
  local_44 = 0.0;
  local_7c.x = (int)ROUND(_DAT_0065f024 * 0.1);
  local_7c.y = (int)ROUND(_DAT_0065f024 * -0.1);
  local_7c.z = (int)ROUND(_DAT_0065f024 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_7c);
  local_4c = 0x3dcccccd;
  local_48 = 0.1;
  local_44 = 0.0;
  auStack_d8._8_4_ = (uint)ROUND(_DAT_0065f024 * 0.1);
  local_cc = (int)ROUND(_DAT_0065f024 * 0.1);
  local_c8 = (int)ROUND(_DAT_0065f024 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
             (CVector3i *)(auStack_d8 + 8));
  local_48 = 0.1;
  local_4c = 0xbdcccccd;
  local_44 = 0.0;
  local_94.x = (int)ROUND(_DAT_0065f024 * -0.1);
  local_94.y = (int)ROUND(_DAT_0065f024 * 0.1);
  local_94.z = (int)ROUND(_DAT_0065f024 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_94);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067b9b0);
  iVar3 = ((uint)in_stack_00000004[5].x & 3) * 0x400000;
  g_RenderVertexBuffer[0].u = (float)(iVar3 + 0x80000);
  iVar4 = ((int)in_stack_00000004[5].x >> 2 & 3U) * 0x400000;
  g_RenderVertexBuffer[1].u = (float)(iVar3 + 0x380000);
  g_RenderVertexBuffer[0].v = (float)(iVar4 + 0x80000);
  g_RenderVertexBuffer[2].v = (float)(iVar4 + 0x380000);
  local_88._0_4_ = (uint)ROUND(in_stack_00000004->x * _DAT_0065f024);
  local_88._4_4_ = (uint)ROUND(in_stack_00000004->y * _DAT_0065f024);
  local_80 = (int)ROUND(in_stack_00000004->z * _DAT_0065f024);
  g_RenderVertexBuffer[1].v = g_RenderVertexBuffer[0].v;
  g_RenderVertexBuffer[2].u = g_RenderVertexBuffer[1].u;
  g_RenderVertexBuffer[3].u = g_RenderVertexBuffer[0].u;
  g_RenderVertexBuffer[3].v = g_RenderVertexBuffer[2].v;
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,(CVector3i *)local_88,(CVector3i *)&DAT_02d8339c,0,4);
  fVar1 = in_stack_00000004[4].z;
  if (fVar1 != 0.0) {
    if ((uint)fVar1 < 2) {
      local_28 = 0;
      local_20 = 0x7f80;
      goto LAB_004ebdb7;
    }
    if (fVar1 == 2.8026e-45) {
      local_20 = 0;
      local_28 = 0;
      goto LAB_004ebdb7;
    }
  }
  local_28 = 0x2000;
  local_20 = 0;
LAB_004ebdb7:
  local_24 = 0;
  iVar3 = 0;
  do {
    lVar2 = (longlong)local_28 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].light + iVar3);
    *(uint *)((int)&g_RenderVertexBuffer[0].light + iVar3) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)local_20 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].color + iVar3);
    *(uint *)((int)&g_RenderVertexBuffer[0].color + iVar3) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar4 = iVar3 + 0x30;
    *(uint *)((int)&g_RenderVertexBuffer[0].fog + iVar3) = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0xc0);
  (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,0xffff - (int)g_PerspectiveReciprocal);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&DAT_02d83368);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  CStack_e4.x = in_stack_00000004->x;
  CStack_e4.y = in_stack_00000004->y;
  CStack_e4.z = in_stack_00000004->z;
  fStack_6c = in_stack_00000004[1].x;
  fStack_68 = in_stack_00000004[1].y;
  iVar3 = 0;
  fStack_ec = 1.0;
  fStack_64 = in_stack_00000004[1].z;
  fStack_e8 = 0.025;
  do {
    fStack_e8 = fStack_e8 * (float)0.69999999999999996;
    fStack_ec = (float)0.69999999999999996 * fStack_ec;
    fStack_9c = fStack_6c * fStack_e8;
    fStack_68 = fStack_68 - fStack_e8 * in_stack_00000004[2].y;
    local_94.x = (int)(fStack_64 * fStack_e8);
    fStack_98 = fStack_68 * fStack_e8;
    CStack_e4.x = CStack_e4.x - fStack_9c;
    CStack_e4.z = CStack_e4.z - (float)local_94.x;
    CStack_e4.y = CStack_e4.y - fStack_98;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&CStack_e4);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr,(CVector3i *)&DAT_02d83390,(CVector3i *)0x0);
    local_48 = fStack_ec * (float)-0.10000000000000001;
    uStack_40 = 0;
    auStack_d8._0_4_ = (uint)ROUND(local_48 * _DAT_0065f024);
    auStack_d8._4_4_ = (uint)ROUND(local_48 * _DAT_0065f024);
    auStack_d8._8_4_ = (uint)ROUND(_DAT_0065f024 * 0.0);
    local_44 = local_48;
    fStack_14 = local_48;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)auStack_d8);
    local_48 = fStack_ec * (float)0.10000000000000001;
    uStack_40 = 0;
    local_44 = fStack_14;
    CStack_a8.x = (int)ROUND(local_48 * _DAT_0065f024);
    CStack_a8.y = (int)ROUND(fStack_14 * _DAT_0065f024);
    CStack_a8.z = (int)ROUND(_DAT_0065f024 * 0.0);
    fStack_18 = local_48;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_a8);
    local_48 = fStack_18;
    local_44 = fStack_18;
    uStack_40 = 0;
    auStack_60._0_4_ = (uint)ROUND(fStack_18 * _DAT_0065f024);
    auStack_60._4_4_ = (uint)ROUND(fStack_18 * _DAT_0065f024);
    auStack_60._8_4_ = (uint)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)auStack_60);
    local_48 = fStack_14;
    uStack_40 = 0;
    local_44 = fStack_18;
    auStack_c0._0_4_ = (uint)ROUND(fStack_14 * _DAT_0065f024);
    auStack_c0._4_4_ = (uint)ROUND(fStack_18 * _DAT_0065f024);
    auStack_c0._8_4_ = (uint)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)auStack_c0);
    local_88._4_4_ = (uint)ROUND(CStack_e4.x * _DAT_0065f024);
    local_80 = (int)ROUND(CStack_e4.y * _DAT_0065f024);
    local_7c.x = (int)ROUND(CStack_e4.z * _DAT_0065f024);
    core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
              (g_CDemonSetPtr,(CVector3i *)(local_88 + 4),(CVector3i *)&DAT_02d8339c,0,4);
    iVar4 = 0;
    do {
      lVar2 = (longlong)local_24 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].light + iVar4);
      *(uint *)((int)&g_RenderVertexBuffer[0].light + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)iStack_1c * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].color + iVar4);
      *(uint *)((int)&g_RenderVertexBuffer[0].color + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar5 = iVar4 + 0x30;
      lVar2 = (longlong)local_20 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].fog + iVar4);
      *(uint *)((int)&g_RenderVertexBuffer[0].fog + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar5;
    } while (iVar5 != 0xc0);
    (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,0xffff - (int)g_PerspectiveReciprocal);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr,&DAT_02d83368);
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  } while (iVar3 < 3);
  return;
}
