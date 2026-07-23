// Name: core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510
// Address: 00518510
// Address Range: [[00518510, 00518eb8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00518510(int param_1,int param_2,byte *param_3,int *param_4,uint param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00518510(int param_1,int param_2,byte *param_3,int *param_4,uint param_5,int param_6)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  uint uVar16;
  uint local_12c;
  uint local_128;
  float fStack_124;
  uint local_114;
  uint local_108;
  uint local_fc;
  byte *local_cc;
  int local_c8;
  byte *local_c4;
  int local_c0;
  int local_bc;
  int *local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int *local_9c;
  int *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_38;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_84 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  local_80 = *(int *)(param_2 * 8 + param_1 + 8);
  if (local_80 != 0) {
    param_5 = param_5 & 0xfffffffe;
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  local_b0 = 0;
  local_bc = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_ac = param_1 + param_2 * 4;
    local_c8 = param_2 * 4 + param_1;
    local_94 = param_1 + 0xc0;
    local_b8 = param_4;
    local_c4 = param_3;
    local_a8 = local_ac;
    local_a0 = local_ac;
    local_90 = local_ac;
    do {
      iVar11 = local_b0 + *(int *)(local_c8 + 0xc24);
      if ((*local_c4 & 1) != 0) {
        if ((local_84 == 0) && (local_80 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
          if (local_b0 < iVar11) {
            local_8c = iVar11 * 0x12;
            do {
              puVar10 = (ushort *)(local_9c[0x1f] + local_38);
              iVar9 = *DAT_005ae704;
              piVar8 = (int *)((uint)*puVar10 * 0x30 + iVar9);
              piVar1 = (int *)(iVar9 + (uint)puVar10[1] * 0x30);
              piVar6 = (int *)(iVar9 + (uint)puVar10[2] * 0x30);
              local_24 = *piVar8 * _DAT_01cc5118 + piVar8[1] * _DAT_01cc5124 +
                         piVar8[2] * _DAT_01cc5130;
              local_20 = *piVar8 * _DAT_01cc511c + piVar8[1] * _DAT_01cc5128 +
                         piVar8[2] * _DAT_01cc5134;
              local_1c = piVar8[2] * _DAT_01cc5138 +
                         *piVar8 * _DAT_01cc5120 + piVar8[1] * _DAT_01cc512c;
              local_18 = piVar1[2] * _DAT_01cc5130 +
                         *piVar1 * _DAT_01cc5118 + _DAT_01cc5124 * piVar1[1];
              local_14 = piVar1[1] * _DAT_01cc5128 + *piVar1 * _DAT_01cc511c +
                         piVar1[2] * _DAT_01cc5134;
              local_6c = (float)local_1c;
              local_48 = (float)local_18;
              local_44 = local_48 - (float)local_24;
              local_54 = (float)local_14;
              local_4c = local_54 - (float)local_20;
              local_50 = (float)(piVar1[2] * _DAT_01cc5138 +
                                *piVar1 * _DAT_01cc5120 + piVar1[1] * _DAT_01cc512c);
              local_70 = (float)(piVar6[2] * _DAT_01cc5130 +
                                *piVar6 * _DAT_01cc5118 + piVar6[1] * _DAT_01cc5124);
              local_68 = (float)(piVar6[1] * _DAT_01cc5128 + *piVar6 * _DAT_01cc511c +
                                piVar6[2] * _DAT_01cc5134);
              local_64 = (float)(piVar6[1] * _DAT_01cc512c + *piVar6 * _DAT_01cc5120 +
                                piVar6[2] * _DAT_01cc5138);
              local_c4 = (byte *)(local_64 - local_50);
              fVar2 = local_4c * (float)local_c4 - (local_68 - local_54) * (local_50 - local_6c);
              fVar3 = (local_70 - local_48) * (local_50 - local_6c) - local_44 * (float)local_c4;
              fVar5 = local_44 * (local_68 - local_54) - (local_70 - local_48) * local_4c;
              fVar4 = fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3;
              if (fVar4 <= 0.0) {
                fStack_124 = 127.0;
              }
              else {
                fStack_124 = (float)127 / SQRT(fVar4);
              }
              fVar12 = (float10)fStack_124;
              local_28 = (float)((float10)fVar2 * fVar12);
              local_30 = (float)((float10)fVar3 * fVar12);
              local_2c = (float)((float10)fVar5 * fVar12);
              fVar13 = (float10)local_30;
              fVar14 = (float10)local_28;
              fVar15 = (float10)127.0f;
              local_128 = 0x518c23;
              fVar12 = (float10)round((float10)fVar5 * fVar12 + fVar15);
              local_12c = 0x518c2a;
              fVar13 = (float10)round(fVar13 + fVar15);
              iVar9 = (int)ROUND(fVar12);
              uVar16 = 0x518c50;
              local_2c = (float)(int)ROUND(fVar13);
              local_28 = (float)iVar9;
              fVar12 = (float10)round(fVar14 + fVar15);
              local_30 = (float)(int)ROUND(fVar12);
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
                        (DAT_005ae704,local_30,(int)ROUND(fVar13),uVar16,iVar9);
              local_128 = 3;
              local_114 = (uint)*puVar10;
              local_108 = (uint)puVar10[1];
              local_fc = (uint)puVar10[2];
              engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                        (DAT_005ae704,&local_12c);
              local_44 = (float)((int)local_44 + 0x12);
            } while ((int)local_44 < local_8c);
          }
        }
        else if ((*(int *)(param_1 + 0xbc) == 1) ||
                (((local_84 != 0 || (param_6 != 0)) || (local_80 != 0)))) {
          if (((local_84 == 0) && (param_6 == 0)) && (local_80 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                      (DAT_005ae704,*local_b8 * 0x240 + local_94);
          }
          core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0
                    (0x01E57284,local_b0 * 0x12 + *(int *)(local_90 + 0x7c),iVar11 - local_b0,
                     param_5);
        }
        else {
          local_68 = -NAN;
          local_40 = local_b0;
          if (local_b0 < iVar11) {
            local_98 = local_b8;
            do {
              iVar9 = local_40 + 1;
              fVar2 = *(float *)(*(int *)(local_ac + 0x90) + local_40 * 4);
              if (iVar9 < iVar11) {
                pfVar7 = (float *)(iVar9 * 4 + *(int *)(local_a0 + 0x90));
                do {
                  if (fVar2 != *pfVar7) break;
                  iVar9 = iVar9 + 1;
                  pfVar7 = pfVar7 + 1;
                } while (iVar9 < iVar11);
              }
              if (fVar2 != local_68) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                          (DAT_005ae704,*local_98 * 0x240 + local_94 + (int)fVar2 * 0x48);
                local_68 = fVar2;
              }
              core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0
                        (0x01E57284,local_40 * 0x12 + *(int *)(local_90 + 0x7c),iVar9 - local_40,
                         param_5);
              local_40 = iVar9;
            } while (iVar9 < iVar11);
          }
        }
      }
      local_c4 = local_c4 + 4;
      local_c8 = local_c8 + 0x60;
      local_b8 = local_b8 + 1;
      local_bc = local_bc + 1;
      local_b0 = iVar11;
    } while (local_bc < *(int *)(param_1 + 0xc00));
  }
  local_b4 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_a4 = param_1 + 0xc0;
    iVar11 = param_1 + param_2 * 4;
    local_c0 = param_2 * 4 + param_1;
    local_cc = param_3;
    do {
      local_88 = local_b0 + *(int *)(local_c0 + 0xc38);
      local_64 = -NAN;
      if (((*local_cc & 1) != 0) && (local_b0 < local_88)) {
        local_9c = param_4 + local_b4;
        local_48 = (float)(local_b0 * 0x12);
        local_4c = (float)(local_b0 * 4);
        iVar9 = local_b0;
        do {
          local_6c = (float)((int)local_48 + *(int *)(iVar11 + 0x7c));
          if ((param_3[*(int *)(*(int *)(iVar11 + 0xa4) + (iVar9 - *(int *)(iVar11 + 0x54)) * 4) * 4
                      ] & 1) == 0) {
            if ((((local_84 == 0) && (param_6 == 0)) && (local_80 == 0)) &&
               (fVar2 = *(float *)(*(int *)(iVar11 + 0x90) + (int)local_4c), fVar2 != local_64)) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                        (DAT_005ae704,*local_9c * 0x240 + local_a4 + (int)fVar2 * 0x48);
              local_64 = fVar2;
            }
            core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_0050ded0
                      (0x01E57284,local_6c,1,param_5);
          }
          iVar9 = iVar9 + 1;
          local_48 = (float)((int)local_48 + 0x12);
          local_4c = (float)((int)local_4c + 4);
        } while (iVar9 < local_88);
      }
      local_b0 = local_88;
      local_cc = local_cc + 4;
      local_c0 = local_c0 + 0x60;
      local_b4 = local_b4 + 1;
    } while (local_b4 < *(int *)(param_1 + 0xc00));
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  return;
}
