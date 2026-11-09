// Name: core_fire.cpp_FUN_0049f520
// Address: 0049f520
// Address Range: [[0049f520, 0049fcdc]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049f520(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049f520(int *param_1)

{
  CVector3f *world_position;
  float *pfVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  SMRGLTextureBasic *texture;
  uint uVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  uint auStackY_103c [975];
  SMRGLHeaderPrimitive local_e8 [4];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  float local_84;
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  CVector3f local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CVector3f local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar5 = 0;
  if (0.0 < (float)param_1[5]) {
    iVar3 = *param_1;
    if (iVar3 == 2) {
      iVar3 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fd984 + (iVar3 % 6) * 0x18);
    }
    else if (iVar3 == 3) {
      iVar3 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fda14 + (iVar3 % 6) * 0x18);
    }
    else if (iVar3 == 4) {
      iVar3 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fdaa4 + (iVar3 % 6) * 0x18);
    }
    else if (iVar3 == 5) {
      iVar3 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fdb34 + (iVar3 % 6) * 0x18);
    }
    else {
      iVar3 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fd8f4 + (iVar3 % 6) * 0x18);
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    local_e4 = 4;
    local_d4 = 0;
    local_d8 = 0;
    local_dc = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c4 = 3;
    local_cc = 1;
    local_c8 = 2;
    uVar4 = rand();
    if ((uVar4 & 1) == 0) {
      _DAT_0060b05c = 0x80000;
      _DAT_0060b08c = 0x80000;
      _DAT_0060b0bc = 0xf80000;
      DAT_0060b02c = 0xf80000;
    }
    else {
      _DAT_0060b05c = 0xf80000;
      _DAT_0060b08c = 0xf80000;
      _DAT_0060b0bc = 0x80000;
      DAT_0060b02c = 0x80000;
    }
    _DAT_0060b0c0 = 0xf80000;
    DAT_0060b090 = 0xf80000;
    _DAT_0060b060 = 0x80000;
    _DAT_0060b030 = 0x80000;
    DAT_0060b034 = 0xffff;
    DAT_0060b038 = 0xffff;
    DAT_0060b03c = 0xffff;
    DAT_0060b064 = 0xffff;
    DAT_0060b068 = 0xffff;
    DAT_0060b06c = 0xffff;
    _DAT_0060b094 = 0xffff;
    _DAT_0060b098 = 0xffff;
    _DAT_0060b09c = 0xffff;
    _DAT_0060b0c4 = 0xffff;
    _DAT_0060b0c8 = 0xffff;
    _DAT_0060b0cc = 0xffff;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,param_1[0xb]);
    world_position = (CVector3f *)(param_1 + 1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    if (*param_1 == 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                (DAT_005f2afc,world_position);
      engine_matrix_c_FUN_0046d250(DAT_005f2afc);
      local_54._0_4_ = local_24._0_4_;
      *(uint *)((int)&local_54 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&local_24 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&local_54 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&local_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      local_54._0_4_ = 0;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,&local_54,(CVector3f *)0x0);
      local_7c = 0.0;
      if (0.0 < (float)param_1[6]) {
        local_84 = (float)param_1[6];
      }
      else {
        local_84 = (float)param_1[4] * (float)_DAT_005c08f8;
      }
      local_80 = (float)param_1[4];
      local_30 = (int)ROUND(local_84 * _DAT_005df8e4);
      local_2c = (int)ROUND(local_80 * _DAT_005df8e4);
      local_28 = (int)ROUND(_DAT_005df8e4 * 0.0);
      engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_30);
      local_84 = -local_84;
      local_c0 = (int)ROUND(local_84 * _DAT_005df8e4);
      local_bc = (int)ROUND(local_80 * _DAT_005df8e4);
      local_b8 = (int)ROUND(local_7c * _DAT_005df8e4);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_c0);
      local_80 = 0.0;
      local_90 = (int)ROUND(local_84 * _DAT_005df8e4);
      local_8c = (int)ROUND(_DAT_005df8e4 * 0.0);
      local_88 = (int)ROUND(local_7c * _DAT_005df8e4);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_90);
      local_84 = -local_84;
      local_78 = (int)ROUND(local_84 * _DAT_005df8e4);
      local_74 = (int)ROUND(local_80 * _DAT_005df8e4);
      local_70 = (int)ROUND(local_7c * _DAT_005df8e4);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&local_78);
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,local_e8);
      engine_matrix_c_pop_FUN_0046d080();
    }
    else {
      local_60 = (int)ROUND(*(float *)world_position * _DAT_005df8e4);
      local_5c = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_58 = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_60);
      local_48 = (int)ROUND(*(float *)world_position * _DAT_005df8e4);
      local_44 = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_40 = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      pfVar1 = (float *)(param_1 + 7);
      engine_special_cpp_FUN_0056356c
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_48);
      local_a8 = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      local_a4 = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_a0 = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_a8);
      local_3c = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      local_38 = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_34 = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&local_3c);
      pCVar2 = DAT_005f2afc;
      fVar6 = (float10)(float)param_1[10];
      fVar7 = (float10)_DAT_005c08f0;
      fVar8 = (float10)(float)param_1[6] * fVar7;
      *(uint *)(*(int *)DAT_005f2afc + 0x10) = 0x80000000;
      round();
      local_c = (int)ROUND(fVar8);
      *(int *)(*(int *)pCVar2 + 4) = *(int *)(*(int *)pCVar2 + 4) - local_c;
      *(uint *)(*(int *)pCVar2 + 0x40) = 0x80000000;
      *(int *)(*(int *)pCVar2 + 0x34) = *(int *)(*(int *)pCVar2 + 0x34) + local_c;
      fVar7 = fVar7 * fVar6;
      *(uint *)(*(int *)pCVar2 + 0x70) = 0x80000000;
      round();
      local_8 = (int)ROUND(fVar7);
      *(int *)(*(int *)pCVar2 + 100) = *(int *)(*(int *)pCVar2 + 100) + local_8;
      *(uint *)(*(int *)pCVar2 + 0xa0) = 0x80000000;
      *(int *)(*(int *)pCVar2 + 0x94) = *(int *)(*(int *)pCVar2 + 0x94) - local_8;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(pCVar2,local_e8);
      local_18 = (int)ROUND(*(float *)world_position * _DAT_005df8e4);
      local_14 = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_10 = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_18);
      local_b4 = (int)ROUND(*(float *)world_position * _DAT_005df8e4);
      local_b0 = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_ac = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_b4);
      local_9c = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      local_98 = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_94 = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_9c);
      local_6c = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      local_68 = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_64 = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&local_6c);
      pCVar2 = DAT_005f2afc;
      *(uint *)(*(int *)DAT_005f2afc + 0x10) = 0x80000000;
      **(int **)pCVar2 = **(int **)pCVar2 - local_c;
      *(uint *)(*(int *)pCVar2 + 0x40) = 0x80000000;
      *(int *)(*(int *)pCVar2 + 0x30) = *(int *)(*(int *)pCVar2 + 0x30) + local_c;
      *(uint *)(*(int *)pCVar2 + 0x70) = 0x80000000;
      *(int *)(*(int *)pCVar2 + 0x60) = *(int *)(*(int *)pCVar2 + 0x60) + local_8;
      *(uint *)(*(int *)pCVar2 + 0xa0) = 0x80000000;
      *(int *)(*(int *)pCVar2 + 0x90) = *(int *)(*(int *)pCVar2 + 0x90) - local_8;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(pCVar2,local_e8);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  }
  return;
}
