// Name: core_dlight.cpp_FUN_0044f9b0
// Address: 0044f9b0
// Address Range: [[0044f9b0, 00450161]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0044f9b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dlight_cpp_FUN_0044f9b0(int param_1)

{
  float fVar1;
  float *pfVar2;
  byte *puVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_10d4 [991];
  uint uVar6;
  int *piVar7;
  uint uVar8;
  float local_148;
  float local_140;
  byte local_13c [4];
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  int local_ec;
  int iStack_e8;
  float afStack_e4 [3];
  int local_d8;
  int local_d4;
  int local_d0;
  byte local_c8 [8];
  int iStack_c0;
  int local_bc;
  int local_b8;
  byte local_b0 [12];
  int local_a4;
  int local_a0;
  float local_9c [4];
  uint local_8c;
  uint local_88;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  byte local_48 [24];
  float local_30;
  float local_2c;
  float local_28;
  float *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x1cbc) != 0) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(DAT_005ae704,&local_74);
    local_74 = local_74 - *(float *)(param_1 + 0x104);
    local_70 = local_70 - *(float *)(param_1 + 0x108);
    local_6c = local_6c - *(float *)(param_1 + 0x10c);
    pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                (param_1 + 0x110,local_b0,&local_74);
    if (&local_74 != pfVar2) {
      local_74 = *pfVar2;
      local_70 = pfVar2[1];
      local_6c = pfVar2[2];
    }
    if (local_6c <= *(float *)(param_1 + 0x100)) {
      local_30 = local_70 * local_70;
      local_24 = (float *)(((local_6c * (float)18) / *(float *)(param_1 + 0x138)) *
                          (float)2);
      local_28 = local_74 * local_74 + local_30;
      local_2c = (float)local_24 * (float)local_24;
      if (local_28 <= local_2c) {
        local_148 = 1.0 - local_28 / local_2c;
        FUN_00460d10(DAT_005ae704);
        local_a4 = local_ec;
        (&local_a0)[(uint)bVar4 * -2] = (&iStack_e8)[(uint)bVar4 * -2];
        local_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
             afStack_e4[(uint)bVar4 * -2 + (uint)bVar4 * -2];
        local_f8 = (float)local_a4 * _DAT_0059c038;
        local_f4 = (float)local_a0 * _DAT_0059c038;
        local_f0 = (float)(int)local_9c[0] * _DAT_0059c038;
        local_80 = local_f8 - *(float *)(param_1 + 0x104);
        local_7c = local_f4 - *(float *)(param_1 + 0x108);
        local_78 = local_f0 - *(float *)(param_1 + 0x10c);
        local_140 = SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
        if (0.0 < local_140) {
          fVar1 = 1.0 / local_140;
          local_80 = local_80 * fVar1;
          local_7c = local_7c * fVar1;
          local_78 = local_78 * fVar1;
          local_8c = 0;
          local_88 = 0;
          local_84 = 0x3f800000;
          local_14 = (float)(0xffff - _DAT_01c038f4);
          pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                      (param_1 + 0x110,local_c8,&local_8c);
          if (0.0 < (local_78 * pfVar2[2] + local_80 * *pfVar2 + local_7c * pfVar2[1]) * local_14 *
                    4.6004211948482694e-315._0_4_) {
            uVar8 = 1;
            uVar6 = 0x44fcc3;
            piVar7 = DAT_005ae704;
            fVar5 = (float10)round
                                       ((float10)local_148 * (float10)65535);
            local_20 = (int)ROUND(fVar5);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(uVar6,piVar7,uVar8);
            local_1c = 0;
            puVar3 = &DAT_005ae488;
            local_24 = (float *)(param_1 + 0x104);
            do {
              local_18 = local_1c;
              fVar1 = (float)local_1c * 5.1299985056169162e-315._0_4_ * *(float *)(param_1 + 0x100);
              local_114 = *(float *)(param_1 + 0x118);
              local_148 = fVar1 * (float)0.25;
              local_110 = *(float *)(param_1 + 0x124);
              local_108 = local_114 * local_148;
              local_104 = local_110 * local_148;
              local_10c = *(float *)(param_1 + 0x130);
              local_100 = local_10c * local_148;
              local_140 = *(float *)(puVar3 + 0x1c) * (float)0.5 *
                          ((fVar1 * (float)18) / *(float *)(param_1 + 0x138)) *
                          (float)2;
              local_6c = *local_24 + local_108;
              local_68 = local_24[1] + local_104;
              local_64 = local_24[2] + local_100;
              if (afStack_e4 != &local_6c) {
                afStack_e4[0] = local_6c;
                afStack_e4[1] = local_68;
                afStack_e4[2] = local_64;
              }
              engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                        (DAT_005ae704,afStack_e4);
              engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                        (DAT_005ae704,local_48);
              engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                        (DAT_005ae704,local_48,0);
              local_9c[2] = 0.0;
              local_9c[0] = local_140;
              local_9c[1] = local_140;
              local_d8 = (int)ROUND(local_140 * _DAT_0059c030);
              local_d4 = (int)ROUND(local_140 * _DAT_0059c030);
              local_d0 = (int)ROUND(_DAT_0059c030 * 0.0);
              wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_d8);
              local_9c[0] = -local_9c[0];
              local_60 = (int)ROUND(local_9c[0] * _DAT_0059c030);
              local_5c = (int)ROUND(local_9c[1] * _DAT_0059c030);
              local_58 = (int)ROUND(local_9c[2] * _DAT_0059c030);
              wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                        (*DAT_005ae704 + 0x30,&local_60);
              local_9c[1] = -local_9c[1];
              local_54 = (int)ROUND(local_9c[0] * _DAT_0059c030);
              local_50 = (int)ROUND(local_9c[1] * _DAT_0059c030);
              local_4c = (int)ROUND(local_9c[2] * _DAT_0059c030);
              wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                        (*DAT_005ae704 + 0x60,&local_54);
              local_9c[0] = -local_9c[0];
              iStack_c0 = (int)ROUND(local_9c[0] * _DAT_0059c030);
              local_bc = (int)ROUND(local_9c[1] * _DAT_0059c030);
              local_b8 = (int)ROUND(local_9c[2] * _DAT_0059c030);
              wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                        (*DAT_005ae704 + 0x90,&iStack_c0);
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,puVar3);
              piVar7 = DAT_005ae704;
              local_138 = 4;
              local_128 = 0;
              local_12c = 0;
              local_130 = 0;
              local_134 = 0;
              local_124 = 0;
              *(int *)(*DAT_005ae704 + 0x18) = *(int *)(puVar3 + 0x20) << 0x10;
              *(int *)(*piVar7 + 0x1c) = *(int *)(puVar3 + 0x24) << 0x10;
              *(int *)(*piVar7 + 0x2c) = local_20;
              *(uint *)(*piVar7 + 0x20) = 0xffff;
              *(uint *)(*piVar7 + 0x24) = 0xffff;
              *(uint *)(*piVar7 + 0x28) = 0xffff;
              local_120 = 1;
              *(int *)(*piVar7 + 0x48) = *(int *)(puVar3 + 0x28) << 0x10;
              *(int *)(*piVar7 + 0x4c) = *(int *)(puVar3 + 0x24) << 0x10;
              *(int *)(*piVar7 + 0x5c) = local_20;
              *(uint *)(*piVar7 + 0x50) = 0xffff;
              *(uint *)(*piVar7 + 0x54) = 0xffff;
              *(uint *)(*piVar7 + 0x58) = 0xffff;
              local_11c = 2;
              *(int *)(*piVar7 + 0x78) = *(int *)(puVar3 + 0x28) << 0x10;
              *(int *)(*piVar7 + 0x7c) = *(int *)(puVar3 + 0x2c) << 0x10;
              *(int *)(*piVar7 + 0x8c) = local_20;
              *(uint *)(*piVar7 + 0x80) = 0xffff;
              *(uint *)(*piVar7 + 0x84) = 0xffff;
              *(uint *)(*piVar7 + 0x88) = 0xffff;
              local_118 = 3;
              *(int *)(*piVar7 + 0xa8) = *(int *)(puVar3 + 0x20) << 0x10;
              *(int *)(*piVar7 + 0xac) = *(int *)(puVar3 + 0x2c) << 0x10;
              *(int *)(*piVar7 + 0xbc) = local_20;
              *(uint *)(*piVar7 + 0xb0) = 0xffff;
              *(uint *)(*piVar7 + 0xb4) = 0xffff;
              *(uint *)(*piVar7 + 0xb8) = 0xffff;
              engine_drender_cpp_CDemonRenderer_renderOverlayDirect_FUN_004604c0(piVar7,local_13c);
              engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
              local_1c = local_1c + 1;
              puVar3 = puVar3 + 0x30;
            } while (local_1c < 9);
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
            return;
          }
        }
      }
    }
  }
  return;
}
