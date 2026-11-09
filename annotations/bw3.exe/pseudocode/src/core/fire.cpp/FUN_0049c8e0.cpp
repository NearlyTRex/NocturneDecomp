// Name: core_fire.cpp_FUN_0049c8e0
// Address: 0049c8e0
// Address Range: [[0049c8e0, 0049cc9a]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049c8e0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049c8e0(CVector3f *param_1)

{
  byte *puVar1;
  int extraout_ECX;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  uint auStackY_1054 [1002];
  CDemonRenderer *pCVar5;
  CVector3f *euler_angles;
  CVector3f *translation;
  SMRGLHeaderPrimitive local_94 [4];
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  CVector3f local_6c;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar2 = 0;
  if ((*(uint *)(param_1 + 1) & 0x7fffffff) != 0) {
    fVar3 = ((float10)1 - (float10)*(float *)(param_1 + 1)) * (float10)_DAT_005c0690;
    round();
    local_14 = (int)ROUND(fVar3);
    if (*(int *)&param_1[2].field_0x4 == 3) {
      puVar1 = &DAT_005fd084;
    }
    else {
      puVar1 = &DAT_005fcb14;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)(puVar1 + local_14 * 0x30));
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,param_1)
    ;
    engine_matrix_c_FUN_0046d250(DAT_005f2afc);
    translation = (CVector3f *)0x0;
    euler_angles = &local_6c;
    local_6c._0_4_ = local_30._0_4_;
    *(uint *)((int)&local_6c + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&local_30 + (uint)bVar2 * -8 + 4);
    pCVar5 = DAT_005f2afc;
    *(uint *)((int)&local_6c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&local_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (pCVar5,euler_angles,translation);
    fVar3 = (float10)*(float *)&param_1[1].field_0x4 * (float10)_DAT_005c06a8 *
            (float10)_DAT_005c06a0;
    fVar4 = -(float10)*(float *)&param_1[1].field_0x4 * (float10)_DAT_005c0698 *
            (float10)_DAT_005c06a0;
    round();
    round();
    local_10 = (int)ROUND(fVar3);
    local_c = (int)ROUND(fVar4);
    if (extraout_ECX != 0) {
      local_10 = -local_10;
      local_c = -local_c;
    }
    local_8 = local_c;
    local_24 = (float)local_c;
    local_20 = *(float *)&param_1[1].field_0x4 * _DAT_005c06b0 * (float)_DAT_005c06a0;
    local_1c = 0.0;
    local_60 = (int)ROUND(local_24 * _DAT_005df8e4);
    local_5c = (int)ROUND(local_20 * _DAT_005df8e4);
    local_58 = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_18 = local_24;
    engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_60);
    local_8 = local_10;
    local_24 = (float)local_10;
    local_3c = (int)ROUND(local_24 * _DAT_005df8e4);
    local_38 = (int)ROUND(local_20 * _DAT_005df8e4);
    local_34 = (int)ROUND(local_1c * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_3c);
    local_20 = -*(float *)&param_1[1].field_0x4 * (float)_DAT_005c06b8 * (float)_DAT_005c06a0;
    local_48 = (int)ROUND(local_24 * _DAT_005df8e4);
    local_44 = (int)ROUND(local_20 * _DAT_005df8e4);
    local_40 = (int)ROUND(local_1c * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_48);
    local_24 = local_18;
    local_54 = (int)ROUND(local_18 * _DAT_005df8e4);
    local_50 = (int)ROUND(local_20 * _DAT_005df8e4);
    local_4c = (int)ROUND(local_1c * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&local_54);
    pCVar5 = DAT_005f2afc;
    *(uint *)(*(int *)DAT_005f2afc + 0x18) = 0x20000;
    *(uint *)(*(int *)pCVar5 + 0x1c) = 0x20000;
    *(uint *)(*(int *)pCVar5 + 0x48) = 0xfe0000;
    *(uint *)(*(int *)pCVar5 + 0x4c) = 0x20000;
    *(uint *)(*(int *)pCVar5 + 0x78) = 0xfe0000;
    *(uint *)(*(int *)pCVar5 + 0x7c) = 0xfe0000;
    *(uint *)(*(int *)pCVar5 + 0xa8) = 0x20000;
    *(uint *)(*(int *)pCVar5 + 0xac) = 0xfe0000;
    *(uint *)(*(int *)pCVar5 + 0x2c) = 0x8000;
    *(uint *)(*(int *)pCVar5 + 0x5c) = 0x8000;
    *(uint *)(*(int *)pCVar5 + 0x8c) = 0x8000;
    *(uint *)(*(int *)pCVar5 + 0xbc) = 0x8000;
    local_90 = 4;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_7c = 0;
    local_74 = 2;
    local_70 = 3;
    local_78 = 1;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(pCVar5,1);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(DAT_005f2afc,local_94,0x123)
    ;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_matrix_c_pop_FUN_0046d080();
  }
  return;
}
