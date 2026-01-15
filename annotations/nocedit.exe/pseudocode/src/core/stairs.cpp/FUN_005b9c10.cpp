// Name: core_stairs.cpp_FUN_005b9c10
// Address: 005b9c10
// Address Range: [[005b9c10, 005ba486]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b9c10()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_stairs.cpp_FUN_005b9c10(uint param_1) */

int core_stairs_cpp_FUN_005b9c10(void)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  byte bVar11;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_0000000c;
  SRenderVertex *in_stack_fffffeb8;
  SRenderVertex *in_stack_fffffebc;
  int aiStack_118 [7];
  uint uStack_fc;
  SMRGLHeaderPrimitive SStack_dc;
  int iStack_c4;
  int iStack_c0;
  CBoundingBox3D local_bc;
  CVector3i CStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3i CStack_84;
  CVector3i CStack_78;
  CVector3i CStack_6c;
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  char *pcStack_30;
  float *pfStack_2c;
  COrientation *pCStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  bVar11 = 0;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar2 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    uStack_fc = 0x5b9c61;
    this_ptr = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&local_bc);
    iStack_3c = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (iStack_3c != 0) {
      iVar2 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,&DAT_00684178);
      if (-1 < *(int *)(in_stack_00000004[1].actor_name + 0x14)) {
        iStack_1c = 0x60;
        iStack_20 = 0x90;
        iVar4 = 0x30;
        iVar8 = 0;
        do {
          fStack_90 = -*(float *)(in_stack_0000000c[1].actor_name + 8) * (float)0.5;
          fStack_8c = *(float *)in_stack_0000000c[1].actor_name * (float)iVar2;
          fStack_88 = (float)iVar2 * *(float *)(in_stack_0000000c[1].actor_name + 4);
          CStack_84.x = (int)ROUND(fStack_90 * _DAT_006634b0);
          CStack_84.y = (int)ROUND(fStack_8c * _DAT_006634b0);
          CStack_84.z = (int)ROUND(fStack_88 * _DAT_006634b0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x
                     + iVar8),&CStack_84);
          fStack_88 = fStack_88 + *(float *)(in_stack_0000000c[1].actor_name + 4);
          CStack_78.x = (int)ROUND(fStack_90 * _DAT_006634b0);
          CStack_78.y = (int)ROUND(fStack_8c * _DAT_006634b0);
          CStack_78.z = (int)ROUND(fStack_88 * _DAT_006634b0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x
                     + iVar4),&CStack_78);
          fStack_88 = fStack_88 - *(float *)(in_stack_0000000c[1].actor_name + 4);
          fStack_90 = fStack_90 + *(float *)(in_stack_0000000c[1].actor_name + 8);
          CStack_48.x = (int)ROUND(fStack_90 * _DAT_006634b0);
          CStack_48.y = (int)ROUND(fStack_8c * _DAT_006634b0);
          CStack_48.z = (int)ROUND(fStack_88 * _DAT_006634b0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x
                     + iStack_1c),&CStack_48);
          fStack_88 = fStack_88 + *(float *)(in_stack_0000000c[1].actor_name + 4);
          CStack_60.x = (int)ROUND(fStack_90 * _DAT_006634b0);
          CStack_60.y = (int)ROUND(fStack_8c * _DAT_006634b0);
          CStack_60.z = (int)ROUND(fStack_88 * _DAT_006634b0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x
                     + iStack_20),&CStack_60);
          iVar2 = iVar2 + 1;
          iVar8 = iVar8 + 0xc0;
          iStack_1c = iStack_1c + 0xc0;
          iVar4 = iVar4 + 0xc0;
          iStack_20 = iStack_20 + 0xc0;
        } while (iVar2 <= *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      iStack_14 = 0;
      g_ActiveRenderColor = 3;
      if (0 < *(int *)(in_stack_0000000c[1].actor_name + 0x14)) {
        iVar4 = 0x90;
        iStack_18 = 0x120;
        iStack_24 = 0xc0;
        iStack_c = 0;
        iStack_10 = 0x60;
        iVar2 = 0x30;
        do {
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iStack_10);
          piVar9 = aiStack_118;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iStack_c);
          puVar10 = (uint *)&stack0xfffffeb8;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,in_stack_fffffebc);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar4);
          piVar9 = aiStack_118;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar2);
          puVar10 = (uint *)&stack0xfffffeb8;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,in_stack_fffffebc);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar2);
          piVar9 = aiStack_118;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iStack_c);
          puVar10 = (uint *)&stack0xfffffeb8;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,in_stack_fffffebc);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar4);
          piVar9 = aiStack_118;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iStack_10);
          puVar10 = (uint *)&stack0xfffffeb8;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,in_stack_fffffebc);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iStack_24);
          piVar9 = aiStack_118;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar2);
          puVar10 = (uint *)&stack0xfffffeb8;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,in_stack_fffffebc);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iStack_18);
          piVar9 = aiStack_118;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
          }
          iVar2 = iVar2 + 0xc0;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar4);
          puVar10 = (uint *)&stack0xfffffeb8;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,in_stack_fffffebc);
          iVar4 = iVar4 + 0xc0;
          iStack_18 = iStack_18 + 0xc0;
          iStack_24 = iStack_24 + 0xc0;
          iStack_c = iStack_c + 0xc0;
          iStack_10 = iStack_10 + 0xc0;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
      pSVar6 = pSVar7 + *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4 + 2;
      piVar9 = aiStack_118;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar9 = (pSVar6->projected_vertex).transformed_x;
        pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar11 * -2 + 1) * 4);
        piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
      }
      pSVar7 = pSVar7 + *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4;
      piVar9 = (int *)&stack0xfffffeb8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar9 = (pSVar7->projected_vertex).transformed_x;
        pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar11 * -2 + 1) * 4);
        piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
      }
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb8,in_stack_fffffebc);
      SStack_dc.base.count = 4;
      SStack_dc.surface_normal.D = 0;
      SStack_dc.surface_normal.C = 0;
      SStack_dc.surface_normal.B = 0;
      SStack_dc.surface_normal.A = 0;
      uStack_38 = 0;
      uStack_34 = 0xff00;
      iVar2 = 0;
      for (iVar4 = 0; pCVar1 = g_CDemonRendererPtr,
          iVar4 <= *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4; iVar4 = iVar4 + 1) {
        *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar2) = 0;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar2) = 0;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar2) = 0xff00;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar2) = 0x8000;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->u + iVar2) = 0x800000;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar2) = 0x800000;
        iVar2 = iVar2 + 0x30;
      }
      iVar2 = 0;
      if (0 < *(int *)(in_stack_0000000c[1].actor_name + 0x14)) {
        iVar4 = 0;
        do {
          local_bc.min.y = (float)(iVar4 + 2);
          iStack_c4 = iVar4;
          iStack_c0 = iVar4 + 1;
          local_bc.min.x = (float)(iVar4 + 3);
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr,&SStack_dc);
          local_bc.min.x = (float)(iVar4 + 6);
          iStack_c4 = iVar4 + 1;
          iStack_c0 = iVar4 + 4;
          local_bc.min.y = (float)(iVar4 + 3);
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr,&SStack_dc);
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      SStack_dc.base.count = 3;
      SStack_dc.surface_normal.D = 0;
      SStack_dc.surface_normal.C = 0;
      SStack_dc.surface_normal.B = 0;
      local_bc.min.x = 2.8026e-45;
      SStack_dc.surface_normal.A = 0;
      pcStack_30 = in_stack_0000000c[1].actor_name + 0x18;
      iStack_c4 = 0;
      iStack_c0 = 1;
      pCStack_28 = &in_stack_0000000c[1].orient;
      pfStack_2c = &in_stack_0000000c[1].location.position.y;
      for (iStack_8 = 0; iStack_8 < *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 2;
          iStack_8 = iStack_8 + 1) {
        pcVar3 = pcStack_30 + iStack_8 * 0x38;
        CStack_6c.x = (int)ROUND(*(float *)pcVar3 * _DAT_006634b0);
        CStack_6c.y = (int)ROUND(*(float *)(pcVar3 + 4) * _DAT_006634b0);
        CStack_6c.z = (int)ROUND((((CLocation *)(pcVar3 + 8))->position).x * _DAT_006634b0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_6c);
        CStack_9c.x = (int)ROUND(*pfStack_2c * _DAT_006634b0);
        CStack_9c.y = (int)ROUND(pfStack_2c[1] * _DAT_006634b0);
        CStack_9c.z = (int)ROUND(pfStack_2c[2] * _DAT_006634b0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_9c);
        CStack_54.x = (int)ROUND(pCStack_28->pitch * _DAT_006634b0);
        CStack_54.y = (int)ROUND(pCStack_28->bank * _DAT_006634b0);
        CStack_54.z = (int)ROUND(pCStack_28->heading * _DAT_006634b0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_54);
        iVar2 = 0;
        do {
          pCVar1 = g_CDemonRendererPtr;
          *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar2) = 0;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar2) = 0xff00;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar2) = 0;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar2) = 0x8000;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->u + iVar2) = 0x800000;
          iVar4 = iVar2 + 0x30;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar2) = 0x800000;
          iVar2 = iVar4;
        } while (iVar4 != 0x90);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(pCVar1,&SStack_dc);
        pCStack_28 = (COrientation *)((int)(pCStack_28 + 4) + 8);
        pfStack_2c = pfStack_2c + 0xe;
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
    return iStack_3c;
  }
  return 0;
}
