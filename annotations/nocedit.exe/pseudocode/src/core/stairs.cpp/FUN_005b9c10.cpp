// Name: core_stairs.cpp_FUN_005b9c10
// Address: 005b9c10
// Address Range: [[005b9c10, 005ba486]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b9c10()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_stairs.cpp_FUN_005b9c10(uint param_1) */

uint core_stairs_cpp_FUN_005b9c10(void)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  byte bVar11;
  float *unaff_retaddr;
  CDemonActor *in_stack_00000008;
  int iStack0000000c;
  int iStack00000010;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  CDemonActor *in_stack_0000002c;
  SRenderVertex *in_stack_fffffec0;
  SRenderVertex *in_stack_fffffec4;
  SRenderVertex *in_stack_fffffec8;
  SRenderVertex *in_stack_fffffecc;
  SRenderVertex *in_stack_fffffed0;
  SRenderVertex *in_stack_fffffed4;
  SRenderVertex *in_stack_fffffed8;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  int aiStack_fc [2];
  uint uStack_f4;
  byte local_bc [12];
  SMRGLHeaderPrimitive SStack_b0;
  int iStack_98;
  float fStack_80;
  float fStack_7c;
  CVector3i CStack_78;
  float fStack_6c;
  CVector3i aCStack_68 [2];
  byte auStack_4c [8];
  int iStack_44;
  int iStack_40;
  byte auStack_34 [12];
  int iStack_28;
  int iStack_24;
  uint uStack_18;
  uint uStack_14;
  char *pcStack_10;
  float *pfStack_c;
  COrientation *pCStack_8;
  
  bVar11 = 0;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar2 == 0)) {
    uStack_f4 = 0x5b9c4f;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000008);
    uStack_f4 = 0x5b9c61;
    this_ptr = (*in_stack_00000008->vtable->getBoundingBox)
                         (in_stack_00000008,(CBoundingBox3D *)(local_bc + 8));
    iStack_24 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (iStack_24 != 0) {
      iVar2 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,&DAT_00684178);
      if (-1 < *(int *)(in_stack_00000008[1].actor_name + 0x14)) {
        unaff_retaddr = (float *)0x60;
        iVar3 = 0x30;
        iVar8 = 0;
        do {
          CStack_78.y = (int)(-*(float *)(in_stack_00000028 + 0x160) * (float)0.5);
          CStack_78.z = (int)(*(float *)(in_stack_00000028 + 0x158) * (float)iVar2);
          fStack_6c = (float)iVar2 * *(float *)(in_stack_00000028 + 0x15c);
          aCStack_68[0].x = (int)ROUND((float)CStack_78.y * _DAT_006634b0);
          aCStack_68[0].y = (int)ROUND((float)CStack_78.z * _DAT_006634b0);
          aCStack_68[0].z = (int)ROUND(fStack_6c * _DAT_006634b0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x
                     + iVar8),aCStack_68);
          CStack_78.x = (int)((float)CStack_78.x + *(float *)(iVar2 + 0x15c));
          aCStack_68[0].x = (int)ROUND(fStack_80 * _DAT_006634b0);
          aCStack_68[0].y = (int)ROUND(fStack_7c * _DAT_006634b0);
          aCStack_68[0].z = (int)ROUND((float)CStack_78.x * _DAT_006634b0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x
                     + iVar3),aCStack_68);
          CStack_78.y = (int)((float)CStack_78.y - *(float *)(in_stack_00000020 + 0x15c));
          fStack_7c = fStack_7c + *(float *)(in_stack_00000020 + 0x160);
          auStack_34._0_4_ = (uint)ROUND(fStack_7c * _DAT_006634b0);
          auStack_34._4_4_ = (uint)ROUND((float)CStack_78.x * _DAT_006634b0);
          auStack_34._8_4_ = (uint)ROUND((float)CStack_78.y * _DAT_006634b0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&pCStack_8->pitch + (int)g_CDemonRendererPtr->vertex_buffer_ptr),
                     (CVector3i *)auStack_34);
          CStack_78.z = (int)((float)CStack_78.z + *(float *)(in_stack_00000024 + 0x15c));
          auStack_4c._4_4_ = (uint)ROUND((float)CStack_78.x * _DAT_006634b0);
          iStack_44 = (int)ROUND((float)CStack_78.y * _DAT_006634b0);
          iStack_40 = (int)ROUND((float)CStack_78.z * _DAT_006634b0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&pCStack_8->pitch + (int)g_CDemonRendererPtr->vertex_buffer_ptr),
                     (CVector3i *)(auStack_4c + 4));
          iVar2 = iVar2 + 1;
          iVar8 = iVar8 + 0xc0;
          unaff_retaddr = unaff_retaddr + 0x30;
          iVar3 = iVar3 + 0xc0;
        } while (iVar2 <= *(int *)(in_stack_00000028 + 0x16c));
      }
      in_stack_00000008 = (CDemonActor *)0x0;
      g_ActiveRenderColor = 3;
      if (0 < *(int *)(in_stack_00000028 + 0x16c)) {
        iVar3 = 0x90;
        pCStack_8 = (COrientation *)0xc0;
        iStack00000010 = 0;
        iStack0000000c = 0x60;
        iVar2 = 0x30;
        do {
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iStack0000000c);
          piVar10 = aiStack_fc;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar10 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iStack00000010);
          puVar9 = (uint *)&stack0xfffffed4;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffed4,in_stack_fffffed8);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar3);
          puVar9 = &uStack_110;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar2);
          puVar9 = (uint *)&stack0xfffffec0;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffec0,in_stack_fffffec4);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar2);
          puVar9 = &uStack_10c;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (uint *)((int)unaff_retaddr + (int)pSVar7);
          puVar9 = (uint *)&stack0xfffffec4;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          in_stack_fffffec0 = (SRenderVertex *)0x5b9fb6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffec4,in_stack_fffffec8);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar3);
          puVar9 = &uStack_108;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (uint *)((int)unaff_retaddr + (int)pSVar7);
          puVar9 = (uint *)&stack0xfffffec8;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          in_stack_fffffec4 = (SRenderVertex *)0x5b9fe9;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffec8,in_stack_fffffecc);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pcVar4 = pcStack_10 + (int)pSVar7;
          puVar5 = &uStack_104;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar5 = *(uint *)pcVar4;
            pcVar4 = pcVar4 + (uint)bVar11 * -8 + 4;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar2);
          puVar9 = (uint *)&stack0xfffffecc;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          in_stack_fffffec8 = (SRenderVertex *)0x5ba01c;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffecc,in_stack_fffffed0);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (uint *)((int)unaff_retaddr + (int)pSVar7);
          puVar9 = &uStack_100;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          iVar2 = iVar2 + 0xc0;
          puVar5 = (uint *)((int)&(pSVar7->projected_vertex).transformed_x + iVar3);
          puVar9 = (uint *)&stack0xfffffed0;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          in_stack_fffffecc = (SRenderVertex *)0x5ba055;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffed0,in_stack_fffffed4);
          iVar3 = iVar3 + 0xc0;
          pCStack_8 = pCStack_8 + 0x10;
          iStack00000010 = iStack00000010 + 0xc0;
          iStack0000000c = iStack0000000c + 0xc0;
          in_stack_00000008 = (CDemonActor *)((int)in_stack_00000008 + 1);
        } while ((int)in_stack_00000008 < *(int *)(in_stack_00000028 + 0x16c));
      }
      pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
      pSVar6 = pSVar7 + *(int *)(in_stack_00000028 + 0x16c) * 4 + 2;
      piVar10 = aiStack_fc;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar10 = (pSVar6->projected_vertex).transformed_x;
        pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar11 * -2 + 1) * 4);
        piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
      }
      pSVar7 = pSVar7 + *(int *)(in_stack_00000028 + 0x16c) * 4;
      piVar10 = (int *)&stack0xfffffed4;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar10 = (pSVar7->projected_vertex).transformed_x;
        pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar11 * -2 + 1) * 4);
        piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
      }
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffed4,in_stack_fffffed8);
      local_bc._4_4_ = 4;
      SStack_b0.surface_normal.A = 0;
      SStack_b0.base.count = 0;
      SStack_b0.base.type = 0;
      local_bc._8_4_ = 0;
      uStack_18 = 0;
      uStack_14 = 0xff00;
      iVar2 = 0;
      for (iVar3 = 0; pCVar1 = g_CDemonRendererPtr,
          iVar3 <= *(int *)(in_stack_0000002c[1].actor_name + 0x14) * 4; iVar3 = iVar3 + 1) {
        *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar2) = 0;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar2) = 0;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar2) = 0xff00;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar2) = 0x8000;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->u + iVar2) = 0x800000;
        *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar2) = 0x800000;
        iVar2 = iVar2 + 0x30;
      }
      iVar2 = 0;
      if (0 < *(int *)(in_stack_0000002c[1].actor_name + 0x14)) {
        iVar3 = 0;
        do {
          iStack_98 = iVar3 + 2;
          SStack_b0.surface_normal.B = iVar3;
          SStack_b0.surface_normal.C = iVar3 + 1;
          SStack_b0.surface_normal.D = iVar3 + 3;
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_bc);
          SStack_b0.surface_normal.C = iVar3 + 6;
          SStack_b0.surface_normal.A = iVar3 + 1;
          SStack_b0.surface_normal.B = iVar3 + 4;
          SStack_b0.surface_normal.D = iVar3 + 3;
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff40);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar2 < *(int *)(in_stack_0000002c[1].actor_name + 0x14));
      }
      local_bc._4_4_ = 3;
      SStack_b0.surface_normal.A = 0;
      SStack_b0.base.count = 0;
      SStack_b0.base.type = 0;
      SStack_b0.surface_normal.D = 2;
      local_bc._8_4_ = 0;
      pcStack_10 = in_stack_0000002c[1].actor_name + 0x18;
      SStack_b0.surface_normal.B = 0;
      SStack_b0.surface_normal.C = 1;
      pCStack_8 = &in_stack_0000002c[1].orient;
      pfStack_c = &in_stack_0000002c[1].location.position.y;
      while (0 < *(int *)(in_stack_0000002c[1].actor_name + 0x14) * 2) {
        auStack_4c._0_4_ = (uint)ROUND(*(float *)pcStack_10 * _DAT_006634b0);
        auStack_4c._4_4_ = (uint)ROUND(*(float *)(pcStack_10 + 4) * _DAT_006634b0);
        iStack_44 = (int)ROUND((((CLocation *)(pcStack_10 + 8))->position).x * _DAT_006634b0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)auStack_4c
                  );
        CStack_78.x = (int)ROUND(pCStack_8->pitch * _DAT_006634b0);
        CStack_78.y = (int)ROUND(pCStack_8->bank * _DAT_006634b0);
        CStack_78.z = (int)ROUND(pCStack_8->heading * _DAT_006634b0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_78);
        auStack_34._8_4_ = (uint)ROUND(*unaff_retaddr * _DAT_006634b0);
        iStack_28 = (int)ROUND(unaff_retaddr[1] * _DAT_006634b0);
        iStack_24 = (int)ROUND(unaff_retaddr[2] * _DAT_006634b0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)(auStack_34 + 8));
        iVar2 = 0;
        do {
          pCVar1 = g_CDemonRendererPtr;
          *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar2) = 0;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar2) = 0xff00;
          *(int *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar2) = in_stack_00000028;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar2) = 0x8000;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->u + iVar2) = 0x800000;
          iVar3 = iVar2 + 0x30;
          *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar2) = 0x800000;
          iVar2 = iVar3;
        } while (iVar3 != 0x90);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(pCVar1,&SStack_b0);
        in_stack_00000028 = in_stack_00000028 + 1;
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000002c);
    return uStack_18;
  }
  return 0;
}
