// Name: core_chain.cpp_FUN_004308f0
// Address: 004308f0
// Address Range: [[004308f0, 00430eae]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_004308f0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_chain.cpp_FUN_004308f0(uint param_1) */

uint core_chain_cpp_FUN_004308f0(void)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  CDemonActor *this_ptr;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  float *pfVar5;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  CDemonActor *in_stack_0000000c;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  byte auStack_50 [20];
  int iStack_3c;
  int iStack_38;
  byte auStack_28 [8];
  int iStack_20;
  int iStack_1c;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000008);
    this_ptr = in_stack_0000000c;
    this_ptr_00 = (*in_stack_0000000c->vtable->getBoundingBox)
                            (in_stack_0000000c,(CBoundingBox3D *)&stack0xffffff78);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    *(int *)(this_ptr[4].actor_name + 0x14) = iVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(this_ptr);
    if (*(int *)(this_ptr[4].actor_name + 0x14) != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,(SMRGLTextureBasic *)(this_ptr[1].actor_name + 0x14));
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
      pfVar5 = (float *)(in_stack_00000038 + 0x28c);
      pfVar4 = (float *)(in_stack_00000038 + 0x2b0);
      for (iVar3 = 0; iVar3 < *(int *)(in_stack_00000038 + 0x158) + -1; iVar3 = iVar3 + 1) {
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&stack0xfffffff8);
        auStack_50._16_4_ = (uint)ROUND(*pfVar5 * _DAT_0065b9e0);
        iStack_3c = (int)ROUND(pfVar5[1] * _DAT_0065b9e0);
        iStack_38 = (int)ROUND(pfVar5[2] * _DAT_0065b9e0);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)(auStack_50 + 0x10));
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&stack0xfffffff4);
        in_stack_00000028 = (int)ROUND(*pfVar4 * _DAT_0065b9e0);
        in_stack_0000002c = (int)ROUND(pfVar4[1] * _DAT_0065b9e0);
        in_stack_00000030 = (int)ROUND(pfVar4[2] * _DAT_0065b9e0);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)&stack0x00000028);
        pCVar2 = g_CDemonRendererPtr;
        piVar1 = &(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_y;
        *piVar1 = *piVar1 + -0x40;
        piVar1 = &pCVar2->vertex_buffer_ptr[1].projected_vertex.transformed_y;
        *piVar1 = *piVar1 + 0x40;
        piVar1 = &pCVar2->vertex_buffer_ptr[2].projected_vertex.transformed_y;
        *piVar1 = *piVar1 + 0x40;
        piVar1 = &pCVar2->vertex_buffer_ptr[3].projected_vertex.transformed_y;
        *piVar1 = *piVar1 + -0x40;
        (pCVar2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr->u = 7.34684e-40;
        pCVar2->vertex_buffer_ptr->v = 7.34684e-40;
        pCVar2->vertex_buffer_ptr[1].u = 7.34684e-40;
        pCVar2->vertex_buffer_ptr[1].v = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[2].u = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[2].v = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[3].u = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[3].v = 7.34684e-40;
        auStack_28._0_4_ = (uint)ROUND(*pfVar5 * _DAT_0065b9e0);
        auStack_28._4_4_ = (uint)ROUND(pfVar5[1] * _DAT_0065b9e0);
        iStack_20 = (int)ROUND(pfVar5[2] * _DAT_0065b9e0);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,(CVector3i *)auStack_28,(CVector3i *)0x0,0,2);
        auStack_28._4_4_ = (uint)ROUND(*pfVar4 * _DAT_0065b9e0);
        iStack_20 = (int)ROUND(pfVar4[1] * _DAT_0065b9e0);
        iStack_1c = (int)ROUND(pfVar4[2] * _DAT_0065b9e0);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,(CVector3i *)(auStack_28 + 4),(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff94);
        in_stack_0000001c = (int)ROUND(*pfVar5 * _DAT_0065b9e0);
        in_stack_00000020 = (int)ROUND(pfVar5[1] * _DAT_0065b9e0);
        in_stack_00000024 = (int)ROUND(pfVar5[2] * _DAT_0065b9e0);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&stack0x00000020);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)&stack0xfffffff4);
        in_stack_00000004 = (int)ROUND(*pfVar4 * _DAT_0065b9e0);
        in_stack_00000008 = (CDemonActor *)(int)ROUND(pfVar4[1] * _DAT_0065b9e0);
        in_stack_0000000c = (CDemonActor *)(int)ROUND(pfVar4[2] * _DAT_0065b9e0);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&stack0x00000004);
        in_stack_00000038 = (int)ROUND(*pfVar4 * _DAT_0065b9e0);
        in_stack_0000003c = (int)ROUND(pfVar4[1] * _DAT_0065b9e0);
        in_stack_00000040 = (int)ROUND(pfVar4[2] * _DAT_0065b9e0);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)&stack0x00000038);
        pCVar2 = g_CDemonRendererPtr;
        (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x =
             (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x + -0x40;
        pCVar2->vertex_buffer_ptr[1].projected_vertex.transformed_x =
             pCVar2->vertex_buffer_ptr[1].projected_vertex.transformed_x + 0x40;
        pCVar2->vertex_buffer_ptr[2].projected_vertex.transformed_x =
             pCVar2->vertex_buffer_ptr[2].projected_vertex.transformed_x + 0x40;
        pCVar2->vertex_buffer_ptr[3].projected_vertex.transformed_x =
             pCVar2->vertex_buffer_ptr[3].projected_vertex.transformed_x + -0x40;
        (pCVar2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr->u = 7.34684e-40;
        pCVar2->vertex_buffer_ptr->v = 7.34684e-40;
        pCVar2->vertex_buffer_ptr[1].u = 7.34684e-40;
        pCVar2->vertex_buffer_ptr[1].v = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[2].u = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[2].v = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[3].u = 2.2775203e-38;
        pCVar2->vertex_buffer_ptr[3].v = 7.34684e-40;
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,(CVector3i *)&stack0xfffffff4,(CVector3i *)0x0,0,2);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,(CVector3i *)&stack0xfffffff8,(CVector3i *)0x0,2,2);
        pfVar5 = pfVar5 + 9;
        pfVar4 = pfVar4 + 9;
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)auStack_50);
      }
      return 1;
    }
  }
  return 0;
}
