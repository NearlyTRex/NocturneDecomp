// Name: core_stairs.cpp_FUN_005b9c10
// Address: 005b9c10
// Address Range: [[005b9c10, 005ba486]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b9c10()
// Globals:
//   undefined4 DAT_0065305a
//   undefined4 DAT_006634b0
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   SMRGLTextureBasic DAT_00684178
//   undefined4 DAT_00800000
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ActiveRenderColor
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_stairs.cpp_FUN_005b9c10(undefined4 param_1) */

undefined4 core_stairs_cpp_FUN_005b9c10(void)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  undefined4 *puVar9;
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
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int aiStack_fc [2];
  undefined4 uStack_f4;
  undefined1 local_bc [12];
  SMRGLHeaderPrimitive SStack_b0;
  int iStack_98;
  float fStack_80;
  float fStack_7c;
  CVector3i CStack_78;
  float fStack_6c;
  CVector3i aCStack_68 [2];
  undefined1 auStack_4c [8];
  int iStack_44;
  int iStack_40;
  undefined1 auStack_34 [12];
  int iStack_28;
  int iStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
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
    this_ptr = (*((in_stack_00000008->metadata).vtable)->getBoundingBox)
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
          CStack_78.y = (int)(-*(float *)(in_stack_00000028 + 0x160) * (float)_DAT_0065305a);
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
          auStack_34._0_4_ = (undefined4)ROUND(fStack_7c * _DAT_006634b0);
          auStack_34._4_4_ = (undefined4)ROUND((float)CStack_78.x * _DAT_006634b0);
          auStack_34._8_4_ = (undefined4)ROUND((float)CStack_78.y * _DAT_006634b0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    ((SProjectedVertex *)
                     ((int)&pCStack_8->pitch + (int)g_CDemonRendererPtr->vertex_buffer_ptr),
                     (CVector3i *)auStack_34);
          CStack_78.z = (int)((float)CStack_78.z + *(float *)(in_stack_00000024 + 0x15c));
          auStack_4c._4_4_ = (undefined4)ROUND((float)CStack_78.x * _DAT_006634b0);
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
          puVar5 = (undefined4 *)((int)&(pSVar7->projected_vertex).transformed_x + iStack0000000c);
          piVar10 = aiStack_fc;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar10 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (undefined4 *)((int)&(pSVar7->projected_vertex).transformed_x + iStack00000010);
          puVar9 = (undefined4 *)&stack0xfffffed4;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffed4,in_stack_fffffed8);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (undefined4 *)((int)&(pSVar7->projected_vertex).transformed_x + iVar3);
          puVar9 = &uStack_110;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (undefined4 *)((int)&(pSVar7->projected_vertex).transformed_x + iVar2);
          puVar9 = (undefined4 *)&stack0xfffffec0;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffec0,in_stack_fffffec4);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (undefined4 *)((int)&(pSVar7->projected_vertex).transformed_x + iVar2);
          puVar9 = &uStack_10c;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (undefined4 *)((int)unaff_retaddr + (int)pSVar7);
          puVar9 = (undefined4 *)&stack0xfffffec4;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          in_stack_fffffec0 = (SRenderVertex *)0x5b9fb6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffec4,in_stack_fffffec8);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (undefined4 *)((int)&(pSVar7->projected_vertex).transformed_x + iVar3);
          puVar9 = &uStack_108;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (undefined4 *)((int)unaff_retaddr + (int)pSVar7);
          puVar9 = (undefined4 *)&stack0xfffffec8;
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
            *puVar5 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + (uint)bVar11 * -8 + 4;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
          }
          puVar5 = (undefined4 *)((int)&(pSVar7->projected_vertex).transformed_x + iVar2);
          puVar9 = (undefined4 *)&stack0xfffffecc;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          in_stack_fffffec8 = (SRenderVertex *)0x5ba01c;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffecc,in_stack_fffffed0);
          pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
          puVar5 = (undefined4 *)((int)unaff_retaddr + (int)pSVar7);
          puVar9 = &uStack_100;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          }
          iVar2 = iVar2 + 0xc0;
          puVar5 = (undefined4 *)((int)&(pSVar7->projected_vertex).transformed_x + iVar3);
          puVar9 = (undefined4 *)&stack0xfffffed0;
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
        *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar2) = 0;
        *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->color + iVar2) = 0;
        *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar2) = 0xff00;
        *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar2) = 0x8000;
        *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->u + iVar2) = 0x800000;
        *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->v + iVar2) = 0x800000;
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
        auStack_4c._0_4_ = (undefined4)ROUND(*(float *)pcStack_10 * _DAT_006634b0);
        auStack_4c._4_4_ = (undefined4)ROUND(*(float *)(pcStack_10 + 4) * _DAT_006634b0);
        iStack_44 = (int)ROUND((((CLocation *)(pcStack_10 + 8))->position).x * _DAT_006634b0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)auStack_4c
                  );
        CStack_78.x = (int)ROUND(pCStack_8->pitch * _DAT_006634b0);
        CStack_78.y = (int)ROUND(pCStack_8->bank * _DAT_006634b0);
        CStack_78.z = (int)ROUND(pCStack_8->heading * _DAT_006634b0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_78);
        auStack_34._8_4_ = (undefined4)ROUND(*unaff_retaddr * _DAT_006634b0);
        iStack_28 = (int)ROUND(unaff_retaddr[1] * _DAT_006634b0);
        iStack_24 = (int)ROUND(unaff_retaddr[2] * _DAT_006634b0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)(auStack_34 + 8));
        iVar2 = 0;
        do {
          pCVar1 = g_CDemonRendererPtr;
          *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar2) = 0;
          *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->color + iVar2) = 0xff00;
          *(int *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar2) = in_stack_00000028;
          *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar2) = 0x8000;
          *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->u + iVar2) = 0x800000;
          iVar3 = iVar2 + 0x30;
          *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->v + iVar2) = 0x800000;
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


