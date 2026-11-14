// Name: core_chain.cpp_CChain_renderTransparent_FUN_00436600
// Address: 00436600
// Address Range: [[00436600, 00436bd5]]
// Convention: __cdecl
// Signature: int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_00436600(CChain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_00436600(CChain *this_ptr)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  uint *puVar4;
  SChainVertex *pSVar5;
  uint *puVar6;
  SChainVertex *pSVar7;
  byte bVar8;
  SMRGLHeaderPrimitive SStack_d4;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint auStack_ac [6];
  uint auStack_94 [6];
  CVector3i CStack_7c;
  CVector3i CStack_70;
  CVector3i CStack_64;
  CVector3i CStack_58;
  CVector3i CStack_4c;
  CVector3i CStack_40;
  CVector3i CStack_34;
  CVector3i CStack_28;
  CVector3i CStack_1c;
  
  bVar8 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar4 = auStack_ac;
    puVar6 = auStack_94;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    iVar3 = core_box_cpp_FUN_004207b0(auStack_94);
    this_ptr->is_visible = iVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
    if (this_ptr->is_visible != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (DAT_00612560,(SMRGLTextureBasic *)&this_ptr->texture_size);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
      SStack_d4.base.count = 4;
      SStack_d4.surface_normal.D.i = 0;
      SStack_d4.surface_normal.C.i = 0;
      SStack_d4.surface_normal.B.i = 0;
      SStack_d4.surface_normal.A.i = 0;
      uStack_bc = 0;
      uStack_b8 = 1;
      uStack_b4 = 2;
      uStack_b0 = 3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
      pSVar7 = this_ptr->vertices;
      pSVar5 = this_ptr->vertices;
      for (iVar3 = 0; pSVar5 = pSVar5 + 1, iVar3 < this_ptr->vertex_count + -1; iVar3 = iVar3 + 1) {
        CStack_4c.x = (int)ROUND((pSVar7->position).x * _DAT_005fd790);
        CStack_4c.y = (int)ROUND((pSVar7->position).y * _DAT_005fd790);
        CStack_4c.z = (int)ROUND((pSVar7->position).z * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_4c);
        CStack_7c.x = (int)ROUND((pSVar7->position).x * _DAT_005fd790);
        CStack_7c.y = (int)ROUND((pSVar7->position).y * _DAT_005fd790);
        CStack_7c.z = (int)ROUND((pSVar7->position).z * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_7c);
        CStack_58.x = (int)ROUND((pSVar5->position).x * _DAT_005fd790);
        CStack_58.y = (int)ROUND((pSVar5->position).y * _DAT_005fd790);
        CStack_58.z = (int)ROUND((pSVar5->position).z * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_58);
        CStack_28.x = (int)ROUND((pSVar5->position).x * _DAT_005fd790);
        CStack_28.y = (int)ROUND((pSVar5->position).y * _DAT_005fd790);
        CStack_28.z = (int)ROUND((pSVar5->position).z * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_28);
        pCVar2 = DAT_00612560;
        piVar1 = &(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_y;
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
        CStack_70.x = (int)ROUND((pSVar7->position).x * _DAT_005fd790);
        CStack_70.y = (int)ROUND((pSVar7->position).y * _DAT_005fd790);
        CStack_70.z = (int)ROUND((pSVar7->position).z * _DAT_005fd790);
        core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,0,2);
        CStack_70.x = (int)ROUND((pSVar5->position).x * _DAT_005fd790);
        CStack_70.y = (int)ROUND((pSVar5->position).y * _DAT_005fd790);
        CStack_70.z = (int)ROUND((pSVar5->position).z * _DAT_005fd790);
        core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,&SStack_d4);
        CStack_64.x = (int)ROUND((pSVar7->position).x * _DAT_005fd790);
        CStack_64.y = (int)ROUND((pSVar7->position).y * _DAT_005fd790);
        CStack_64.z = (int)ROUND((pSVar7->position).z * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_64);
        CStack_34.x = (int)ROUND((pSVar7->position).x * _DAT_005fd790);
        CStack_34.y = (int)ROUND((pSVar7->position).y * _DAT_005fd790);
        CStack_34.z = (int)ROUND((pSVar7->position).z * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_34);
        CStack_1c.x = (int)ROUND((pSVar5->position).x * _DAT_005fd790);
        CStack_1c.y = (int)ROUND((pSVar5->position).y * _DAT_005fd790);
        CStack_1c.z = (int)ROUND((pSVar5->position).z * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_1c);
        CStack_40.x = (int)ROUND((pSVar5->position).x * _DAT_005fd790);
        CStack_40.y = (int)ROUND((pSVar5->position).y * _DAT_005fd790);
        CStack_40.z = (int)ROUND((pSVar5->position).z * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_40);
        pCVar2 = DAT_00612560;
        (DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x =
             (DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x + -0x40;
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
        CStack_70.x = (int)ROUND((pSVar7->position).x * _DAT_005fd790);
        CStack_70.y = (int)ROUND((pSVar7->position).y * _DAT_005fd790);
        CStack_70.z = (int)ROUND((pSVar7->position).z * _DAT_005fd790);
        core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,0,2);
        CStack_70.x = (int)ROUND((pSVar5->position).x * _DAT_005fd790);
        CStack_70.y = (int)ROUND((pSVar5->position).y * _DAT_005fd790);
        CStack_70.z = (int)ROUND((pSVar5->position).z * _DAT_005fd790);
        core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,2,2);
        pSVar7 = pSVar7 + 1;
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,&SStack_d4);
      }
      return 1;
    }
  }
  return 0;
}
