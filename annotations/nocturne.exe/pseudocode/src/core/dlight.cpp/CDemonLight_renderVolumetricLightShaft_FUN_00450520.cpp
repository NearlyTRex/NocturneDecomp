// Name: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520
// Address: 00450520
// Address Range: [[00450520, 00450c84]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520(int param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  int aiStackY_10bc [990];
  uint uVar8;
  float local_130 [2];
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  byte local_104 [12];
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  int local_d4;
  int aiStack_d0 [4];
  int local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  byte local_98 [12];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  byte local_68 [12];
  int local_5c;
  int local_58 [2];
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  if ((*(int *)(param_1 + 0x1cbc) != 0) && (*(int *)(0x01C775EC + 0xc) == 2)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(DAT_005ae704,&local_8c);
    local_8c = local_8c - *(float *)(param_1 + 0x104);
    local_88 = local_88 - *(float *)(param_1 + 0x108);
    local_84 = local_84 - *(float *)(param_1 + 0x10c);
    pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                (param_1 + 0x110,local_68,&local_8c);
    if (&local_8c != pfVar4) {
      local_8c = *pfVar4;
      local_88 = pfVar4[1];
      local_84 = pfVar4[2];
    }
    local_28 = local_88 * local_88;
    local_20 = ((local_84 * (float)_DAT_0057c866) / *(float *)(param_1 + 0x138)) *
               (float)_DAT_0057c86e;
    local_1c = local_8c * local_8c + local_28;
    local_24 = local_20 * local_20;
    if (local_1c <= local_24) {
      local_130[0] = 1.0 - local_1c / local_24;
      FUN_00460d10(DAT_005ae704);
      local_5c = local_d4;
      local_58[(uint)bVar6 * -2] = aiStack_d0[(uint)bVar6 * -2];
      local_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           aiStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      local_80 = (float)local_5c * _DAT_0059c038;
      local_7c = (float)local_58[0] * _DAT_0059c038;
      local_78 = (float)local_58[1] * _DAT_0059c038;
      local_38 = local_80 - *(float *)(param_1 + 0x104);
      local_34 = local_7c - *(float *)(param_1 + 0x108);
      local_30 = local_78 - *(float *)(param_1 + 0x10c);
      fVar2 = SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34);
      if (0.0 < fVar2) {
        fVar2 = 1.0 / fVar2;
        local_38 = local_38 * fVar2;
        local_34 = local_34 * fVar2;
        local_30 = local_30 * fVar2;
        local_ec = 0;
        local_e8 = 0;
        local_e4 = 0x3f800000;
        local_14 = (float)(0xffff - _DAT_01c038f4);
        pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                    (param_1 + 0x110,local_104,&local_ec);
        if (0.0 < (local_30 * pfVar4[2] + local_38 * *pfVar4 + local_34 * pfVar4[1]) * local_14 *
                  _DAT_0057c876) {
          iVar5 = 0;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
          do {
            fVar2 = (float)iVar5 * _DAT_0057c87a * *(float *)(param_1 + 0x100);
            local_18 = (fVar2 * (float)_DAT_0057c866) / *(float *)(param_1 + 0x138);
            local_bc = *(float *)(param_1 + 0x118);
            local_b0 = local_bc * fVar2;
            local_b8 = *(float *)(param_1 + 0x124);
            local_ac = local_b8 * fVar2;
            local_b4 = *(float *)(param_1 + 0x130);
            local_a8 = local_b4 * fVar2;
            local_a4 = *(float *)(param_1 + 0x104) + local_b0;
            local_a0 = *(float *)(param_1 + 0x108) + local_ac;
            local_9c = *(float *)(param_1 + 0x10c) + local_a8;
            if (&local_e0 != &local_a4) {
              local_e0 = local_a4;
              local_dc = local_a0;
              local_d8 = local_9c;
            }
            local_14 = (float)iVar5;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                      (DAT_005ae704,&local_e0);
            engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                      (DAT_005ae704,local_98);
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                      (DAT_005ae704,local_98,0);
            local_50 = local_18;
            local_4c = local_18;
            local_48 = 0.0;
            local_74 = (int)ROUND(local_18 * _DAT_0059c030);
            local_70 = (int)ROUND(local_18 * _DAT_0059c030);
            local_6c = (int)ROUND(_DAT_0059c030 * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_74);
            local_50 = -local_50;
            local_44 = (int)ROUND(local_50 * _DAT_0059c030);
            local_40 = (int)ROUND(local_4c * _DAT_0059c030);
            local_3c = (int)ROUND(local_48 * _DAT_0059c030);
            wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_44)
            ;
            local_4c = -local_4c;
            local_f8 = (int)ROUND(local_50 * _DAT_0059c030);
            local_f4 = (int)ROUND(local_4c * _DAT_0059c030);
            local_f0 = (int)ROUND(local_48 * _DAT_0059c030);
            wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_f8)
            ;
            local_50 = -local_50;
            aiStack_d0[2] = (int)ROUND(local_50 * _DAT_0059c030);
            aiStack_d0[3] = (int)ROUND(local_4c * _DAT_0059c030);
            local_c0 = (int)ROUND(local_48 * _DAT_0059c030);
            wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                      (*DAT_005ae704 + 0x90,aiStack_d0 + 2);
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                      (DAT_005ae704,&DAT_005ae470);
            piVar3 = DAT_005ae704;
            local_128 = 4;
            local_118 = 0;
            local_11c = 0;
            local_120 = 0;
            local_124 = 0;
            local_114 = 0;
            iVar1 = *DAT_005ae704;
            uVar8 = 0x450b26;
            fVar7 = (float10)round
                                       (((((float10)*(float *)(param_1 + 0x100) - (float10)fVar2) *
                                         (float10)_DAT_0057c87e) /
                                        (float10)*(float *)(param_1 + 0x100)) *
                                        (float10)local_130[0]);
            local_30 = (float)(int)ROUND(fVar7);
            *(float *)(iVar1 + 0x2c) = local_30;
            *(uint *)(*piVar3 + 0x20) = 0xffff;
            *(uint *)(*piVar3 + 0x24) = 0xffff;
            *(uint *)(*piVar3 + 0x28) = 0xffff;
            local_114 = 1;
            *(float *)(*piVar3 + 0x5c) = local_30;
            *(uint *)(*piVar3 + 0x50) = 0xffff;
            *(uint *)(*piVar3 + 0x54) = 0xffff;
            *(uint *)(*piVar3 + 0x58) = 0xffff;
            local_110 = 2;
            *(float *)(*piVar3 + 0x8c) = local_30;
            *(uint *)(*piVar3 + 0x80) = 0xffff;
            *(uint *)(*piVar3 + 0x84) = 0xffff;
            *(uint *)(*piVar3 + 0x88) = 0xffff;
            local_10c = 3;
            *(float *)(*piVar3 + 0xbc) = local_30;
            *(uint *)(*piVar3 + 0xb0) = 0xffff;
            *(uint *)(*piVar3 + 0xb4) = 0xffff;
            *(uint *)(*piVar3 + 0xb8) = 0xffff;
            *(uint *)(*piVar3 + 0x18) = 0xf80000;
            *(uint *)(*piVar3 + 0x1c) = 0xf80000;
            *(uint *)(*piVar3 + 0x48) = 0x80000;
            *(uint *)(*piVar3 + 0x4c) = 0xf80000;
            *(uint *)(*piVar3 + 0x78) = 0x80000;
            *(uint *)(*piVar3 + 0x7c) = 0x80000;
            *(uint *)(*piVar3 + 0xa8) = 0xf80000;
            *(uint *)(*piVar3 + 0xac) = 0x80000;
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
                      (piVar3,local_130,uVar8);
            iVar5 = iVar5 + 1;
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
          } while (iVar5 < 0x19);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
          return;
        }
      }
    }
  }
  return;
}
