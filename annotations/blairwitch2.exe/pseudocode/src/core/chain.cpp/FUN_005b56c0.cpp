// Name: core_chain.cpp_FUN_005b56c0
// Address: 005b56c0
// Address Range: [[005b56c0, 005b5c95]]
// Convention: unknown
// Signature: undefined4 core_chain_cpp_FUN_005b56c0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_chain_cpp_FUN_005b56c0(CDemonActor *param_1)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  UActorVTable *pUVar5;
  uint *puVar6;
  float *pfVar7;
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
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar4 = auStack_ac;
    puVar6 = auStack_94;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    uVar3 = core_box_cpp_FUN_0041a840(auStack_94);
    *(uint *)(param_1[2].actor_name + 0xc) = uVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    if (*(int *)(param_1[2].actor_name + 0xc) != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (DAT_0060b280,(SMRGLTextureBasic *)&param_1->field_0x16c);
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
      pfVar7 = (float *)&param_1->field_0x28c;
      pUVar5 = &param_1->vtable;
      for (iVar2 = 0; iVar2 < *(int *)&param_1->field_0x158 + -1; iVar2 = iVar2 + 1) {
        CStack_4c.x = (int)ROUND(*pfVar7 * _DAT_00601260);
        CStack_4c.y = (int)ROUND(pfVar7[1] * _DAT_00601260);
        CStack_4c.z = (int)ROUND(pfVar7[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  ((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&CStack_4c);
        CStack_7c.x = (int)ROUND(*pfVar7 * _DAT_00601260);
        CStack_7c.y = (int)ROUND(pfVar7[1] * _DAT_00601260);
        CStack_7c.z = (int)ROUND(pfVar7[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&CStack_7c);
        CStack_58.x = (int)ROUND((float)*pUVar5 * _DAT_00601260);
        CStack_58.y = (int)ROUND((float)pUVar5[1] * _DAT_00601260);
        CStack_58.z = (int)ROUND((float)pUVar5[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&CStack_58);
        CStack_28.x = (int)ROUND((float)*pUVar5 * _DAT_00601260);
        CStack_28.y = (int)ROUND((float)pUVar5[1] * _DAT_00601260);
        CStack_28.z = (int)ROUND((float)pUVar5[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&CStack_28);
        pCVar1 = DAT_0060b280;
        *(int *)(DAT_0060b280->vertex_buffer_ptr + 4) =
             *(int *)(DAT_0060b280->vertex_buffer_ptr + 4) + -0x40;
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
        CStack_70.x = (int)ROUND(*pfVar7 * _DAT_00601260);
        CStack_70.y = (int)ROUND(pfVar7[1] * _DAT_00601260);
        CStack_70.z = (int)ROUND(pfVar7[2] * _DAT_00601260);
        core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,0,2);
        CStack_70.x = (int)ROUND((float)*pUVar5 * _DAT_00601260);
        CStack_70.y = (int)ROUND((float)pUVar5[1] * _DAT_00601260);
        CStack_70.z = (int)ROUND((float)pUVar5[2] * _DAT_00601260);
        core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&SStack_d4);
        CStack_64.x = (int)ROUND(*pfVar7 * _DAT_00601260);
        CStack_64.y = (int)ROUND(pfVar7[1] * _DAT_00601260);
        CStack_64.z = (int)ROUND(pfVar7[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  ((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&CStack_64);
        CStack_34.x = (int)ROUND(*pfVar7 * _DAT_00601260);
        CStack_34.y = (int)ROUND(pfVar7[1] * _DAT_00601260);
        CStack_34.z = (int)ROUND(pfVar7[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&CStack_34);
        CStack_1c.x = (int)ROUND((float)*pUVar5 * _DAT_00601260);
        CStack_1c.y = (int)ROUND((float)pUVar5[1] * _DAT_00601260);
        CStack_1c.z = (int)ROUND((float)pUVar5[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&CStack_1c);
        CStack_40.x = (int)ROUND((float)*pUVar5 * _DAT_00601260);
        CStack_40.y = (int)ROUND((float)pUVar5[1] * _DAT_00601260);
        CStack_40.z = (int)ROUND((float)pUVar5[2] * _DAT_00601260);
        engine_special_cpp_FUN_0055d9ec
                  ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&CStack_40);
        pCVar1 = DAT_0060b280;
        *(int *)DAT_0060b280->vertex_buffer_ptr = *(int *)DAT_0060b280->vertex_buffer_ptr + -0x40;
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
        CStack_70.x = (int)ROUND(*pfVar7 * _DAT_00601260);
        CStack_70.y = (int)ROUND(pfVar7[1] * _DAT_00601260);
        CStack_70.z = (int)ROUND(pfVar7[2] * _DAT_00601260);
        core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,0,2);
        CStack_70.x = (int)ROUND((float)*pUVar5 * _DAT_00601260);
        CStack_70.y = (int)ROUND((float)pUVar5[1] * _DAT_00601260);
        CStack_70.z = (int)ROUND((float)pUVar5[2] * _DAT_00601260);
        core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
                  (g_CDemonSetPtr,&CStack_70,(CVector3i *)0x0,2,2);
        pfVar7 = pfVar7 + 9;
        pUVar5 = pUVar5 + 9;
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&SStack_d4);
      }
      return 1;
    }
  }
  return 0;
}
