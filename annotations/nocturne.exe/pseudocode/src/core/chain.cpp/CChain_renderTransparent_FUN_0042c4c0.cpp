// Name: core_chain.cpp_CChain_renderTransparent_FUN_0042c4c0
// Address: 0042c4c0
// Address Range: [[0042c4c0, 0042ca80]]
// Convention: __cdecl
// Signature: int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_0042c4c0(CChain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_0042c4c0(CChain *this_ptr)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  SChainVertex *pSVar4;
  SChainVertex *pSVar5;
  SMRGLHeaderPrimitive SStack_b8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
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
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_90);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    this_ptr->is_visible = iVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    if (this_ptr->is_visible != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&this_ptr->texture_size);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
                (g_CDemonRenderer_PTR_005ae704,0);
      SStack_b8.base.count = 4;
      SStack_b8.surface_normal.D.i = 0;
      SStack_b8.surface_normal.C.i = 0;
      SStack_b8.surface_normal.B.i = 0;
      SStack_b8.surface_normal.A.i = 0;
      uStack_a0 = 0;
      uStack_9c = 1;
      uStack_98 = 2;
      uStack_94 = 3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                (g_CDemonRenderer_PTR_005ae704,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
      pSVar5 = this_ptr->vertices;
      pSVar4 = this_ptr->vertices;
      for (iVar3 = 0; pSVar4 = pSVar4 + 1, iVar3 < this_ptr->vertex_count + -1; iVar3 = iVar3 + 1) {
        CStack_3c.x = (int)ROUND((pSVar5->position).x * _DAT_0059b220);
        CStack_3c.y = (int)ROUND((pSVar5->position).y * _DAT_0059b220);
        CStack_3c.z = (int)ROUND((pSVar5->position).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&CStack_3c);
        CStack_78.x = (int)ROUND((pSVar5->position).x * _DAT_0059b220);
        CStack_78.y = (int)ROUND((pSVar5->position).y * _DAT_0059b220);
        CStack_78.z = (int)ROUND((pSVar5->position).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&CStack_78)
        ;
        CStack_48.x = (int)ROUND((pSVar4->position).x * _DAT_0059b220);
        CStack_48.y = (int)ROUND((pSVar4->position).y * _DAT_0059b220);
        CStack_48.z = (int)ROUND((pSVar4->position).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&CStack_48)
        ;
        CStack_18.x = (int)ROUND((pSVar4->position).x * _DAT_0059b220);
        CStack_18.y = (int)ROUND((pSVar4->position).y * _DAT_0059b220);
        CStack_18.z = (int)ROUND((pSVar4->position).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,&CStack_18)
        ;
        pCVar2 = g_CDemonRenderer_PTR_005ae704;
        piVar1 = &(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).transformed_y
        ;
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
        pCVar2->vertex_buffer_ptr->u = 0x80000;
        pCVar2->vertex_buffer_ptr->v = 0x80000;
        pCVar2->vertex_buffer_ptr[1].u = 0x80000;
        pCVar2->vertex_buffer_ptr[1].v = 0xf80000;
        pCVar2->vertex_buffer_ptr[2].u = 0xf80000;
        pCVar2->vertex_buffer_ptr[2].v = 0xf80000;
        pCVar2->vertex_buffer_ptr[3].u = 0xf80000;
        pCVar2->vertex_buffer_ptr[3].v = 0x80000;
        CStack_6c.x = (int)ROUND((pSVar5->position).x * _DAT_0059b220);
        CStack_6c.y = (int)ROUND((pSVar5->position).y * _DAT_0059b220);
        CStack_6c.z = (int)ROUND((pSVar5->position).z * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
                  (g_CDemonSet_PTR_005be368,&CStack_6c,(CVector3i *)0x0,0,2);
        CStack_6c.x = (int)ROUND((pSVar4->position).x * _DAT_0059b220);
        CStack_6c.y = (int)ROUND((pSVar4->position).y * _DAT_0059b220);
        CStack_6c.z = (int)ROUND((pSVar4->position).z * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
                  (g_CDemonSet_PTR_005be368,&CStack_6c,(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
                  (g_CDemonRenderer_PTR_005ae704,&SStack_b8);
        CStack_30.x = (int)ROUND((pSVar5->position).x * _DAT_0059b220);
        CStack_30.y = (int)ROUND((pSVar5->position).y * _DAT_0059b220);
        CStack_30.z = (int)ROUND((pSVar5->position).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&CStack_30);
        CStack_60.x = (int)ROUND((pSVar5->position).x * _DAT_0059b220);
        CStack_60.y = (int)ROUND((pSVar5->position).y * _DAT_0059b220);
        CStack_60.z = (int)ROUND((pSVar5->position).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&CStack_60)
        ;
        CStack_54.x = (int)ROUND((pSVar4->position).x * _DAT_0059b220);
        CStack_54.y = (int)ROUND((pSVar4->position).y * _DAT_0059b220);
        CStack_54.z = (int)ROUND((pSVar4->position).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&CStack_54)
        ;
        CStack_24.x = (int)ROUND((pSVar4->position).x * _DAT_0059b220);
        CStack_24.y = (int)ROUND((pSVar4->position).y * _DAT_0059b220);
        CStack_24.z = (int)ROUND((pSVar4->position).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,&CStack_24)
        ;
        pCVar2 = g_CDemonRenderer_PTR_005ae704;
        (g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x =
             (g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x +
             -0x40;
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
        pCVar2->vertex_buffer_ptr->u = 0x80000;
        pCVar2->vertex_buffer_ptr->v = 0x80000;
        pCVar2->vertex_buffer_ptr[1].u = 0x80000;
        pCVar2->vertex_buffer_ptr[1].v = 0xf80000;
        pCVar2->vertex_buffer_ptr[2].u = 0xf80000;
        pCVar2->vertex_buffer_ptr[2].v = 0xf80000;
        pCVar2->vertex_buffer_ptr[3].u = 0xf80000;
        pCVar2->vertex_buffer_ptr[3].v = 0x80000;
        CStack_6c.x = (int)ROUND((pSVar5->position).x * _DAT_0059b220);
        CStack_6c.y = (int)ROUND((pSVar5->position).y * _DAT_0059b220);
        CStack_6c.z = (int)ROUND((pSVar5->position).z * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
                  (g_CDemonSet_PTR_005be368,&CStack_6c,(CVector3i *)0x0,0,2);
        CStack_6c.x = (int)ROUND((pSVar4->position).x * _DAT_0059b220);
        CStack_6c.y = (int)ROUND((pSVar4->position).y * _DAT_0059b220);
        CStack_6c.z = (int)ROUND((pSVar4->position).z * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
                  (g_CDemonSet_PTR_005be368,&CStack_6c,(CVector3i *)0x0,2,2);
        pSVar5 = pSVar5 + 1;
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
                  (g_CDemonRenderer_PTR_005ae704,&SStack_b8);
      }
      return 1;
    }
  }
  return 0;
}