// Assembly code:
// 005b9c10: PUSH EBP
//   Label: core_stairs.cpp_FUN_005b9c10
// 005b9c11: SUB ESP,0xe0
// 005b9c17: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005b9c1c: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 005b9c20: JNZ 0x005b9c2c
//   XREF to: 005b9c2c (CONDITIONAL_JUMP)
// 005b9c22: XOR EAX,EAX
//   Label: LAB_005b9c22
// 005b9c24: ADD ESP,0xe0
// 005b9c2a: POP EBP
// 005b9c2b: RET
// 005b9c2c: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_005b9c2c
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005b9c32: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005b9c33: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005b9c38: ADD ESP,0x4
// 005b9c3b: TEST EAX,EAX
// 005b9c3d: JNZ 0x005b9c22
//   XREF to: 005b9c22 (CONDITIONAL_JUMP)
// 005b9c3f: PUSH EDI
// 005b9c40: PUSH ESI
// 005b9c41: PUSH EBX
// 005b9c42: MOV EBX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[0x4] (READ)
// 005b9c49: PUSH EBX
// 005b9c4a: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005b9c4f: ADD ESP,0x4
// 005b9c52: LEA EDX,[ESP + 0x34]
//   XREF to: Stack[-0xbc] (DATA)
// 005b9c56: PUSH EDX
// 005b9c57: MOV EAX,dword ptr [EBX + 0x154]
// 005b9c5d: PUSH EBX
// 005b9c5e: CALL dword ptr [EAX + 0x14]
// 005b9c61: ADD ESP,0x8
// 005b9c64: PUSH EAX
// 005b9c65: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005b9c6a: ADD ESP,0x4
// 005b9c6d: MOV dword ptr [ESP + 0xac],EAX
// 005b9c74: TEST EAX,EAX
// 005b9c76: JZ 0x005ba465
//   XREF to: 005ba465 (CONDITIONAL_JUMP)
// 005b9c7c: PUSH 0x684178
//   XREF to: 00684178 (DATA)
// 005b9c81: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005b9c87: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005b9c88: XOR ESI,ESI
// 005b9c8a: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005b9c8f: MOV EBP,dword ptr [EBX + 0x16c]
// 005b9c95: ADD ESP,0x8
// 005b9c98: TEST EBP,EBP
// 005b9c9a: JL 0x005b9ec0
//   XREF to: 005b9ec0 (CONDITIONAL_JUMP)
// 005b9ca0: MOV EBP,0x60
// 005b9ca5: MOV EDI,0x90
// 005b9caa: MOV dword ptr [ESP + 0xcc],EBP
// 005b9cb1: MOV dword ptr [ESP + 0xc8],EDI
// 005b9cb8: MOV EBP,0x30
// 005b9cbd: XOR EDI,EDI
// 005b9cbf: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_005b9cbf
// 005b9cc6: MOV dword ptr [ESP + 0xe8],ESI
// 005b9ccd: FLD float ptr [EAX + 0x160]
// 005b9cd3: FCHS
// 005b9cd5: FMUL double ptr [0x0065305a]
//   XREF to: 0065305a (READ)
// 005b9cdb: FILD dword ptr [ESP + 0xe8]
// 005b9ce2: FXCH
// 005b9ce4: FSTP float ptr [ESP + 0x58]
// 005b9ce8: FLD float ptr [EAX + 0x158]
// 005b9cee: FMUL ST1
// 005b9cf0: FSTP float ptr [ESP + 0x5c]
// 005b9cf4: FMUL float ptr [EAX + 0x15c]
// 005b9cfa: LEA EBX,[ESP + 0x64]
// 005b9cfe: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005b9d04: LEA EAX,[ESP + 0x58]
// 005b9d08: FSTP float ptr [ESP + 0x60]
// 005b9d0c: FLD float ptr [EAX]
// 005b9d0e: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9d14: FISTP dword ptr [EBX]
// 005b9d16: FLD float ptr [EAX + 0x4]
// 005b9d19: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9d1f: FISTP dword ptr [EBX + 0x4]
// 005b9d22: FLD float ptr [EAX + 0x8]
// 005b9d25: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9d2b: FISTP dword ptr [EBX + 0x8]
// 005b9d2e: LEA EAX,[ESP + 0x64]
// 005b9d32: PUSH EAX
// 005b9d33: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005b9d35: ADD EAX,EDI
// 005b9d37: PUSH EAX
// 005b9d38: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005b9d3d: LEA EBX,[ESP + 0x78]
// 005b9d41: ADD ESP,0x8
// 005b9d44: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005b9d4a: MOV EAX,dword ptr [ESP + 0xf4]
// 005b9d51: FLD float ptr [ESP + 0x60]
// 005b9d55: FADD float ptr [EAX + 0x15c]
// 005b9d5b: LEA EAX,[ESP + 0x58]
// 005b9d5f: FSTP float ptr [ESP + 0x60]
// 005b9d63: FLD float ptr [EAX]
// 005b9d65: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9d6b: FISTP dword ptr [EBX]
// 005b9d6d: FLD float ptr [EAX + 0x4]
// 005b9d70: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9d76: FISTP dword ptr [EBX + 0x4]
// 005b9d79: FLD float ptr [EAX + 0x8]
// 005b9d7c: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9d82: FISTP dword ptr [EBX + 0x8]
// 005b9d85: LEA EAX,[ESP + 0x70]
// 005b9d89: PUSH EAX
// 005b9d8a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005b9d8c: ADD EAX,EBP
// 005b9d8e: PUSH EAX
// 005b9d8f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005b9d94: LEA EBX,[ESP + 0xa8]
// 005b9d9b: ADD ESP,0x8
// 005b9d9e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005b9da4: MOV EAX,dword ptr [ESP + 0xf4]
// 005b9dab: FLD float ptr [ESP + 0x60]
// 005b9daf: FSUB float ptr [EAX + 0x15c]
// 005b9db5: FLD float ptr [ESP + 0x58]
// 005b9db9: FXCH
// 005b9dbb: FSTP float ptr [ESP + 0x60]
// 005b9dbf: FADD float ptr [EAX + 0x160]
// 005b9dc5: LEA EAX,[ESP + 0x58]
// 005b9dc9: FSTP float ptr [ESP + 0x58]
// 005b9dcd: FLD float ptr [EAX]
// 005b9dcf: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9dd5: FISTP dword ptr [EBX]
// 005b9dd7: FLD float ptr [EAX + 0x4]
// 005b9dda: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9de0: FISTP dword ptr [EBX + 0x4]
// 005b9de3: FLD float ptr [EAX + 0x8]
// 005b9de6: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9dec: FISTP dword ptr [EBX + 0x8]
// 005b9def: LEA EAX,[ESP + 0xa0]
// 005b9df6: PUSH EAX
// 005b9df7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005b9df9: ADD EAX,dword ptr [ESP + 0xd0]
// 005b9e00: PUSH EAX
// 005b9e01: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005b9e06: LEA EBX,[ESP + 0x90]
// 005b9e0d: ADD ESP,0x8
// 005b9e10: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005b9e16: MOV EAX,dword ptr [ESP + 0xf4]
// 005b9e1d: FLD float ptr [ESP + 0x60]
// 005b9e21: FADD float ptr [EAX + 0x15c]
// 005b9e27: LEA EAX,[ESP + 0x58]
// 005b9e2b: FSTP float ptr [ESP + 0x60]
// 005b9e2f: FLD float ptr [EAX]
// 005b9e31: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9e37: FISTP dword ptr [EBX]
// 005b9e39: FLD float ptr [EAX + 0x4]
// 005b9e3c: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9e42: FISTP dword ptr [EBX + 0x4]
// 005b9e45: FLD float ptr [EAX + 0x8]
// 005b9e48: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005b9e4e: FISTP dword ptr [EBX + 0x8]
// 005b9e51: LEA EAX,[ESP + 0x88]
// 005b9e58: MOV ECX,dword ptr [ESP + 0xc8]
// 005b9e5f: PUSH EAX
// 005b9e60: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005b9e62: ADD EAX,ECX
// 005b9e64: PUSH EAX
// 005b9e65: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005b9e6a: ADD ESP,0x8
// 005b9e6d: INC ESI
// 005b9e6e: MOV EAX,dword ptr [ESP + 0xcc]
// 005b9e75: ADD EDI,0xc0
// 005b9e7b: ADD EAX,0xc0
// 005b9e80: MOV EBX,dword ptr [ESP + 0xc8]
// 005b9e87: MOV dword ptr [ESP + 0xcc],EAX
// 005b9e8e: MOV EAX,dword ptr [ESP + 0xf4]
// 005b9e95: ADD EBP,0xc0
// 005b9e9b: ADD EBX,0xc0
// 005b9ea1: MOV EDX,dword ptr [EAX + 0x16c]
// 005b9ea7: MOV dword ptr [ESP + 0xc8],EBX
// 005b9eae: CMP ESI,EDX
// 005b9eb0: JLE 0x005b9cbf
//   XREF to: 005b9cbf (CONDITIONAL_JUMP)
// 005b9eb6: LEA EAX,[EAX]
// 005b9ebc: LEA EDX,[EDX]
// 005b9ec0: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_005b9ec0
// 005b9ec7: XOR EBX,EBX
// 005b9ec9: MOV ECX,0x3
// 005b9ece: MOV dword ptr [ESP + 0xd4],EBX
// 005b9ed5: MOV ESI,dword ptr [EAX + 0x16c]
// 005b9edb: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 005b9ee1: TEST ESI,ESI
// 005b9ee3: JLE 0x005ba0e0
//   XREF to: 005ba0e0 (CONDITIONAL_JUMP)
// 005b9ee9: MOV EBX,0x120
// 005b9eee: MOV ESI,0xc0
// 005b9ef3: MOV EBP,0x90
// 005b9ef8: MOV EAX,0x60
// 005b9efd: XOR EDI,EDI
// 005b9eff: MOV dword ptr [ESP + 0xd0],EBX
// 005b9f06: MOV dword ptr [ESP + 0xc4],ESI
// 005b9f0d: MOV dword ptr [ESP + 0xdc],EDI
// 005b9f14: MOV dword ptr [ESP + 0xd8],EAX
// 005b9f1b: MOV EBX,0x30
// 005b9f20: MOV ESI,dword ptr [ESP + 0xd8]
//   Label: LAB_005b9f20
// 005b9f27: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005b9f2c: MOV ECX,0xc
// 005b9f31: SUB ESP,0x30
// 005b9f34: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005b9f36: MOV EDI,ESP
// 005b9f38: ADD ESI,EAX
// 005b9f3a: MOVSD.REP ES:EDI,ESI
// 005b9f3c: MOV ESI,dword ptr [ESP + 0x10c]
// 005b9f43: MOV ECX,0xc
// 005b9f48: SUB ESP,0x30
// 005b9f4b: ADD ESI,EAX
// 005b9f4d: MOV EDI,ESP
// 005b9f4f: MOVSD.REP ES:EDI,ESI
// 005b9f51: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005b9f56: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005b9f5b: ADD ESP,0x60
// 005b9f5e: MOV ECX,0xc
// 005b9f63: SUB ESP,0x30
// 005b9f66: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005b9f68: MOV EDI,ESP
// 005b9f6a: LEA ESI,[EAX + EBP*0x1]
// 005b9f6d: MOVSD.REP ES:EDI,ESI
// 005b9f6f: SUB ESP,0x30
// 005b9f72: MOV ECX,0xc
// 005b9f77: MOV EDI,ESP
// 005b9f79: LEA ESI,[EAX + EBX*0x1]
// 005b9f7c: MOVSD.REP ES:EDI,ESI
// 005b9f7e: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005b9f83: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005b9f88: ADD ESP,0x60
// 005b9f8b: MOV ECX,0xc
// 005b9f90: SUB ESP,0x30
// 005b9f93: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005b9f95: MOV EDI,ESP
// 005b9f97: LEA ESI,[EAX + EBX*0x1]
// 005b9f9a: MOVSD.REP ES:EDI,ESI
// 005b9f9c: MOV ESI,dword ptr [ESP + 0x10c]
// 005b9fa3: MOV ECX,0xc
// 005b9fa8: SUB ESP,0x30
// 005b9fab: ADD ESI,EAX
// 005b9fad: MOV EDI,ESP
// 005b9faf: MOVSD.REP ES:EDI,ESI
// 005b9fb1: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005b9fb6: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005b9fbb: ADD ESP,0x60
// 005b9fbe: MOV ECX,0xc
// 005b9fc3: SUB ESP,0x30
// 005b9fc6: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005b9fc8: MOV EDI,ESP
// 005b9fca: LEA ESI,[EAX + EBP*0x1]
// 005b9fcd: MOVSD.REP ES:EDI,ESI
// 005b9fcf: MOV ESI,dword ptr [ESP + 0x108]
// 005b9fd6: MOV ECX,0xc
// 005b9fdb: SUB ESP,0x30
// 005b9fde: ADD ESI,EAX
// 005b9fe0: MOV EDI,ESP
// 005b9fe2: MOVSD.REP ES:EDI,ESI
// 005b9fe4: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005b9fe9: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005b9fee: ADD ESP,0x60
// 005b9ff1: MOV ECX,0xc
// 005b9ff6: MOV ESI,dword ptr [ESP + 0xc4]
// 005b9ffd: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005b9fff: SUB ESP,0x30
// 005ba002: ADD ESI,EAX
// 005ba004: MOV EDI,ESP
// 005ba006: MOVSD.REP ES:EDI,ESI
// 005ba008: SUB ESP,0x30
// 005ba00b: MOV ECX,0xc
// 005ba010: MOV EDI,ESP
// 005ba012: LEA ESI,[EAX + EBX*0x1]
// 005ba015: MOVSD.REP ES:EDI,ESI
// 005ba017: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005ba01c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005ba021: ADD ESP,0x60
// 005ba024: MOV ECX,0xc
// 005ba029: MOV ESI,dword ptr [ESP + 0xd0]
// 005ba030: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ba032: SUB ESP,0x30
// 005ba035: ADD ESI,EAX
// 005ba037: MOV EDI,ESP
// 005ba039: MOVSD.REP ES:EDI,ESI
// 005ba03b: SUB ESP,0x30
// 005ba03e: MOV ECX,0xc
// 005ba043: MOV EDI,ESP
// 005ba045: LEA ESI,[EAX + EBP*0x1]
// 005ba048: ADD EBX,0xc0
// 005ba04e: MOVSD.REP ES:EDI,ESI
// 005ba050: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005ba055: ADD ESP,0x60
// 005ba058: ADD EBP,0xc0
// 005ba05e: MOV EAX,dword ptr [ESP + 0xd0]
// 005ba065: MOV EDX,dword ptr [ESP + 0xc4]
// 005ba06c: MOV ECX,dword ptr [ESP + 0xdc]
// 005ba073: MOV ESI,dword ptr [ESP + 0xd8]
// 005ba07a: MOV EDI,dword ptr [ESP + 0xd4]
// 005ba081: ADD EAX,0xc0
// 005ba086: ADD EDX,0xc0
// 005ba08c: ADD ECX,0xc0
// 005ba092: ADD ESI,0xc0
// 005ba098: INC EDI
// 005ba099: MOV dword ptr [ESP + 0xd0],EAX
// 005ba0a0: MOV dword ptr [ESP + 0xc4],EDX
// 005ba0a7: MOV EDX,dword ptr [ESP + 0xf4]
// 005ba0ae: MOV dword ptr [ESP + 0xdc],ECX
// 005ba0b5: MOV dword ptr [ESP + 0xd8],ESI
// 005ba0bc: MOV ECX,dword ptr [EDX + 0x16c]
// 005ba0c2: MOV dword ptr [ESP + 0xd4],EDI
// 005ba0c9: CMP EDI,ECX
// 005ba0cb: JL 0x005b9f20
//   XREF to: 005b9f20 (CONDITIONAL_JUMP)
// 005ba0d1: LEA EAX,[EAX]
// 005ba0d7: LEA EDX,[EDX]
// 005ba0dd: LEA EAX,[EAX]
// 005ba0e0: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_005ba0e0
// 005ba0e7: MOV EAX,dword ptr [EAX + 0x16c]
// 005ba0ed: SHL EAX,0x2
// 005ba0f0: MOV ECX,0xc
// 005ba0f5: LEA EDX,[EAX + 0x2]
// 005ba0f8: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ba0fe: LEA EAX,[EDX*0x4 + 0x0]
// 005ba105: SUB ESP,0x30
// 005ba108: SUB EAX,EDX
// 005ba10a: MOV EBX,dword ptr [EBX]
//   XREF to: 02c6d578 (READ)
// 005ba10c: SHL EAX,0x4
// 005ba10f: MOV EDI,ESP
// 005ba111: LEA ESI,[EBX + EAX*0x1]
// 005ba114: MOV EDX,dword ptr [ESP + 0x124]
// 005ba11b: MOVSD.REP ES:EDI,ESI
// 005ba11d: MOV EDX,dword ptr [EDX + 0x16c]
// 005ba123: LEA EAX,[EDX*0x4 + 0x0]
// 005ba12a: SUB ESP,0x30
// 005ba12d: SUB EAX,EDX
// 005ba12f: MOV ECX,0xc
// 005ba134: SHL EAX,0x6
// 005ba137: MOV EDI,ESP
// 005ba139: LEA ESI,[EBX + EAX*0x1]
// 005ba13c: MOV EBP,0x8000
// 005ba141: MOV EBX,0x4
// 005ba146: MOVSD.REP ES:EDI,ESI
// 005ba148: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005ba14d: MOV ECX,0xff00
// 005ba152: ADD ESP,0x60
// 005ba155: XOR ESI,ESI
// 005ba157: XOR EDI,EDI
// 005ba159: XOR EAX,EAX
// 005ba15b: MOV dword ptr [ESP + 0x10],EBX
// 005ba15f: MOV dword ptr [ESP + 0x20],ESI
// 005ba163: MOV dword ptr [ESP + 0x1c],ESI
// 005ba167: MOV dword ptr [ESP + 0x18],ESI
// 005ba16b: MOV dword ptr [ESP + 0x14],ESI
// 005ba16f: MOV dword ptr [ESP + 0xb0],ESI
// 005ba176: MOV dword ptr [ESP + 0xb4],ECX
// 005ba17d: XOR EBX,EBX
// 005ba17f: MOV EDX,dword ptr [ESP + 0xf4]
//   Label: LAB_005ba17f
// 005ba186: MOV EDX,dword ptr [EDX + 0x16c]
// 005ba18c: SHL EDX,0x2
// 005ba18f: CMP EBX,EDX
// 005ba191: JG 0x005ba1d9
//   XREF to: 005ba1d9 (CONDITIONAL_JUMP)
// 005ba193: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ba199: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba19b: MOV dword ptr [ECX + EAX*0x1 + 0x20],EDI
// 005ba19f: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba1a1: MOV ESI,dword ptr [ESP + 0xb0]
// 005ba1a8: MOV dword ptr [ECX + EAX*0x1 + 0x24],ESI
// 005ba1ac: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba1ae: MOV ESI,dword ptr [ESP + 0xb4]
// 005ba1b5: MOV dword ptr [ECX + EAX*0x1 + 0x28],ESI
// 005ba1b9: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba1bb: MOV dword ptr [ECX + EAX*0x1 + 0x2c],EBP
// 005ba1bf: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba1c1: MOV dword ptr [ECX + EAX*0x1 + 0x18],0x800000
//   XREF to: 00800000 (DATA)
// 005ba1c9: ADD EAX,0x30
// 005ba1cc: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba1ce: INC EBX
// 005ba1cf: MOV dword ptr [EDX + EAX*0x1 + -0x14],0x800000
//   XREF to: 00800000 (DATA)
// 005ba1d7: JMP 0x005ba17f
//   XREF to: 005ba17f (UNCONDITIONAL_JUMP)
// 005ba1d9: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_005ba1d9
// 005ba1e0: MOV EDX,dword ptr [EAX + 0x16c]
// 005ba1e6: XOR EDI,EDI
// 005ba1e8: TEST EDX,EDX
// 005ba1ea: JLE 0x005ba260
//   XREF to: 005ba260 (CONDITIONAL_JUMP)
// 005ba1f0: XOR ESI,ESI
// 005ba1f2: MOV dword ptr [ESP + 0x24],ESI
//   Label: LAB_005ba1f2
// 005ba1f6: LEA EBP,[ESI + 0x1]
// 005ba1f9: LEA EBX,[ESI + 0x3]
// 005ba1fc: LEA EAX,[ESI + 0x2]
// 005ba1ff: MOV dword ptr [ESP + 0x30],EAX
// 005ba203: LEA EAX,[ESP + 0xc]
// 005ba207: PUSH EAX
// 005ba208: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ba20e: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005ba20f: MOV dword ptr [ESP + 0x30],EBP
// 005ba213: MOV dword ptr [ESP + 0x34],EBX
// 005ba217: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 005ba21c: ADD ESP,0x8
// 005ba21f: LEA EAX,[ESP + 0xc]
// 005ba223: MOV dword ptr [ESP + 0x24],EBP
// 005ba227: MOV dword ptr [ESP + 0x30],EBX
// 005ba22b: PUSH EAX
// 005ba22c: LEA EBP,[ESI + 0x4]
// 005ba22f: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ba235: ADD ESI,0x6
// 005ba238: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005ba239: MOV dword ptr [ESP + 0x30],EBP
// 005ba23d: MOV dword ptr [ESP + 0x34],ESI
// 005ba241: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 005ba246: ADD ESP,0x8
// 005ba249: MOV EAX,dword ptr [ESP + 0xf4]
// 005ba250: INC EDI
// 005ba251: MOV ESI,EBP
// 005ba253: CMP EDI,dword ptr [EAX + 0x16c]
// 005ba259: JL 0x005ba1f2
//   XREF to: 005ba1f2 (CONDITIONAL_JUMP)
// 005ba25b: LEA EAX,[EAX]
// 005ba25e: MOV ECX,ECX
// 005ba260: MOV EAX,0x3
//   Label: LAB_005ba260
// 005ba265: MOV EBP,0x1
// 005ba26a: MOV EDI,0xff00
// 005ba26f: XOR EDX,EDX
// 005ba271: XOR ESI,ESI
// 005ba273: MOV dword ptr [ESP + 0x10],EAX
// 005ba277: MOV dword ptr [ESP + 0x20],EDX
// 005ba27b: MOV dword ptr [ESP + 0x1c],EDX
// 005ba27f: MOV EAX,0x2
// 005ba284: MOV dword ptr [ESP + 0x18],EDX
// 005ba288: MOV dword ptr [ESP + 0x2c],EAX
// 005ba28c: MOV EAX,dword ptr [ESP + 0xf4]
// 005ba293: MOV dword ptr [ESP + 0x14],EDX
// 005ba297: ADD EAX,0x170
// 005ba29c: MOV dword ptr [ESP + 0x24],EDX
// 005ba2a0: MOV dword ptr [ESP + 0xb8],EAX
// 005ba2a7: MOV EAX,dword ptr [ESP + 0xf4]
// 005ba2ae: MOV dword ptr [ESP + 0x28],EBP
// 005ba2b2: ADD EAX,0x188
// 005ba2b7: MOV dword ptr [ESP + 0xe0],EDX
// 005ba2be: MOV dword ptr [ESP + 0xc0],EAX
// 005ba2c5: MOV EAX,dword ptr [ESP + 0xf4]
// 005ba2cc: MOV dword ptr [ESP + 0xe4],EDX
// 005ba2d3: ADD EAX,0x17c
// 005ba2d8: MOV EBP,0x8000
// 005ba2dd: MOV dword ptr [ESP + 0xbc],EAX
// 005ba2e4: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_005ba2e4
// 005ba2eb: MOV EAX,dword ptr [EAX + 0x16c]
// 005ba2f1: MOV EBX,dword ptr [ESP + 0xe0]
// 005ba2f8: ADD EAX,EAX
// 005ba2fa: CMP EAX,EBX
// 005ba2fc: JLE 0x005ba465
//   XREF to: 005ba465 (CONDITIONAL_JUMP)
// 005ba302: IMUL EAX,EBX,0x38
// 005ba305: MOV ECX,dword ptr [ESP + 0xb8]
// 005ba30c: LEA EBX,[ESP + 0x7c]
// 005ba310: ADD EAX,ECX
// 005ba312: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ba318: FLD float ptr [EAX]
// 005ba31a: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005ba320: FISTP dword ptr [EBX]
// 005ba322: FLD float ptr [EAX + 0x4]
// 005ba325: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005ba32b: FISTP dword ptr [EBX + 0x4]
// 005ba32e: FLD float ptr [EAX + 0x8]
// 005ba331: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005ba337: FISTP dword ptr [EBX + 0x8]
// 005ba33a: LEA EAX,[ESP + 0x7c]
// 005ba33e: PUSH EAX
// 005ba33f: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba341: PUSH EAX
// 005ba342: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ba347: ADD ESP,0x8
// 005ba34a: LEA EBX,[ESP + 0x4c]
// 005ba34e: MOV EAX,dword ptr [ESP + 0xbc]
// 005ba355: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ba35b: FLD float ptr [EAX]
// 005ba35d: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005ba363: FISTP dword ptr [EBX]
// 005ba365: FLD float ptr [EAX + 0x4]
// 005ba368: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005ba36e: FISTP dword ptr [EBX + 0x4]
// 005ba371: FLD float ptr [EAX + 0x8]
// 005ba374: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005ba37a: FISTP dword ptr [EBX + 0x8]
// 005ba37d: LEA EAX,[ESP + 0x4c]
// 005ba381: PUSH EAX
// 005ba382: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba384: ADD EAX,0x30
// 005ba387: PUSH EAX
// 005ba388: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ba38d: ADD ESP,0x8
// 005ba390: LEA EBX,[ESP + 0x94]
// 005ba397: MOV EAX,dword ptr [ESP + 0xc0]
// 005ba39e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ba3a4: FLD float ptr [EAX]
// 005ba3a6: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005ba3ac: FISTP dword ptr [EBX]
// 005ba3ae: FLD float ptr [EAX + 0x4]
// 005ba3b1: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005ba3b7: FISTP dword ptr [EBX + 0x4]
// 005ba3ba: FLD float ptr [EAX + 0x8]
// 005ba3bd: FMUL float ptr [0x006634b0]
//   XREF to: 006634b0 (READ)
// 005ba3c3: FISTP dword ptr [EBX + 0x8]
// 005ba3c6: LEA EAX,[ESP + 0x94]
// 005ba3cd: PUSH EAX
// 005ba3ce: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba3d0: ADD EAX,0x60
// 005ba3d3: PUSH EAX
// 005ba3d4: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ba3d9: ADD ESP,0x8
// 005ba3dc: XOR EAX,EAX
// 005ba3de: MOV EBX,dword ptr [ESP + 0xe4]
// 005ba3e5: MOV EDX,dword ptr [0x006703ec]
//   Label: LAB_005ba3e5
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ba3eb: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba3ed: MOV dword ptr [ECX + EAX*0x1 + 0x20],ESI
// 005ba3f1: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba3f3: MOV dword ptr [ECX + EAX*0x1 + 0x24],EDI
// 005ba3f7: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba3f9: MOV dword ptr [ECX + EAX*0x1 + 0x28],EBX
// 005ba3fd: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba3ff: MOV dword ptr [ECX + EAX*0x1 + 0x2c],EBP
// 005ba403: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba405: MOV dword ptr [ECX + EAX*0x1 + 0x18],0x800000
//   XREF to: 00800000 (DATA)
// 005ba40d: ADD EAX,0x30
// 005ba410: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ba412: MOV dword ptr [ECX + EAX*0x1 + -0x14],0x800000
//   XREF to: 00800000 (DATA)
// 005ba41a: CMP EAX,0x90
// 005ba41f: JNZ 0x005ba3e5
//   XREF to: 005ba3e5 (CONDITIONAL_JUMP)
// 005ba421: LEA EAX,[ESP + 0xc]
// 005ba425: PUSH EAX
// 005ba426: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005ba427: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 005ba42c: ADD ESP,0x8
// 005ba42f: MOV EBX,dword ptr [ESP + 0xc0]
// 005ba436: MOV EAX,dword ptr [ESP + 0xbc]
// 005ba43d: MOV EDX,dword ptr [ESP + 0xe0]
// 005ba444: ADD EBX,0x38
// 005ba447: ADD EAX,0x38
// 005ba44a: INC EDX
// 005ba44b: MOV dword ptr [ESP + 0xc0],EBX
// 005ba452: MOV dword ptr [ESP + 0xbc],EAX
// 005ba459: MOV dword ptr [ESP + 0xe0],EDX
// 005ba460: JMP 0x005ba2e4
//   XREF to: 005ba2e4 (UNCONDITIONAL_JUMP)
// 005ba465: MOV ECX,dword ptr [ESP + 0xf4]
//   Label: LAB_005ba465
// 005ba46c: PUSH ECX
// 005ba46d: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005ba472: ADD ESP,0x4
// 005ba475: MOV EAX,dword ptr [ESP + 0xac]
// 005ba47c: POP EBX
// 005ba47d: POP ESI
// 005ba47e: POP EDI
// 005ba47f: ADD ESP,0xe0
// 005ba485: POP EBP
// 005ba486: RET
