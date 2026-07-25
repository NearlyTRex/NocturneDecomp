// Name: FUN_00450c90
// Address: 00450c90
// Address Range: [[00450c90, 0045134c]]
// Convention: unknown
// Signature: void FUN_00450c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450c90(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  unkbyte10 Var8;
  float10 fVar9;
  uint uVar10;
  uint uVar11;
  int *local_f0;
  int *local_ec;
  int local_e8;
  float local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*(int *)(param_1 + 0x1cbc) != 0) {
    local_ec = (int *)(param_1 + 0x104);
    local_f0 = DAT_005ae704;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00();
    local_ec = &local_94;
    local_f0 = (int *)(param_1 + 0x110);
    core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0();
    local_ec = (int *)0x0;
    local_f0 = &local_94;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704);
    local_ec = (int *)&DAT_005ae458;
    local_f0 = DAT_005ae704;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0();
    local_ec = (int *)0x1;
    local_f0 = DAT_005ae704;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000();
    local_e8 = 1;
    do {
      fVar4 = (float10)local_e8 * ((float10)_DAT_0057c8be / (float10)*(float *)(param_1 + 0x138)) *
              (float10)_DAT_0057c886;
      local_e4 = (float)fVar4;
      Var8 = fpatan(fVar4,(float10)1);
      fVar4 = (float10)fcos(Var8);
      local_4c = 0.0;
      local_48 = (float)fVar4;
      do {
        fVar4 = (float10)(int)local_4c * (float10)_DAT_0057c88e * (float10)_DAT_0057c896 *
                (float10)_DAT_0057c89e;
        fVar5 = (float10)fsin(fVar4);
        fVar9 = (float10)((int)local_4c + 1) * (float10)_DAT_0057c88e * (float10)_DAT_0057c896 *
                (float10)_DAT_0057c89e;
        fVar6 = (float10)fsin(fVar9);
        fVar4 = (float10)fcos(fVar4);
        fVar9 = (float10)fcos(fVar9);
        local_1c = *(int *)(param_1 + 0x1cc0) / 2;
        local_18 = *(int *)(param_1 + 0x1cc4) / 2;
        fVar7 = (float10)local_e4;
        local_38 = (float)(fVar4 * fVar7);
        iVar3 = *(int *)(param_1 + 0x1cc0);
        local_ec = (int *)0x450e0f;
        fVar4 = (float10)round
                                   ((float10)local_18 - (float10)local_18 * (float10)local_38);
        local_64 = (int)ROUND(fVar4);
        iVar3 = local_64 * iVar3;
        local_40 = (float)(fVar5 * fVar7);
        local_f0 = (int *)0x450e4e;
        fVar4 = (float10)round
                                   ((float10)local_20 * (float10)local_40 + (float10)local_20);
        local_60 = (int)ROUND(fVar4);
        local_34 = (float)*(ushort *)(*(int *)(param_1 + 0x2f94) + (iVar3 + local_60) * 2) *
                   (float)_DAT_0057c8a6;
        local_4c = (float)(fVar6 * fVar7);
        local_48 = (float)(fVar9 * fVar7);
        iVar3 = 0;
        local_30 = local_34;
        do {
          local_58 = *(float *)(param_1 + 0x100);
          fVar1 = (float)iVar3 * local_50 * local_58 * _DAT_0057c8ae;
          fVar4 = (float10)local_58;
          local_20 = iVar3 + 1;
          local_2c = (float)local_20 * local_50 * local_58 * _DAT_0057c8ae;
          fVar6 = (float10)local_58;
          fVar5 = (float10)local_2c;
          fVar9 = (float10)_DAT_0057c8b6;
          uVar11 = 0x450f51;
          local_28 = fVar1;
          fVar7 = (float10)round
                                     (((float10)local_58 - (float10)fVar1) * ((float10)1 / fVar4) *
                                      fVar9);
          uVar10 = 0x450f58;
          fVar4 = (float10)round
                                     ((fVar6 - fVar5) * ((float10)1 / fVar4) * fVar9);
          local_44 = (int)ROUND(fVar7);
          local_40 = (float)(int)ROUND(fVar4);
          local_a8 = local_38;
          if (fVar1 < local_38) {
            local_a8 = local_30;
          }
          local_b0 = local_a8 * local_4c;
          local_ac = local_a8 * local_48;
          local_c8 = (int)ROUND(local_b0 * _DAT_0059c030);
          local_c4 = (int)ROUND(local_ac * _DAT_0059c030);
          local_c0 = (int)ROUND(local_a8 * _DAT_0059c030);
          wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                    (*DAT_005ae704,&local_c8,uVar10,uVar11);
          local_a8 = local_3c;
          if (local_30 < local_3c) {
            local_a8 = local_30;
          }
          local_b0 = local_a8 * local_54;
          local_ac = local_a8 * local_50;
          local_bc = (int)ROUND(local_b0 * _DAT_0059c030);
          local_b8 = (int)ROUND(local_ac * _DAT_0059c030);
          local_b4 = (int)ROUND(local_a8 * _DAT_0059c030);
          wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                    (*DAT_005ae704 + 0x30,&local_bc,uVar10,uVar11);
          local_a8 = local_3c;
          if (local_34 < local_3c) {
            local_a8 = local_34;
          }
          local_b0 = local_a8 * local_54;
          local_ac = local_a8 * local_50;
          local_8c = (int)ROUND(local_b0 * _DAT_0059c030);
          local_88 = (int)ROUND(local_ac * _DAT_0059c030);
          local_84 = (int)ROUND(local_a8 * _DAT_0059c030);
          wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                    (*DAT_005ae704 + 0x60,&local_8c,uVar10,uVar11);
          local_a8 = local_38;
          if (local_34 < local_38) {
            local_a8 = local_34;
          }
          local_b0 = local_a8 * local_4c;
          local_ac = local_a8 * local_48;
          local_98 = (int)ROUND(local_b0 * _DAT_0059c030);
          local_94 = (int)ROUND(local_ac * _DAT_0059c030);
          local_90 = (int)ROUND(local_a8 * _DAT_0059c030);
          wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                    (*DAT_005ae704 + 0x90,&local_98,uVar10);
          piVar2 = DAT_005ae704;
          *(int *)(*DAT_005ae704 + 0x2c) = local_44;
          *(uint *)(*piVar2 + 0x28) = 0xffff;
          *(uint *)(*piVar2 + 0x24) = 0xffff;
          *(uint *)(*piVar2 + 0x20) = 0xffff;
          *(uint *)(*piVar2 + 0x18) = 0xf80000;
          *(uint *)(*piVar2 + 0x1c) = 0xf80000;
          *(int *)(*piVar2 + 0x5c) = local_44;
          *(uint *)(*piVar2 + 0x58) = 0xffff;
          *(uint *)(*piVar2 + 0x54) = 0xffff;
          *(uint *)(*piVar2 + 0x50) = 0xffff;
          *(uint *)(*piVar2 + 0x48) = 0x80000;
          *(uint *)(*piVar2 + 0x4c) = 0xf80000;
          *(float *)(*piVar2 + 0x8c) = local_40;
          *(uint *)(*piVar2 + 0x88) = 0xffff;
          *(uint *)(*piVar2 + 0x84) = 0xffff;
          *(uint *)(*piVar2 + 0x80) = 0xffff;
          *(uint *)(*piVar2 + 0x78) = 0x80000;
          *(uint *)(*piVar2 + 0x7c) = 0x80000;
          *(float *)(*piVar2 + 0xbc) = local_40;
          *(uint *)(*piVar2 + 0xb8) = 0xffff;
          *(uint *)(*piVar2 + 0xb4) = 0xffff;
          *(uint *)(*piVar2 + 0xb0) = 0xffff;
          *(uint *)(*piVar2 + 0xa8) = 0xf80000;
          iVar3 = iVar3 + 1;
          *(uint *)(*piVar2 + 0xac) = 0x80000;
          local_dc = 0;
          local_e0 = 0;
          local_ec = (int *)0x4;
          local_e4 = 0.0;
          local_d4 = 1;
          local_e8 = 0;
          local_d8 = 0;
          local_cc = 3;
          local_d0 = 2;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(piVar2,&local_f0);
        } while (iVar3 < 4);
        local_5c = local_5c + 1;
      } while (local_5c < 0x10);
      local_e8 = local_e8 + 1;
    } while (local_e8 < 0x10);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
    return;
  }
  return;
}
