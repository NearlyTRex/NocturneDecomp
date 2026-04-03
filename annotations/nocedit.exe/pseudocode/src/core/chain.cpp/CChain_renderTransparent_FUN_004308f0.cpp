// Name: core_chain.cpp_CChain_renderTransparent_FUN_004308f0
// Address: 004308f0
// Address Range: [[004308f0, 00430eae]]
// Convention: __cdecl
// Signature: int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_004308f0(CChain *this_ptr)

#include "nocturne.h"

int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_004308f0(CChain *this_ptr)

{
  int *piVar2;
  CDemonRenderer *pCVar3;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  int iVar4;
  SChainVertex *pSVar4;
  SChainVertex *pSVar5;
  SMRGLPrimitiveQuadIndex SStack_b8;
  CBoundingBox3D local_90;
  CVector3i CStack_78;
  CVector3i CStack_6c;
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  CVector3i CStack_3c;
  CVector3i CStack_30;
  CVector3i CStack_24;
  CVector3i CStack_18;
  CDemonRenderer *pCVar2;
  int *piVar1;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_90);
    iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    this_ptr->is_visible = iVar4;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    if (this_ptr->is_visible != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,(SMRGLTextureBasic *)&this_ptr->texture_size);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
      SStack_b8.base.base.count = 4;
      SStack_b8.base.surface_normal.D = 0;
      SStack_b8.base.surface_normal.C = 0;
      SStack_b8.base.surface_normal.B = 0;
      SStack_b8.base.surface_normal.A = 0;
      SStack_b8.vertices[0] = 0;
      SStack_b8.vertices[1] = 1;
      SStack_b8.vertices[2] = 2;
      SStack_b8.vertices[3] = 3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
      pSVar5 = this_ptr->vertices;
      pSVar4 = this_ptr->vertices;
      for (iVar4 = 0; pSVar4 = pSVar4 + 1, iVar4 < this_ptr->vertex_count + -1; iVar4 = iVar4 + 1) {
        CStack_3c.x = (int)ROUND((pSVar5->position).x * 256.0f);
        CStack_3c.y = (int)ROUND((pSVar5->position).y * 256.0f);
        CStack_3c.z = (int)ROUND((pSVar5->position).z * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_3c);
        CStack_78.x = (int)ROUND((pSVar5->position).x * 256.0f);
        CStack_78.y = (int)ROUND((pSVar5->position).y * 256.0f);
        CStack_78.z = (int)ROUND((pSVar5->position).z * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_78);
        CStack_48.x = (int)ROUND((pSVar4->position).x * 256.0f);
        CStack_48.y = (int)ROUND((pSVar4->position).y * 256.0f);
        CStack_48.z = (int)ROUND((pSVar4->position).z * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_48);
        CStack_18.x = (int)ROUND((pSVar4->position).x * 256.0f);
        CStack_18.y = (int)ROUND((pSVar4->position).y * 256.0f);
        CStack_18.z = (int)ROUND((pSVar4->position).z * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_18);
        pCVar2 = g_CDemonRendererPtr2;
        piVar1 = &(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_y;
        *piVar1 = *piVar1 + -0x40;
        piVar2 = &pCVar2->vertex_buffer_ptr[1].projected_vertex.transformed_y;
        *piVar2 = *piVar2 + 0x40;
        piVar2 = &pCVar2->vertex_buffer_ptr[2].projected_vertex.transformed_y;
        *piVar2 = *piVar2 + 0x40;
        piVar2 = &pCVar2->vertex_buffer_ptr[3].projected_vertex.transformed_y;
        *piVar2 = *piVar2 + -0x40;
        (pCVar2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr->u = 0x80000;
        pCVar2->vertex_buffer_ptr->v = 0x80000;
        pCVar2->vertex_buffer_ptr[1].u = 0x80000;
        pCVar2->vertex_buffer_ptr[1].v = 0xf80000;
        pCVar2->vertex_buffer_ptr[2].u = 0xf80000;
        pCVar2->vertex_buffer_ptr[2].v = 0xf80000;
        pCVar2->vertex_buffer_ptr[3].u = 0xf80000;
        pCVar2->vertex_buffer_ptr[3].v = 0x80000;
        CStack_6c.x = (int)ROUND((pSVar5->position).x * 256.0f);
        CStack_6c.y = (int)ROUND((pSVar5->position).y * 256.0f);
        CStack_6c.z = (int)ROUND((pSVar5->position).z * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,&CStack_6c,(CVector3i *)0x0,0,2);
        CStack_6c.x = (int)ROUND((pSVar4->position).x * 256.0f);
        CStack_6c.y = (int)ROUND((pSVar4->position).y * 256.0f);
        CStack_6c.z = (int)ROUND((pSVar4->position).z * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,&CStack_6c,(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr2,&SStack_b8.base);
        CStack_30.x = (int)ROUND((pSVar5->position).x * 256.0f);
        CStack_30.y = (int)ROUND((pSVar5->position).y * 256.0f);
        CStack_30.z = (int)ROUND((pSVar5->position).z * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_30);
        CStack_60.x = (int)ROUND((pSVar5->position).x * 256.0f);
        CStack_60.y = (int)ROUND((pSVar5->position).y * 256.0f);
        CStack_60.z = (int)ROUND((pSVar5->position).z * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_60);
        CStack_54.x = (int)ROUND((pSVar4->position).x * 256.0f);
        CStack_54.y = (int)ROUND((pSVar4->position).y * 256.0f);
        CStack_54.z = (int)ROUND((pSVar4->position).z * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_54);
        CStack_24.x = (int)ROUND((pSVar4->position).x * 256.0f);
        CStack_24.y = (int)ROUND((pSVar4->position).y * 256.0f);
        CStack_24.z = (int)ROUND((pSVar4->position).z * 256.0f);
        wincore_windll_cpp_transformPoint_FUN_005b5a25
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_24);
        pCVar3 = g_CDemonRendererPtr2;
        (g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x =
             (g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x + -0x40;
        pCVar3->vertex_buffer_ptr[1].projected_vertex.transformed_x =
             pCVar3->vertex_buffer_ptr[1].projected_vertex.transformed_x + 0x40;
        pCVar3->vertex_buffer_ptr[2].projected_vertex.transformed_x =
             pCVar3->vertex_buffer_ptr[2].projected_vertex.transformed_x + 0x40;
        pCVar3->vertex_buffer_ptr[3].projected_vertex.transformed_x =
             pCVar3->vertex_buffer_ptr[3].projected_vertex.transformed_x + -0x40;
        (pCVar3->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
        pCVar3->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
        pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
        pCVar3->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
        pCVar3->vertex_buffer_ptr->u = 0x80000;
        pCVar3->vertex_buffer_ptr->v = 0x80000;
        pCVar3->vertex_buffer_ptr[1].u = 0x80000;
        pCVar3->vertex_buffer_ptr[1].v = 0xf80000;
        pCVar3->vertex_buffer_ptr[2].u = 0xf80000;
        pCVar3->vertex_buffer_ptr[2].v = 0xf80000;
        pCVar3->vertex_buffer_ptr[3].u = 0xf80000;
        pCVar3->vertex_buffer_ptr[3].v = 0x80000;
        CStack_6c.x = (int)ROUND((pSVar5->position).x * 256.0f);
        CStack_6c.y = (int)ROUND((pSVar5->position).y * 256.0f);
        CStack_6c.z = (int)ROUND((pSVar5->position).z * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,&CStack_6c,(CVector3i *)0x0,0,2);
        CStack_6c.x = (int)ROUND((pSVar4->position).x * 256.0f);
        CStack_6c.y = (int)ROUND((pSVar4->position).y * 256.0f);
        CStack_6c.z = (int)ROUND((pSVar4->position).z * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                  (g_CDemonSetPtr,&CStack_6c,(CVector3i *)0x0,2,2);
        pSVar5 = pSVar5 + 1;
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr2,&SStack_b8.base);
      }
      return 1;
    }
  }
  return 0;
}
