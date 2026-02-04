// Name: core_chain.cpp_CChain_renderTransparent_FUN_004308f0
// Address: 004308f0
// Address Range: [[004308f0, 00430eae]]
// Convention: __cdecl
// Signature: int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_004308f0(CChain *this_ptr)

#include "nocturne.h"

int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_004308f0(CChain *this_ptr)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  float *pfVar4;
  float *pfVar5;
  int in_stack_0000000c;
  SMRGLHeaderPrimitive SStack_b0;
  uint uStack_98;
  uint uStack_94;
  CBoundingBox3D local_90;
  CVector3i CStack_70;
  CVector3i CStack_64;
  CVector3i CStack_58;
  CVector3i CStack_4c;
  CVector3i CStack_40;
  CVector3i CStack_34;
  CVector3i CStack_28;
  CVector3i CStack_1c;
  int iStack_10;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_90);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    *(int *)(this_ptr->unk7 + 8) = iVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    if (*(int *)(this_ptr->unk7 + 8) != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,(SMRGLTextureBasic *)&this_ptr->unk2);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
      SStack_b0.base.count = 4;
      SStack_b0.surface_normal.D = 0;
      SStack_b0.surface_normal.C = 0;
      SStack_b0.surface_normal.B = 0;
      SStack_b0.surface_normal.A = 0;
      uStack_98 = 0;
      uStack_94 = 1;
      local_90.min.x = 2.8026e-45;
      local_90.min.y = 4.2039e-45;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
      pfVar5 = (float *)(in_stack_0000000c + 0x28c);
      pfVar4 = (float *)(in_stack_0000000c + 0x2b0);
      for (iVar3 = 0; iVar3 < *(int *)(in_stack_0000000c + 0x158) + -1; iVar3 = iVar3 + 1) {
        CStack_34.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_34.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_34.z = (int)ROUND(pfVar5[2] * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_34);
        CStack_70.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_70.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_70.z = (int)ROUND(pfVar5[2] * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_70);
        CStack_40.x = (int)ROUND(*pfVar4 * 256.0f);
        CStack_40.y = (int)ROUND(pfVar4[1] * 256.0f);
        CStack_40.z = (int)ROUND(pfVar4[2] * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_40);
        iStack_10 = (int)ROUND(*pfVar4 * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)&iStack_10);
        pCVar2 = g_CDemonRendererPtr2;
        piVar1 = &(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_y;
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
        CStack_64.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_64.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_64.z = (int)ROUND(pfVar5[2] * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,&CStack_64,(CVector3i *)0x0,0,2);
        CStack_64.x = (int)ROUND(*pfVar4 * 256.0f);
        CStack_64.y = (int)ROUND(pfVar4[1] * 256.0f);
        CStack_64.z = (int)ROUND(pfVar4[2] * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,&CStack_64,(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr2,&SStack_b0);
        CStack_28.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_28.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_28.z = (int)ROUND(pfVar5[2] * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_28);
        CStack_58.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_58.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_58.z = (int)ROUND(pfVar5[2] * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_58);
        CStack_4c.x = (int)ROUND(*pfVar4 * 256.0f);
        CStack_4c.y = (int)ROUND(pfVar4[1] * 256.0f);
        CStack_4c.z = (int)ROUND(pfVar4[2] * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_4c);
        CStack_1c.x = (int)ROUND(*pfVar4 * 256.0f);
        CStack_1c.y = (int)ROUND(pfVar4[1] * 256.0f);
        CStack_1c.z = (int)ROUND(pfVar4[2] * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_1c);
        pCVar2 = g_CDemonRendererPtr2;
        (g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x =
             (g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x + -0x40;
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
        CStack_64.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_64.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_64.z = (int)ROUND(pfVar5[2] * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,&CStack_64,(CVector3i *)0x0,0,2);
        CStack_64.x = (int)ROUND(*pfVar4 * 256.0f);
        CStack_64.y = (int)ROUND(pfVar4[1] * 256.0f);
        CStack_64.z = (int)ROUND(pfVar4[2] * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,&CStack_64,(CVector3i *)0x0,2,2);
        pfVar5 = pfVar5 + 9;
        pfVar4 = pfVar4 + 9;
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr2,&SStack_b0);
      }
      return 1;
    }
  }
  return 0;
}
