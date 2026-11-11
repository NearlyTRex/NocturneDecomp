// Name: core_chain.cpp_FUN_005b56c0
// Address: 005b56c0
// Address Range: [[005b56c0, 005b5c95]]
// Convention: unknown
// Signature: undefined4 core_chain_cpp_FUN_005b56c0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_chain_cpp_FUN_005b56c0(CDemonActor *param_1)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  UActorVTable *pUVar6;
  uint *puVar7;
  float *pfVar8;
  byte bVar9;
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
  
  bVar9 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    (**(code **)((int)param_1->particle_systems[0].position.x + 0x1c))(param_1,0);
    puVar5 = auStack_ac;
    puVar7 = auStack_94;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    uVar4 = core_box_cpp_FUN_0041a840(auStack_94);
    *(uint *)(param_1[2].actor_name + 0xc) = uVar4;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    if (*(int *)(param_1[2].actor_name + 0xc) != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (DAT_0060b280,(SMRGLTextureBasic *)&param_1->particle_systems[0].max_particles);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
      SStack_d4.base.count = 4;
      SStack_d4.surface_normal.D.i = 0;
      SStack_d4.surface_normal.C.i = 0;
      SStack_d4.surface_normal.B.i = 0;
      SStack_d4.surface_normal.A.i = 0;
      uStack_bc = 0;
      uStack_b8 = 1;
      uStack_b4 = 2;
      uStack_b0 = 3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
      pfVar8 = &param_1->particle_systems[4].fade_end;
      pUVar6 = &param_1->vtable;
      for (iVar3 = 0; iVar3 < (int)param_1->particle_systems[0].position.y + -1; iVar3 = iVar3 + 1)
      {
        CStack_4c.x = (int)ROUND(*pfVar8 * _DAT_00601260);
        CStack_4c.y = (int)ROUND(pfVar8[1] * _DAT_00601260);
        CStack_4c.z = (int)ROUND(pfVar8[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_4c);
        CStack_7c.x = (int)ROUND(*pfVar8 * _DAT_00601260);
        CStack_7c.y = (int)ROUND(pfVar8[1] * _DAT_00601260);
        CStack_7c.z = (int)ROUND(pfVar8[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_7c);
        CStack_58.x = (int)ROUND((float)*pUVar6 * _DAT_00601260);
        CStack_58.y = (int)ROUND((float)pUVar6[1] * _DAT_00601260);
        CStack_58.z = (int)ROUND((float)pUVar6[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_58);
        CStack_28.x = (int)ROUND((float)*pUVar6 * _DAT_00601260);
        CStack_28.y = (int)ROUND((float)pUVar6[1] * _DAT_00601260);
        CStack_28.z = (int)ROUND((float)pUVar6[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_28);
        pCVar2 = DAT_0060b280;
        piVar1 = &(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_y;
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
        CStack_70.x = (int)ROUND(*pfVar8 * _DAT_00601260);
        CStack_70.y = (int)ROUND(pfVar8[1] * _DAT_00601260);
        CStack_70.z = (int)ROUND(pfVar8[2] * _DAT_00601260);
        core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,0,2);
        CStack_70.x = (int)ROUND((float)*pUVar6 * _DAT_00601260);
        CStack_70.y = (int)ROUND((float)pUVar6[1] * _DAT_00601260);
        CStack_70.z = (int)ROUND((float)pUVar6[2] * _DAT_00601260);
        core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&SStack_d4);
        CStack_64.x = (int)ROUND(*pfVar8 * _DAT_00601260);
        CStack_64.y = (int)ROUND(pfVar8[1] * _DAT_00601260);
        CStack_64.z = (int)ROUND(pfVar8[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_64);
        CStack_34.x = (int)ROUND(*pfVar8 * _DAT_00601260);
        CStack_34.y = (int)ROUND(pfVar8[1] * _DAT_00601260);
        CStack_34.z = (int)ROUND(pfVar8[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_34);
        CStack_1c.x = (int)ROUND((float)*pUVar6 * _DAT_00601260);
        CStack_1c.y = (int)ROUND((float)pUVar6[1] * _DAT_00601260);
        CStack_1c.z = (int)ROUND((float)pUVar6[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_1c);
        CStack_40.x = (int)ROUND((float)*pUVar6 * _DAT_00601260);
        CStack_40.y = (int)ROUND((float)pUVar6[1] * _DAT_00601260);
        CStack_40.z = (int)ROUND((float)pUVar6[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_40);
        pCVar2 = DAT_0060b280;
        (DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x =
             (DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x + -0x40;
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
        CStack_70.x = (int)ROUND(*pfVar8 * _DAT_00601260);
        CStack_70.y = (int)ROUND(pfVar8[1] * _DAT_00601260);
        CStack_70.z = (int)ROUND(pfVar8[2] * _DAT_00601260);
        core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,0,2);
        CStack_70.x = (int)ROUND((float)*pUVar6 * _DAT_00601260);
        CStack_70.y = (int)ROUND((float)pUVar6[1] * _DAT_00601260);
        CStack_70.z = (int)ROUND((float)pUVar6[2] * _DAT_00601260);
        core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,2,2);
        pfVar8 = pfVar8 + 9;
        pUVar6 = pUVar6 + 9;
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&SStack_d4);
      }
      return 1;
    }
  }
  return 0;
}
