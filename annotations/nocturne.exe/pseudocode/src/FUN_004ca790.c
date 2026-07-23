// Name: FUN_004ca790
// Address: 004ca790
// Address Range: [[004ca790, 004cabe3]]
// Convention: unknown
// Signature: void FUN_004ca790(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca790(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int iStack_c0;
  int iStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  float *pfStack_b0;
  float *pfStack_ac;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_20;
  int local_1c;
  
  pfVar5 = (float *)(param_1 + 0xa98 + param_2 * 0xb8);
  pfStack_ac = pfVar5 + 9;
  pfStack_b0 = pfVar5 + 0xc;
  piStack_b4 = DAT_005ae704;
  piStack_b8 = (int *)0x4ca7d5;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0();
  fVar6 = (float10)256.0f;
  fVar1 = pfVar5[1];
  fVar2 = *pfVar5;
  pfStack_ac = (float *)0x4ca7f3;
  fVar7 = (float10)round((float10)pfVar5[2] * fVar6);
  pfStack_b0 = (float *)0x4ca7fa;
  fVar8 = (float10)round((float10)fVar1 * fVar6);
  piStack_b4 = (int *)(int)ROUND(fVar7);
  piStack_b8 = (int *)0x4ca81e;
  local_2c = (int)piStack_b4;
  local_1c = (int)ROUND(fVar8);
  fVar6 = (float10)round((float10)fVar2 * fVar6);
  iStack_c0 = (int)ROUND(fVar6);
  iStack_bc = (int)ROUND(fVar8);
  local_20 = iStack_c0;
  core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(0x01E57284);
  piStack_b8 = (int *)0xffffffff;
  iStack_c0 = param_1 + 0x2cc;
  iStack_bc = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0();
  piStack_b8 = (int *)0x10000;
  iStack_bc = 0x10000;
  iStack_c0 = 0x10000;
  core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(0x01E57284);
  piStack_b8 = DAT_005ae704;
  iStack_bc = 0x4ca879;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090();
  if ((iVar4 == 0) &&
     ((((float)0.01 < pfVar5[3] || ((float)0.01 < pfVar5[4])) ||
      ((float)0.01 < pfVar5[5])))) {
    local_3c = -1.4;
    local_34 = -1.4;
    local_38 = 0.2;
    local_54 = (int)ROUND(_DAT_005a0020 * -1.4);
    local_50 = (int)ROUND(_DAT_005a0020 * 0.2);
    local_4c = (int)ROUND(_DAT_005a0020 * -1.4);
    piStack_b8 = &local_54;
    iStack_bc = *DAT_005ae704;
    iStack_c0 = 0x4ca8ec;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
    local_3c = -local_3c;
    local_6c = (int)ROUND(local_3c * _DAT_005a0020);
    local_68 = (int)ROUND(local_38 * _DAT_005a0020);
    local_64 = (int)ROUND(local_34 * _DAT_005a0020);
    piStack_b8 = &local_6c;
    iStack_bc = *DAT_005ae704 + 0x30;
    iStack_c0 = 0x4ca93a;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
    local_34 = -local_34;
    local_60 = (int)ROUND(local_3c * _DAT_005a0020);
    local_5c = (int)ROUND(local_38 * _DAT_005a0020);
    local_58 = (int)ROUND(local_34 * _DAT_005a0020);
    piStack_b8 = &local_60;
    iStack_bc = *DAT_005ae704 + 0x60;
    iStack_c0 = 0x4ca98e;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
    local_3c = -local_3c;
    local_48 = (int)ROUND(local_3c * _DAT_005a0020);
    local_44 = (int)ROUND(local_38 * _DAT_005a0020);
    local_40 = (int)ROUND(local_34 * _DAT_005a0020);
    piStack_b8 = &local_48;
    iStack_bc = *DAT_005ae704 + 0x90;
    iStack_c0 = 0x4ca9de;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
    piVar3 = DAT_005ae704;
    pfStack_b0 = (float *)0x4;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    local_90 = 1;
    local_88 = 0;
    local_84 = 2;
    local_74 = 0;
    local_8c = 0x1000000;
    local_80 = 0x1000000;
    local_7c = 0x1000000;
    local_70 = 0x1000000;
    local_78 = 3;
    fVar6 = (float10)256.0f;
    fVar1 = pfVar5[4];
    fVar2 = pfVar5[5];
    iVar4 = *DAT_005ae704;
    piStack_b8 = (int *)0x4caa56;
    fVar7 = (float10)round((float10)pfVar5[3] * fVar6);
    local_30 = (int)ROUND(fVar7);
    *(int *)(iVar4 + 0x20) = local_30;
    iStack_bc = 0x4caa6c;
    fVar7 = (float10)round((float10)fVar1 * fVar6);
    local_30 = (int)ROUND(fVar7);
    *(int *)(*piVar3 + 0x24) = local_30;
    iStack_c0 = 0x4caa84;
    fVar6 = (float10)round((float10)fVar2 * fVar6);
    local_30 = (int)ROUND(fVar6);
    *(int *)(*piVar3 + 0x28) = local_30;
    *(uint *)(*piVar3 + 0x2c) = 0xffff;
    *(float *)(*piVar3 + 0x50) = local_38;
    *(float *)(*piVar3 + 0x54) = local_34;
    *(int *)(*piVar3 + 0x58) = local_30;
    *(uint *)(*piVar3 + 0x5c) = 0xffff;
    *(float *)(*piVar3 + 0x80) = local_38;
    *(float *)(*piVar3 + 0x84) = local_34;
    *(int *)(*piVar3 + 0x88) = local_30;
    *(uint *)(*piVar3 + 0x8c) = 0xffff;
    *(float *)(*piVar3 + 0xb0) = local_38;
    *(float *)(*piVar3 + 0xb4) = local_34;
    *(int *)(*piVar3 + 0xb8) = local_30;
    *(uint *)(*piVar3 + 0xbc) = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(piVar3,param_1 + 0x14b8);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150(DAT_005ae704,&iStack_c0);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  return;
}
