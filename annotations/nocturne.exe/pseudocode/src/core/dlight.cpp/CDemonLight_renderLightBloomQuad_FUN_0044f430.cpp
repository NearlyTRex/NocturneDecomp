// Name: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430
// Address: 0044f430
// Address Range: [[0044f430, 0044f9a3]]
// Convention: unknown
// Signature: void core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430(int param_1)

{
  longlong lVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float10 fVar7;
  float afStackY_1064 [992];
  uint uVar8;
  float local_d8 [14];
  float local_a0;
  float local_9c;
  float local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_7c;
  float afStack_78 [4];
  float local_68;
  int local_64;
  float local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  byte local_34 [8];
  int iStack_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  int local_14;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x1cbc) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(float *)(param_1 + 0x104));
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(DAT_005ae704,local_34);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,local_34,0);
  FUN_00460d10(DAT_005ae704);
  local_64 = local_7c;
  (&local_60)[(uint)bVar6 * -2] = afStack_78[(uint)bVar6 * -2];
  (&local_60)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  local_68 = (float)0.00390625;
  afStack_78[2] = (float)local_64 * local_68;
  local_14 = local_5c;
  afStack_78[3] = (float)(int)local_60 * local_68;
  local_68 = (float)local_5c * local_68;
  local_a0 = *(float *)(param_1 + 0x104) - afStack_78[2];
  local_9c = *(float *)(param_1 + 0x108) - afStack_78[3];
  local_98 = *(float *)(param_1 + 0x10c) - local_68;
  if (&local_58 != &local_a0) {
    local_58 = local_a0;
    local_54 = local_9c;
    local_50 = local_98;
  }
  local_4c = *(float *)(param_1 + 0x118);
  local_48 = *(float *)(param_1 + 0x124);
  local_44 = *(float *)(param_1 + 0x130);
  local_d8[0] = SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
  if (local_d8[0] <= 0.0) {
    local_54 = 0.0;
    local_58 = 0.0;
    local_50 = 0.0;
  }
  else {
    fVar2 = 1.0 / local_d8[0];
    local_58 = local_58 * fVar2;
    local_54 = local_54 * fVar2;
    local_50 = local_50 * fVar2;
  }
  iVar4 = _DAT_01c038f4 / 2;
  fVar7 = -((float10)local_50 * (float10)local_44 +
           (float10)local_58 * (float10)local_4c + (float10)local_54 * (float10)local_48);
  local_1c = (float)fVar7;
  uVar8 = 0x44f667;
  fVar7 = (float10)round
                             (fVar7 * (float10)local_1c * (float10)local_1c * (float10)local_1c *
                              (float10)65536);
  local_1c = (float)(int)ROUND(fVar7);
  lVar1 = (longlong)(0xffff - iVar4) * (longlong)(int)local_1c;
  uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_20) {
    local_d8[10] = 0.5;
    local_d8[0xb] = 0.5;
    local_d8[0xc] = -0.5;
    local_44 = (float)(int)ROUND(_DAT_0059c030 * 0.5);
    local_40 = (int)ROUND(_DAT_0059c030 * 0.5);
    local_3c = (int)ROUND(_DAT_0059c030 * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_44,uVar8);
    local_d8[10] = -0.5;
    local_d8[0xb] = 0.5;
    local_d8[0xc] = -0.5;
    iStack_2c = (int)ROUND(_DAT_0059c030 * -0.5);
    local_28 = (int)ROUND(_DAT_0059c030 * 0.5);
    local_24 = (int)ROUND(_DAT_0059c030 * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&iStack_2c);
    local_d8[10] = -0.5;
    local_d8[0xb] = -0.5;
    local_d8[0xc] = -0.5;
    local_8c = (int)ROUND(_DAT_0059c030 * -0.5);
    local_88 = (int)ROUND(_DAT_0059c030 * -0.5);
    local_84 = (int)ROUND(_DAT_0059c030 * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_8c);
    local_d8[10] = 0.5;
    local_d8[0xc] = -0.5;
    local_d8[0xb] = -0.5;
    local_98 = (float)(int)ROUND(_DAT_0059c030 * 0.5);
    local_94 = (int)ROUND(_DAT_0059c030 * -0.5);
    local_90 = (int)ROUND(_DAT_0059c030 * -0.5);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_98);
    piVar3 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x18) = 0xf80000;
    *(uint *)(*piVar3 + 0x1c) = 0xf80000;
    *(uint *)(*piVar3 + 0x2c) = uVar5;
    *(uint *)(*piVar3 + 0x48) = 0x80000;
    *(uint *)(*piVar3 + 0x4c) = 0xf80000;
    *(uint *)(*piVar3 + 0x5c) = uVar5;
    *(uint *)(*piVar3 + 0x78) = 0x80000;
    *(uint *)(*piVar3 + 0x7c) = 0x80000;
    *(uint *)(*piVar3 + 0x8c) = uVar5;
    *(uint *)(*piVar3 + 0xa8) = 0xf80000;
    *(uint *)(*piVar3 + 0xac) = 0x80000;
    *(uint *)(*piVar3 + 0xbc) = uVar5;
    *(uint *)(*piVar3 + 0x20) = 0xffff;
    *(uint *)(*piVar3 + 0x24) = 0xffff;
    *(uint *)(*piVar3 + 0x28) = 0xffff;
    *(uint *)(*piVar3 + 0x50) = 0xffff;
    *(uint *)(*piVar3 + 0x54) = 0xffff;
    *(uint *)(*piVar3 + 0x58) = 0xffff;
    *(uint *)(*piVar3 + 0x80) = 0xffff;
    *(uint *)(*piVar3 + 0x84) = 0xffff;
    *(uint *)(*piVar3 + 0x88) = 0xffff;
    *(uint *)(*piVar3 + 0xb0) = 0xffff;
    *(uint *)(*piVar3 + 0xb4) = 0xffff;
    *(uint *)(*piVar3 + 0xb8) = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(piVar3,&DAT_005ae470);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    local_d8[1] = 5.60519e-45;
    local_d8[2] = 0.0;
    local_d8[3] = 0.0;
    local_d8[4] = -NAN;
    local_d8[5] = -NAN;
    local_d8[6] = 0.0;
    local_d8[9] = 4.2039e-45;
    local_d8[7] = 1.4013e-45;
    local_d8[8] = 2.8026e-45;
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(DAT_005ae704,local_d8);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520(param_1);
  return;
}
