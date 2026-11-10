// Name: core_chain.cpp_CChain_renderTransparent_FUN_0042a280
// Address: 0042a280
// Address Range: [[0042a280, 0042a855]]
// Convention: __cdecl
// Signature: int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_0042a280(CChain *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_0042a280(CChain *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint *puVar3;
  SChainVertex *pSVar4;
  uint *puVar5;
  SChainVertex *pSVar6;
  byte bVar7;
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
  
  bVar7 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar3 = auStack_ac;
    puVar5 = auStack_94;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
    iVar2 = core_box_cpp_FUN_0041daf0(auStack_94);
    this_ptr->is_visible = iVar2;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    if (this_ptr->is_visible != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)&this_ptr->texture_size);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
      SStack_d4.base.count = 4;
      SStack_d4.surface_normal.D.i = 0;
      SStack_d4.surface_normal.C.i = 0;
      SStack_d4.surface_normal.B.i = 0;
      SStack_d4.surface_normal.A.i = 0;
      uStack_bc = 0;
      uStack_b8 = 1;
      uStack_b4 = 2;
      uStack_b0 = 3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
      pSVar6 = this_ptr->vertices;
      pSVar4 = this_ptr->vertices;
      for (iVar2 = 0; pSVar4 = pSVar4 + 1, iVar2 < this_ptr->vertex_count + -1; iVar2 = iVar2 + 1) {
        CStack_4c.x = (int)ROUND((pSVar6->position).x * _DAT_005dd0d0);
        CStack_4c.y = (int)ROUND((pSVar6->position).y * _DAT_005dd0d0);
        CStack_4c.z = (int)ROUND((pSVar6->position).z * _DAT_005dd0d0);
        engine_special_cpp_FUN_0056356c
                  ((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&CStack_4c);
        CStack_7c.x = (int)ROUND((pSVar6->position).x * _DAT_005dd0d0);
        CStack_7c.y = (int)ROUND((pSVar6->position).y * _DAT_005dd0d0);
        CStack_7c.z = (int)ROUND((pSVar6->position).z * _DAT_005dd0d0);
        engine_special_cpp_FUN_0056356c
                  ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&CStack_7c);
        CStack_58.x = (int)ROUND((pSVar4->position).x * _DAT_005dd0d0);
        CStack_58.y = (int)ROUND((pSVar4->position).y * _DAT_005dd0d0);
        CStack_58.z = (int)ROUND((pSVar4->position).z * _DAT_005dd0d0);
        engine_special_cpp_FUN_0056356c
                  ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&CStack_58);
        CStack_28.x = (int)ROUND((pSVar4->position).x * _DAT_005dd0d0);
        CStack_28.y = (int)ROUND((pSVar4->position).y * _DAT_005dd0d0);
        CStack_28.z = (int)ROUND((pSVar4->position).z * _DAT_005dd0d0);
        engine_special_cpp_FUN_0056356c
                  ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x90),&CStack_28);
        pCVar1 = DAT_005f2afc;
        *(int *)(DAT_005f2afc->vertex_buffer_ptr + 4) =
             *(int *)(DAT_005f2afc->vertex_buffer_ptr + 4) + -0x40;
        *(int *)(pCVar1->vertex_buffer_ptr + 0x34) =
             *(int *)(pCVar1->vertex_buffer_ptr + 0x34) + 0x40;
        *(int *)(pCVar1->vertex_buffer_ptr + 100) = *(int *)(pCVar1->vertex_buffer_ptr + 100) + 0x40
        ;
        *(int *)(pCVar1->vertex_buffer_ptr + 0x94) =
             *(int *)(pCVar1->vertex_buffer_ptr + 0x94) + -0x40;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x10) = 0x80000000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x40) = 0x80000000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x70) = 0x80000000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0xa0) = 0x80000000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x18) = 0x80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x1c) = 0x80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x48) = 0x80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x4c) = 0xf80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x78) = 0xf80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x7c) = 0xf80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0xa8) = 0xf80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0xac) = 0x80000;
        CStack_70.x = (int)ROUND((pSVar6->position).x * _DAT_005dd0d0);
        CStack_70.y = (int)ROUND((pSVar6->position).y * _DAT_005dd0d0);
        CStack_70.z = (int)ROUND((pSVar6->position).z * _DAT_005dd0d0);
        core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,0,2);
        CStack_70.x = (int)ROUND((pSVar4->position).x * _DAT_005dd0d0);
        CStack_70.y = (int)ROUND((pSVar4->position).y * _DAT_005dd0d0);
        CStack_70.z = (int)ROUND((pSVar4->position).z * _DAT_005dd0d0);
        core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,&SStack_d4);
        CStack_64.x = (int)ROUND((pSVar6->position).x * _DAT_005dd0d0);
        CStack_64.y = (int)ROUND((pSVar6->position).y * _DAT_005dd0d0);
        CStack_64.z = (int)ROUND((pSVar6->position).z * _DAT_005dd0d0);
        engine_special_cpp_FUN_0056356c
                  ((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&CStack_64);
        CStack_34.x = (int)ROUND((pSVar6->position).x * _DAT_005dd0d0);
        CStack_34.y = (int)ROUND((pSVar6->position).y * _DAT_005dd0d0);
        CStack_34.z = (int)ROUND((pSVar6->position).z * _DAT_005dd0d0);
        engine_special_cpp_FUN_0056356c
                  ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&CStack_34);
        CStack_1c.x = (int)ROUND((pSVar4->position).x * _DAT_005dd0d0);
        CStack_1c.y = (int)ROUND((pSVar4->position).y * _DAT_005dd0d0);
        CStack_1c.z = (int)ROUND((pSVar4->position).z * _DAT_005dd0d0);
        engine_special_cpp_FUN_0056356c
                  ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&CStack_1c);
        CStack_40.x = (int)ROUND((pSVar4->position).x * _DAT_005dd0d0);
        CStack_40.y = (int)ROUND((pSVar4->position).y * _DAT_005dd0d0);
        CStack_40.z = (int)ROUND((pSVar4->position).z * _DAT_005dd0d0);
        engine_special_cpp_FUN_0056356c
                  ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x90),&CStack_40);
        pCVar1 = DAT_005f2afc;
        *(int *)DAT_005f2afc->vertex_buffer_ptr = *(int *)DAT_005f2afc->vertex_buffer_ptr + -0x40;
        *(int *)(pCVar1->vertex_buffer_ptr + 0x30) =
             *(int *)(pCVar1->vertex_buffer_ptr + 0x30) + 0x40;
        *(int *)(pCVar1->vertex_buffer_ptr + 0x60) =
             *(int *)(pCVar1->vertex_buffer_ptr + 0x60) + 0x40;
        *(int *)(pCVar1->vertex_buffer_ptr + 0x90) =
             *(int *)(pCVar1->vertex_buffer_ptr + 0x90) + -0x40;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x10) = 0x80000000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x40) = 0x80000000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x70) = 0x80000000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0xa0) = 0x80000000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x18) = 0x80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x1c) = 0x80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x48) = 0x80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x4c) = 0xf80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x78) = 0xf80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0x7c) = 0xf80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0xa8) = 0xf80000;
        *(uint *)(pCVar1->vertex_buffer_ptr + 0xac) = 0x80000;
        CStack_70.x = (int)ROUND((pSVar6->position).x * _DAT_005dd0d0);
        CStack_70.y = (int)ROUND((pSVar6->position).y * _DAT_005dd0d0);
        CStack_70.z = (int)ROUND((pSVar6->position).z * _DAT_005dd0d0);
        core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,0,2);
        CStack_70.x = (int)ROUND((pSVar4->position).x * _DAT_005dd0d0);
        CStack_70.y = (int)ROUND((pSVar4->position).y * _DAT_005dd0d0);
        CStack_70.z = (int)ROUND((pSVar4->position).z * _DAT_005dd0d0);
        core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,2,2);
        pSVar6 = pSVar6 + 1;
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,&SStack_d4);
      }
      return 1;
    }
  }
  return 0;
}
