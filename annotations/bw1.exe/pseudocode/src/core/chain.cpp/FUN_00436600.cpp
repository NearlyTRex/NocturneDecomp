// Name: core_chain.cpp_FUN_00436600
// Address: 00436600
// Address Range: [[00436600, 00436bd5]]
// Convention: unknown
// Signature: undefined4 core_chain_cpp_FUN_00436600(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_chain_cpp_FUN_00436600(CDemonActor *param_1)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  CDemonActor *pCVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar8;
  SMRGLHeaderPrimitive aSStack_d4 [4];
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint auStack_ac [6];
  uint auStack_94 [6];
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar4 = auStack_ac;
    puVar6 = auStack_94;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    uVar3 = core_box_cpp_FUN_004207b0(auStack_94);
    *(uint *)&param_1[4].field_0x14 = uVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(param_1);
    if (*(int *)&param_1[4].field_0x14 != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (DAT_00612560,(SMRGLTextureBasic *)&param_1[1].field_0x14);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
      uStack_d0 = 4;
      uStack_c0 = 0;
      uStack_c4 = 0;
      uStack_c8 = 0;
      uStack_cc = 0;
      uStack_bc = 0;
      uStack_b8 = 1;
      uStack_b4 = 2;
      uStack_b0 = 3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
      pfVar7 = (float *)&param_1[1].field_0x134;
      pCVar5 = param_1 + 2;
      for (iVar2 = 0; iVar2 < *(int *)(param_1 + 1) + -1; iVar2 = iVar2 + 1) {
        iStack_4c = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_48 = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_44 = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_4c);
        iStack_7c = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_78 = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_74 = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_7c);
        iStack_58 = (int)ROUND(*(float *)pCVar5 * _DAT_005fd790);
        iStack_54 = (int)ROUND(*(float *)&pCVar5->field_0x4 * _DAT_005fd790);
        iStack_50 = (int)ROUND(*(float *)&pCVar5->field_0x8 * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_58);
        iStack_28 = (int)ROUND(*(float *)pCVar5 * _DAT_005fd790);
        iStack_24 = (int)ROUND(*(float *)&pCVar5->field_0x4 * _DAT_005fd790);
        iStack_20 = (int)ROUND(*(float *)&pCVar5->field_0x8 * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_28);
        pCVar1 = DAT_00612560;
        *(int *)(*(int *)DAT_00612560 + 4) = *(int *)(*(int *)DAT_00612560 + 4) + -0x40;
        *(int *)(*(int *)pCVar1 + 0x34) = *(int *)(*(int *)pCVar1 + 0x34) + 0x40;
        *(int *)(*(int *)pCVar1 + 100) = *(int *)(*(int *)pCVar1 + 100) + 0x40;
        *(int *)(*(int *)pCVar1 + 0x94) = *(int *)(*(int *)pCVar1 + 0x94) + -0x40;
        *(uint *)(*(int *)pCVar1 + 0x10) = 0x80000000;
        *(uint *)(*(int *)pCVar1 + 0x40) = 0x80000000;
        *(uint *)(*(int *)pCVar1 + 0x70) = 0x80000000;
        *(uint *)(*(int *)pCVar1 + 0xa0) = 0x80000000;
        *(uint *)(*(int *)pCVar1 + 0x18) = 0x80000;
        *(uint *)(*(int *)pCVar1 + 0x1c) = 0x80000;
        *(uint *)(*(int *)pCVar1 + 0x48) = 0x80000;
        *(uint *)(*(int *)pCVar1 + 0x4c) = 0xf80000;
        *(uint *)(*(int *)pCVar1 + 0x78) = 0xf80000;
        *(uint *)(*(int *)pCVar1 + 0x7c) = 0xf80000;
        *(uint *)(*(int *)pCVar1 + 0xa8) = 0xf80000;
        *(uint *)(*(int *)pCVar1 + 0xac) = 0x80000;
        iStack_70 = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_6c = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_68 = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
                  (g_CDemonSetPtr,(CVector3i *)&iStack_70,(CVector3i *)0x0,0,2);
        iStack_70 = (int)ROUND(*(float *)pCVar5 * _DAT_005fd790);
        iStack_6c = (int)ROUND(*(float *)&pCVar5->field_0x4 * _DAT_005fd790);
        iStack_68 = (int)ROUND(*(float *)&pCVar5->field_0x8 * _DAT_005fd790);
        core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
                  (g_CDemonSetPtr,(CVector3i *)&iStack_70,(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,aSStack_d4);
        iStack_64 = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_60 = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_5c = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_64);
        iStack_34 = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_30 = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_2c = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_34);
        iStack_1c = (int)ROUND(*(float *)pCVar5 * _DAT_005fd790);
        iStack_18 = (int)ROUND(*(float *)&pCVar5->field_0x4 * _DAT_005fd790);
        iStack_14 = (int)ROUND(*(float *)&pCVar5->field_0x8 * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_1c);
        iStack_40 = (int)ROUND(*(float *)pCVar5 * _DAT_005fd790);
        iStack_3c = (int)ROUND(*(float *)&pCVar5->field_0x4 * _DAT_005fd790);
        iStack_38 = (int)ROUND(*(float *)&pCVar5->field_0x8 * _DAT_005fd790);
        engine_special_cpp_FUN_0058043c
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_40);
        pCVar1 = DAT_00612560;
        **(int **)DAT_00612560 = **(int **)DAT_00612560 + -0x40;
        *(int *)(*(int *)pCVar1 + 0x30) = *(int *)(*(int *)pCVar1 + 0x30) + 0x40;
        *(int *)(*(int *)pCVar1 + 0x60) = *(int *)(*(int *)pCVar1 + 0x60) + 0x40;
        *(int *)(*(int *)pCVar1 + 0x90) = *(int *)(*(int *)pCVar1 + 0x90) + -0x40;
        *(uint *)(*(int *)pCVar1 + 0x10) = 0x80000000;
        *(uint *)(*(int *)pCVar1 + 0x40) = 0x80000000;
        *(uint *)(*(int *)pCVar1 + 0x70) = 0x80000000;
        *(uint *)(*(int *)pCVar1 + 0xa0) = 0x80000000;
        *(uint *)(*(int *)pCVar1 + 0x18) = 0x80000;
        *(uint *)(*(int *)pCVar1 + 0x1c) = 0x80000;
        *(uint *)(*(int *)pCVar1 + 0x48) = 0x80000;
        *(uint *)(*(int *)pCVar1 + 0x4c) = 0xf80000;
        *(uint *)(*(int *)pCVar1 + 0x78) = 0xf80000;
        *(uint *)(*(int *)pCVar1 + 0x7c) = 0xf80000;
        *(uint *)(*(int *)pCVar1 + 0xa8) = 0xf80000;
        *(uint *)(*(int *)pCVar1 + 0xac) = 0x80000;
        iStack_70 = (int)ROUND(*pfVar7 * _DAT_005fd790);
        iStack_6c = (int)ROUND(pfVar7[1] * _DAT_005fd790);
        iStack_68 = (int)ROUND(pfVar7[2] * _DAT_005fd790);
        core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
                  (g_CDemonSetPtr,(CVector3i *)&iStack_70,(CVector3i *)0x0,0,2);
        iStack_70 = (int)ROUND(*(float *)pCVar5 * _DAT_005fd790);
        iStack_6c = (int)ROUND(*(float *)&pCVar5->field_0x4 * _DAT_005fd790);
        iStack_68 = (int)ROUND(*(float *)&pCVar5->field_0x8 * _DAT_005fd790);
        core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
                  (g_CDemonSetPtr,(CVector3i *)&iStack_70,(CVector3i *)0x0,2,2);
        pfVar7 = pfVar7 + 9;
        pCVar5 = (CDemonActor *)&pCVar5->field_0x24;
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,aSStack_d4);
      }
      return 1;
    }
  }
  return 0;
}
