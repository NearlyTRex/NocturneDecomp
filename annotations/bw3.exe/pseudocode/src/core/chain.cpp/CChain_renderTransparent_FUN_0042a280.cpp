// Name: core_chain.cpp_CChain_renderTransparent_FUN_0042a280
// Address: 0042a280
// Address Range: [[0042a280, 0042a855]]
// Convention: __cdecl
// Signature: int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_0042a280(CChain *this_ptr)

#include "nocturne.h"

int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_0042a280(CChain *this_ptr)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar8;
  int in_stack_0000000c;
  int in_stack_ffffff30;
  SMRGLHeaderPrimitive SStack_cc;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint auStack_a4 [4];
  uint auStack_94 [2];
  CBoundingBox3D CStack_8c;
  CVector3i CStack_74;
  CVector3i CStack_68;
  CVector3i CStack_5c;
  CVector3i CStack_50;
  CVector3i CStack_44;
  CVector3i CStack_38;
  CVector3i CStack_2c;
  CVector3i CStack_20;
  int iStack_14;
  
  bVar8 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(g_CDemonRenderer_PTR_005f2afc)
  ;
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar4 = auStack_a4;
    puVar6 = auStack_94;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(&CStack_8c,in_stack_ffffff30);
    this_ptr->is_visible = iVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    if (this_ptr->is_visible != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (g_CDemonRenderer_PTR_005f2afc,(SMRGLTextureBasic *)&this_ptr->texture_size);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460
                (g_CDemonRenderer_PTR_005f2afc,0);
      SStack_cc.base.count = 4;
      SStack_cc.surface_normal.D.i = 0;
      SStack_cc.surface_normal.C.i = 0;
      SStack_cc.surface_normal.B.i = 0;
      SStack_cc.surface_normal.A.i = 0;
      uStack_b4 = 0;
      uStack_b0 = 1;
      uStack_ac = 2;
      uStack_a8 = 3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
                (g_CDemonRenderer_PTR_005f2afc,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,0);
      pfVar7 = (float *)(in_stack_0000000c + 0x28c);
      pfVar5 = (float *)(in_stack_0000000c + 0x2b0);
      for (iVar3 = 0; iVar3 < *(int *)(in_stack_0000000c + 0x158) + -1; iVar3 = iVar3 + 1) {
        CStack_44.x = (int)ROUND(*pfVar7 * 256.0f);
        CStack_44.y = (int)ROUND(pfVar7[1] * 256.0f);
        CStack_44.z = (int)ROUND(pfVar7[2] * 256.0f);
        engine_special_cpp_transformPoint_FUN_0056356c
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_44);
        CStack_74.x = (int)ROUND(*pfVar7 * 256.0f);
        CStack_74.y = (int)ROUND(pfVar7[1] * 256.0f);
        CStack_74.z = (int)ROUND(pfVar7[2] * 256.0f);
        engine_special_cpp_transformPoint_FUN_0056356c
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_74)
        ;
        CStack_50.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_50.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_50.z = (int)ROUND(pfVar5[2] * 256.0f);
        engine_special_cpp_transformPoint_FUN_0056356c
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_50)
        ;
        CStack_20.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_20.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_20.z = (int)ROUND(pfVar5[2] * 256.0f);
        engine_special_cpp_transformPoint_FUN_0056356c
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_20)
        ;
        pCVar2 = g_CDemonRenderer_PTR_005f2afc;
        piVar1 = &(g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_y
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
        CStack_68.x = (int)ROUND(*pfVar7 * 256.0f);
        CStack_68.y = (int)ROUND(pfVar7[1] * 256.0f);
        CStack_68.z = (int)ROUND(pfVar7[2] * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                  (g_CDemonSetPtr,&CStack_68,(CVector3i *)0x0,0,2);
        CStack_68.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_68.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_68.z = (int)ROUND(pfVar5[2] * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                  (g_CDemonSetPtr,&CStack_68,(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
                  (g_CDemonRenderer_PTR_005f2afc,&SStack_cc);
        CStack_5c.x = (int)ROUND(*pfVar7 * 256.0f);
        CStack_5c.y = (int)ROUND(pfVar7[1] * 256.0f);
        CStack_5c.z = (int)ROUND(pfVar7[2] * 256.0f);
        engine_special_cpp_transformPoint_FUN_0056356c
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_5c);
        CStack_2c.x = (int)ROUND(*pfVar7 * 256.0f);
        CStack_2c.y = (int)ROUND(pfVar7[1] * 256.0f);
        CStack_2c.z = (int)ROUND(pfVar7[2] * 256.0f);
        engine_special_cpp_transformPoint_FUN_0056356c
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_2c)
        ;
        iStack_14 = (int)ROUND(*pfVar5 * 256.0f);
        engine_special_cpp_transformPoint_FUN_0056356c
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&iStack_14);
        CStack_38.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_38.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_38.z = (int)ROUND(pfVar5[2] * 256.0f);
        engine_special_cpp_transformPoint_FUN_0056356c
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_38)
        ;
        pCVar2 = g_CDemonRenderer_PTR_005f2afc;
        (g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x =
             (g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x +
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
        CStack_68.x = (int)ROUND(*pfVar7 * 256.0f);
        CStack_68.y = (int)ROUND(pfVar7[1] * 256.0f);
        CStack_68.z = (int)ROUND(pfVar7[2] * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                  (g_CDemonSetPtr,&CStack_68,(CVector3i *)0x0,0,2);
        CStack_68.x = (int)ROUND(*pfVar5 * 256.0f);
        CStack_68.y = (int)ROUND(pfVar5[1] * 256.0f);
        CStack_68.z = (int)ROUND(pfVar5[2] * 256.0f);
        core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                  (g_CDemonSetPtr,&CStack_68,(CVector3i *)0x0,2,2);
        pfVar7 = pfVar7 + 9;
        pfVar5 = pfVar5 + 9;
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
                  (g_CDemonRenderer_PTR_005f2afc,&SStack_cc);
      }
      return 1;
    }
  }
  return 0;
}
