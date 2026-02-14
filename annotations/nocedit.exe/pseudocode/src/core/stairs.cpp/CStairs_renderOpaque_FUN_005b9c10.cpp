// Name: core_stairs.cpp_CStairs_renderOpaque_FUN_005b9c10
// Address: 005b9c10
// Address Range: [[005b9c10, 005ba486]]
// Convention: __cdecl
// Signature: int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_114 */
/* WARNING: Variable defined which should be unmapped: local_144 */

int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)

{
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  SRenderVertex vertex2_02;
  SRenderVertex vertex2_03;
  SRenderVertex vertex2_04;
  SRenderVertex vertex2_05;
  CDemonRenderer *pCVar1;
  byte auVar2 [28];
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  char *pcVar4;
  int iVar5;
  uint *puVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  float *pfVar10;
  uint *puVar11;
  int *piVar12;
  byte bVar13;
  CDemonActor *in_stack_0000000c;
  byte auStack_148 [4];
  SRenderVertex local_144;
  SRenderVertex local_114;
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
  UOrientationVector *pUStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  bVar13 = 0;
  if ((g_CDemonMissionPtr->is_in_editor != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_bc);
    iStack_3c = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iStack_3c != 0) {
      local_114.fog = (int)&SMRGLTextureBasic_00684178;
      local_114.color = (int)g_CDemonRendererPtr2;
      iVar3 = 0;
      local_114.light = 0x5b9c8f;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&SMRGLTextureBasic_00684178);
      if (-1 < this_ptr->stair_count) {
        iStack_1c = 0x60;
        iStack_20 = 0x90;
        iVar5 = 0x30;
        iVar9 = 0;
        do {
          fStack_90 = -*(float *)(in_stack_0000000c[1].actor_name + 8) * (float)0.5;
          fStack_8c = *(float *)in_stack_0000000c[1].actor_name * (float)iVar3;
          fStack_88 = (float)iVar3 * *(float *)(in_stack_0000000c[1].actor_name + 4);
          CStack_84.x = (int)ROUND(fStack_90 * 256.0f);
          CStack_84.y = (int)ROUND(fStack_8c * 256.0f);
          CStack_84.z = (int)ROUND(fStack_88 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                            transformed_x + iVar9),&CStack_84);
          fStack_88 = fStack_88 + *(float *)(in_stack_0000000c[1].actor_name + 4);
          CStack_78.x = (int)ROUND(fStack_90 * 256.0f);
          CStack_78.y = (int)ROUND(fStack_8c * 256.0f);
          CStack_78.z = (int)ROUND(fStack_88 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                            transformed_x + iVar5),&CStack_78);
          fStack_88 = fStack_88 - *(float *)(in_stack_0000000c[1].actor_name + 4);
          fStack_90 = fStack_90 + *(float *)(in_stack_0000000c[1].actor_name + 8);
          CStack_48.x = (int)ROUND(fStack_90 * 256.0f);
          CStack_48.y = (int)ROUND(fStack_8c * 256.0f);
          CStack_48.z = (int)ROUND(fStack_88 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                            transformed_x + iStack_1c),&CStack_48);
          fStack_88 = fStack_88 + *(float *)(in_stack_0000000c[1].actor_name + 4);
          CStack_60.x = (int)ROUND(fStack_90 * 256.0f);
          CStack_60.y = (int)ROUND(fStack_8c * 256.0f);
          CStack_60.z = (int)ROUND(fStack_88 * 256.0f);
          local_114.fog = (int)&CStack_60;
          local_114.color =
               (int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               iStack_20;
          local_114.light = 0x5b9e6a;
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)local_114.color,(CVector3i *)local_114.fog);
          iVar3 = iVar3 + 1;
          iVar9 = iVar9 + 0xc0;
          iStack_1c = iStack_1c + 0xc0;
          iVar5 = iVar5 + 0xc0;
          iStack_20 = iStack_20 + 0xc0;
        } while (iVar3 <= *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      iStack_14 = 0;
      g_ActiveRenderColor = 3;
      if (0 < *(int *)(in_stack_0000000c[1].actor_name + 0x14)) {
        iVar5 = 0x90;
        iStack_18 = 0x120;
        iStack_24 = 0xc0;
        iStack_c = 0;
        iStack_10 = 0x60;
        iVar3 = 0x30;
        do {
          pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iStack_10);
          pfVar10 = &local_144.w_recip;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar10 = (float)*puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
          }
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iStack_c);
          puVar11 = (uint *)auStack_148;
          for (iVar9 = 0xc; auVar2 = stack0xfffffee8, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          }
          vertex2.v = 0x5b9c61;
          vertex2.projected_vertex.transformed_x = (int)local_144.w_recip;
          vertex2.projected_vertex.transformed_y = local_114.projected_vertex.transformed_x;
          vertex2.projected_vertex.transformed_z = local_114.projected_vertex.transformed_y;
          vertex2.projected_vertex.inv_z = local_114.projected_vertex.transformed_z;
          vertex2.projected_vertex.screen_x = local_114.projected_vertex.inv_z;
          vertex2.projected_vertex.screen_y = local_114.projected_vertex.screen_x;
          vertex2.u = local_114.projected_vertex.screen_y;
          vertex2.light = (int)this_ptr;
          vertex2.color = local_114.light;
          vertex2.fog = local_114.color;
          vertex2.w_recip = (float)local_114.fog;
          unique0x1000147d = auVar2;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(_auStack_148,vertex2);
          pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iVar5);
          pfVar10 = &local_144.w_recip;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar10 = (float)*puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
          }
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iVar3);
          puVar11 = (uint *)auStack_148;
          for (iVar9 = 0xc; auVar2 = stack0xfffffee8, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          }
          vertex2_00.v = 0x5b9c61;
          vertex2_00.projected_vertex.transformed_x = (int)local_144.w_recip;
          vertex2_00.projected_vertex.transformed_y = local_114.projected_vertex.transformed_x;
          vertex2_00.projected_vertex.transformed_z = local_114.projected_vertex.transformed_y;
          vertex2_00.projected_vertex.inv_z = local_114.projected_vertex.transformed_z;
          vertex2_00.projected_vertex.screen_x = local_114.projected_vertex.inv_z;
          vertex2_00.projected_vertex.screen_y = local_114.projected_vertex.screen_x;
          vertex2_00.u = local_114.projected_vertex.screen_y;
          vertex2_00.light = (int)this_ptr;
          vertex2_00.color = local_114.light;
          vertex2_00.fog = local_114.color;
          vertex2_00.w_recip = (float)local_114.fog;
          unique0x10001499 = auVar2;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(_auStack_148,vertex2_00);
          pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iVar3);
          pfVar10 = &local_144.w_recip;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar10 = (float)*puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
          }
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iStack_c);
          puVar11 = (uint *)auStack_148;
          for (iVar9 = 0xc; auVar2 = stack0xfffffee8, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          }
          vertex2_01.v = 0x5b9c61;
          vertex2_01.projected_vertex.transformed_x = (int)local_144.w_recip;
          vertex2_01.projected_vertex.transformed_y = local_114.projected_vertex.transformed_x;
          vertex2_01.projected_vertex.transformed_z = local_114.projected_vertex.transformed_y;
          vertex2_01.projected_vertex.inv_z = local_114.projected_vertex.transformed_z;
          vertex2_01.projected_vertex.screen_x = local_114.projected_vertex.inv_z;
          vertex2_01.projected_vertex.screen_y = local_114.projected_vertex.screen_x;
          vertex2_01.u = local_114.projected_vertex.screen_y;
          vertex2_01.light = (int)this_ptr;
          vertex2_01.color = local_114.light;
          vertex2_01.fog = local_114.color;
          vertex2_01.w_recip = (float)local_114.fog;
          unique0x100014b5 = auVar2;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(_auStack_148,vertex2_01);
          pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iVar5);
          pfVar10 = &local_144.w_recip;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar10 = (float)*puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
          }
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iStack_10);
          puVar11 = (uint *)auStack_148;
          for (iVar9 = 0xc; auVar2 = stack0xfffffee8, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          }
          vertex2_02.v = 0x5b9c61;
          vertex2_02.projected_vertex.transformed_x = (int)local_144.w_recip;
          vertex2_02.projected_vertex.transformed_y = local_114.projected_vertex.transformed_x;
          vertex2_02.projected_vertex.transformed_z = local_114.projected_vertex.transformed_y;
          vertex2_02.projected_vertex.inv_z = local_114.projected_vertex.transformed_z;
          vertex2_02.projected_vertex.screen_x = local_114.projected_vertex.inv_z;
          vertex2_02.projected_vertex.screen_y = local_114.projected_vertex.screen_x;
          vertex2_02.u = local_114.projected_vertex.screen_y;
          vertex2_02.light = (int)this_ptr;
          vertex2_02.color = local_114.light;
          vertex2_02.fog = local_114.color;
          vertex2_02.w_recip = (float)local_114.fog;
          unique0x100014d1 = auVar2;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(_auStack_148,vertex2_02);
          pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iStack_24);
          pfVar10 = &local_144.w_recip;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar10 = (float)*puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
          }
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iVar3);
          puVar11 = (uint *)auStack_148;
          for (iVar9 = 0xc; auVar2 = stack0xfffffee8, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          }
          vertex2_03.v = 0x5b9c61;
          vertex2_03.projected_vertex.transformed_x = (int)local_144.w_recip;
          vertex2_03.projected_vertex.transformed_y = local_114.projected_vertex.transformed_x;
          vertex2_03.projected_vertex.transformed_z = local_114.projected_vertex.transformed_y;
          vertex2_03.projected_vertex.inv_z = local_114.projected_vertex.transformed_z;
          vertex2_03.projected_vertex.screen_x = local_114.projected_vertex.inv_z;
          vertex2_03.projected_vertex.screen_y = local_114.projected_vertex.screen_x;
          vertex2_03.u = local_114.projected_vertex.screen_y;
          vertex2_03.light = (int)this_ptr;
          vertex2_03.color = local_114.light;
          vertex2_03.fog = local_114.color;
          vertex2_03.w_recip = (float)local_114.fog;
          unique0x100014ed = auVar2;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(_auStack_148,vertex2_03);
          pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iStack_18);
          pfVar10 = &local_144.w_recip;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar10 = (float)*puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
          }
          iVar3 = iVar3 + 0xc0;
          puVar6 = (uint *)((int)&(pSVar8->projected_vertex).transformed_x + iVar5);
          puVar11 = (uint *)auStack_148;
          for (iVar9 = 0xc; auVar2 = stack0xfffffee8, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + (uint)bVar13 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          }
          vertex2_04.v = 0x5b9c61;
          vertex2_04.projected_vertex.transformed_x = (int)local_144.w_recip;
          vertex2_04.projected_vertex.transformed_y = local_114.projected_vertex.transformed_x;
          vertex2_04.projected_vertex.transformed_z = local_114.projected_vertex.transformed_y;
          vertex2_04.projected_vertex.inv_z = local_114.projected_vertex.transformed_z;
          vertex2_04.projected_vertex.screen_x = local_114.projected_vertex.inv_z;
          vertex2_04.projected_vertex.screen_y = local_114.projected_vertex.screen_x;
          vertex2_04.u = local_114.projected_vertex.screen_y;
          vertex2_04.light = (int)this_ptr;
          vertex2_04.color = local_114.light;
          vertex2_04.fog = local_114.color;
          vertex2_04.w_recip = (float)local_114.fog;
          unique0x10001509 = auVar2;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(_auStack_148,vertex2_04);
          iVar5 = iVar5 + 0xc0;
          iStack_18 = iStack_18 + 0xc0;
          iStack_24 = iStack_24 + 0xc0;
          iStack_c = iStack_c + 0xc0;
          iStack_10 = iStack_10 + 0xc0;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < *(int *)(in_stack_0000000c[1].actor_name + 0x14));
      }
      pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      pSVar7 = pSVar8 + *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4 + 2;
      pfVar10 = &local_144.w_recip;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar10 = (float)(pSVar7->projected_vertex).transformed_x;
        pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar13 * -2 + 1) * 4);
        pfVar10 = (float *)((int *)pfVar10 + (uint)bVar13 * -2 + 1);
      }
      pSVar8 = pSVar8 + *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4;
      piVar12 = (int *)auStack_148;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar12 = (pSVar8->projected_vertex).transformed_x;
        pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar13 * -2 + 1) * 4);
        piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
      }
      vertex2_05.v = 0x5b9c61;
      vertex2_05.projected_vertex.transformed_x = (int)local_144.w_recip;
      vertex2_05.projected_vertex.transformed_y = local_114.projected_vertex.transformed_x;
      vertex2_05.projected_vertex.transformed_z = local_114.projected_vertex.transformed_y;
      vertex2_05.projected_vertex.inv_z = local_114.projected_vertex.transformed_z;
      vertex2_05.projected_vertex.screen_x = local_114.projected_vertex.inv_z;
      vertex2_05.projected_vertex.screen_y = local_114.projected_vertex.screen_x;
      vertex2_05.u = local_114.projected_vertex.screen_y;
      vertex2_05.light = (int)this_ptr;
      vertex2_05.color = local_114.light;
      vertex2_05.fog = local_114.color;
      vertex2_05.w_recip = (float)local_114.fog;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(_auStack_148,vertex2_05);
      SStack_dc.base.count = 4;
      SStack_dc.surface_normal.D = 0;
      SStack_dc.surface_normal.C = 0;
      SStack_dc.surface_normal.B = 0;
      SStack_dc.surface_normal.A = 0;
      uStack_38 = 0;
      uStack_34 = 0xff00;
      iVar3 = 0;
      for (iVar5 = 0; pCVar1 = g_CDemonRendererPtr2,
          iVar5 <= *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 4; iVar5 = iVar5 + 1) {
        *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->light + iVar3) = 0;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = 0;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = 0xff00;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar3) = 0x8000;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->u + iVar3) = 0x800000;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar3) = 0x800000;
        iVar3 = iVar3 + 0x30;
      }
      iVar3 = 0;
      if (0 < *(int *)(in_stack_0000000c[1].actor_name + 0x14)) {
        iVar5 = 0;
        do {
          local_bc.min.y = (float)(iVar5 + 2);
          iStack_c4 = iVar5;
          iStack_c0 = iVar5 + 1;
          local_bc.min.x = (float)(iVar5 + 3);
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr2,&SStack_dc);
          local_bc.min.x = (float)(iVar5 + 6);
          iStack_c4 = iVar5 + 1;
          iStack_c0 = iVar5 + 4;
          local_bc.min.y = (float)(iVar5 + 3);
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr2,&SStack_dc);
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar3 < *(int *)(in_stack_0000000c[1].actor_name + 0x14));
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
      pUStack_28 = &in_stack_0000000c[1].orient;
      pfStack_2c = &in_stack_0000000c[1].location.position.y;
      for (iStack_8 = 0; iStack_8 < *(int *)(in_stack_0000000c[1].actor_name + 0x14) * 2;
          iStack_8 = iStack_8 + 1) {
        pcVar4 = pcStack_30 + iStack_8 * 0x38;
        CStack_6c.x = (int)ROUND(*(float *)pcVar4 * 256.0f);
        CStack_6c.y = (int)ROUND(*(float *)(pcVar4 + 4) * 256.0f);
        CStack_6c.z = (int)ROUND((((CLocation *)(pcVar4 + 8))->position).x * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_6c);
        CStack_9c.x = (int)ROUND(*pfStack_2c * 256.0f);
        CStack_9c.y = (int)ROUND(pfStack_2c[1] * 256.0f);
        CStack_9c.z = (int)ROUND(pfStack_2c[2] * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_9c);
        CStack_54.x = (int)ROUND((pUStack_28->vec).x * 256.0f);
        CStack_54.y = (int)ROUND((pUStack_28->vec).y * 256.0f);
        CStack_54.z = (int)ROUND((pUStack_28->vec).z * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_54);
        iVar3 = 0;
        do {
          pCVar1 = g_CDemonRendererPtr2;
          *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->light + iVar3) = 0;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = 0xff00;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = 0;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar3) = 0x8000;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->u + iVar3) = 0x800000;
          iVar5 = iVar3 + 0x30;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar3) = 0x800000;
          iVar3 = iVar5;
        } while (iVar5 != 0x90);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(pCVar1,&SStack_dc);
        pUStack_28 = (UOrientationVector *)((int)pUStack_28 + 0x38);
        pfStack_2c = pfStack_2c + 0xe;
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
    return iStack_3c;
  }
  return 0;
}
