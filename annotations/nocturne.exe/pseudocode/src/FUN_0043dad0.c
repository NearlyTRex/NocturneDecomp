// Name: FUN_0043dad0
// Address: 0043dad0
// Address Range: [[0043dad0, 0043e10a]]
// Convention: unknown
// Signature: void FUN_0043dad0(int param_1)

#include "nocturne.h"

void FUN_0043dad0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint *puVar7;
  int iVar8;
  int unaff_EBP;
  uint *puVar9;
  int iVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  uint uStack_7c;
  int local_70;
  int local_68;
  int local_60;
  int local_44;
  float local_40;
  int local_30;
  int local_2c;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,param_1 + 0x15c);
  while( true ) {
    fVar12 = (float10)1 / (float10)*(float *)(param_1 + 500);
    fVar1 = *(float *)(param_1 + 0x154);
    fVar13 = (float10)round((float10)*(float *)(param_1 + 0x150) * fVar12);
    iVar10 = (int)ROUND(fVar13);
    fVar15 = 6.231602e-39;
    fVar12 = (float10)round((float10)fVar1 * fVar12);
    fVar1 = (float)(int)ROUND(fVar12);
    *(uint *)(param_1 + 0x1c724) = uStack_7c;
    *(float *)(param_1 + 0x1c728) = fVar1;
    iVar4 = (iVar10 + 1) * ((int)fVar1 + 1);
    *(int *)(param_1 + 0x1fc) = iVar4;
    if (iVar4 < 0x3e9) break;
    *(float *)(param_1 + 500) = *(float *)(param_1 + 500) * (float)2;
  }
  fVar2 = *(float *)(param_1 + 0x150);
  iVar4 = 0;
  if (0 < (int)fVar1 + 1) {
    do {
      fVar6 = 0.0;
      if (0 < local_30) {
        local_18 = (int)local_20 * 0x74 + local_70;
        iVar5 = unaff_EBP;
        do {
          *(uint *)(iVar5 + 0x14) = 0;
          *(int *)(iVar5 + 0xc) = iVar10;
          *(int *)(iVar5 + 0x10) = local_2c;
          if (((((iVar4 == 0) && (*(int *)(param_1 + 0x178) != 0)) ||
               ((iVar4 == iVar10 && (*(int *)(param_1 + 0x184) != 0)))) ||
              ((fVar6 == 0.0 && (*(int *)(param_1 + 0x17c) != 0)))) ||
             ((fVar6 == fVar2 / (float)iVar10 && (*(int *)(param_1 + 0x180) != 0)))) {
            *(uint *)(iVar5 + 0x68) = 1;
          }
          else {
            *(uint *)(iVar5 + 0x68) = 0;
          }
          *(uint *)(iVar5 + 0x70) = 0;
          if ((fVar6 == 0.0) && (iVar4 == 0)) {
            *(uint *)(iVar5 + 0x70) = 1;
          }
          if ((fVar6 == 0.0) && (iVar4 == iVar10)) {
            *(uint *)(iVar5 + 0x70) = 1;
          }
          if ((fVar6 == local_40) && (iVar4 == 0)) {
            *(uint *)(iVar5 + 0x70) = 1;
          }
          if ((fVar6 == fVar1) && (iVar4 == local_44)) {
            *(uint *)(iVar5 + 0x70) = 1;
          }
          *(uint *)(iVar5 + 0x44) = 0;
          if (0 < iVar4) {
            *(float *)(iVar5 + 0x48 + *(int *)(iVar5 + 0x44) * 4) = local_20;
            *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) + 1;
          }
          if (0 < (int)fVar6) {
            *(int *)(iVar5 + 0x48 + *(int *)(iVar5 + 0x44) * 4) = local_18 + -1;
            *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) + 1;
          }
          if ((int)fVar6 < iVar10 + 1) {
            *(int *)(iVar5 + 0x48 + *(int *)(iVar5 + 0x44) * 4) = local_18 + 1;
            *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) + 1;
          }
          fVar12 = (float10)252;
          fVar13 = (float10)65536;
          fVar14 = (float10)round
                                      ((((float10)*(float *)(param_1 + 0x150) *
                                         (float10)0.5 + (float10)*(float *)(iVar5 + 0xc)
                                        ) / (float10)*(float *)(param_1 + 0x150)) * fVar12 * fVar13)
          ;
          unaff_EBP = (int)ROUND(fVar14);
          *(int *)(iVar5 + 0x18) = unaff_EBP + 0x20000;
          fVar6 = (float)((int)fVar6 + 1);
          local_18 = local_14 + 0x74;
          fVar15 = 6.232355e-39;
          fVar12 = (float10)round
                                      (fVar13 * ((float10)1 -
                                                (float10)*(float *)(iVar5 + 0x10) /
                                                (float10)*(float *)(param_1 + 0x154)) * fVar12);
          local_14 = (int)ROUND(fVar12);
          *(int *)(iVar5 + 0x1c) = local_14 + 0x20000;
          local_20 = (float)((int)(local_20 + local_40) + 1);
          iVar5 = unaff_EBP;
        } while ((int)fVar6 < local_30);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar10);
  }
  local_68 = 0;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    local_60 = param_1 + 0x200;
    do {
      iVar10 = 0;
      if (0 < *(int *)(local_60 + 0x44)) {
        iVar4 = local_60;
        do {
          iVar5 = *(int *)(iVar4 + 0x48) * 0x74 + param_1 + 0x200;
          fVar15 = *(float *)(local_60 + 0xc) - *(float *)(iVar5 + 0xc);
          fVar1 = *(float *)(local_60 + 0x10) - *(float *)(iVar5 + 0x10);
          fVar2 = *(float *)(local_60 + 0x14) - *(float *)(iVar5 + 0x14);
          iVar10 = iVar10 + 1;
          *(float *)(iVar4 + 0x58) = SQRT(fVar2 * fVar2 + fVar15 * fVar15 + fVar1 * fVar1);
          iVar4 = iVar4 + 4;
        } while (iVar10 < *(int *)(local_60 + 0x44));
      }
      local_60 = local_60 + 0x74;
      local_68 = local_68 + 1;
    } while (local_68 < *(int *)(param_1 + 0x1fc));
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    puVar9 = (uint *)(param_1 + 0x20c);
    do {
      puVar7 = (uint *)(iVar10 * 0x74 + param_1 + 0x200);
      if (puVar7 != puVar9) {
        *puVar7 = *puVar9;
        puVar7[1] = puVar9[1];
        puVar7[2] = puVar9[2];
      }
      puVar7[0xd] = 0;
      iVar10 = iVar10 + 1;
      puVar7[0xc] = puVar7[0xd];
      puVar7[0xb] = puVar7[0xc];
      puVar9 = puVar9 + 0x1d;
    } while (iVar10 < *(int *)(param_1 + 0x1fc));
  }
  iVar10 = param_1 + 0x1f60c;
  iVar4 = param_1 + 0x4288c;
  local_2c = 0;
  if (0 < *(int *)(param_1 + 0x1c728)) {
    do {
      local_1c = 0;
      iVar5 = iVar10;
      iVar8 = iVar4;
      if (0 < *(int *)(param_1 + 0x1c724)) {
        do {
          *(uint *)(iVar5 + 0x14) = 0;
          *(uint *)(iVar5 + 4) = 3;
          uVar3 = *(uint *)(iVar5 + 0x14);
          *(uint *)(iVar5 + 0x10) = uVar3;
          *(uint *)(iVar5 + 0xc) = uVar3;
          *(uint *)(iVar5 + 8) = uVar3;
          *(uint *)(iVar8 + 4) = 3;
          *(uint *)(iVar8 + 0x14) = 0;
          uVar3 = *(uint *)(iVar8 + 0x14);
          *(uint *)(iVar8 + 0x10) = uVar3;
          *(uint *)(iVar8 + 0xc) = uVar3;
          *(uint *)(iVar8 + 8) = uVar3;
          iVar4 = local_1c + (*(int *)(param_1 + 0x1c724) + 1) * local_2c;
          *(int *)(iVar5 + 0x18) = iVar4;
          *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar4 * 0x74 + 0x218 + param_1);
          iVar10 = iVar4 + 1;
          *(uint *)(iVar5 + 0x20) = *(uint *)(iVar4 * 0x74 + 0x21c + param_1);
          *(int *)(iVar5 + 0x24) = iVar10;
          *(uint *)(iVar5 + 0x28) = *(uint *)(iVar10 * 0x74 + 0x218 + param_1);
          *(uint *)(iVar5 + 0x2c) = *(uint *)(iVar10 * 0x74 + 0x21c + param_1);
          iVar10 = iVar10 + *(int *)(param_1 + 0x1c724) + 1;
          *(int *)(iVar5 + 0x30) = iVar10;
          iVar10 = iVar10 * 0x74;
          *(uint *)(iVar5 + 0x34) = *(uint *)(iVar10 + 0x218 + param_1);
          *(uint *)(iVar5 + 0x38) = *(uint *)(iVar10 + 0x21c + param_1);
          puVar7 = (uint *)(iVar8 + 0x1c + (uint)bVar11 * -8);
          puVar9 = (uint *)(iVar5 + 0x34 + (uint)bVar11 * -8);
          *(uint *)(iVar8 + 0x18) = *(uint *)(iVar5 + 0x30);
          *puVar7 = *puVar9;
          puVar7[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          puVar7 = (uint *)(iVar8 + 0x28 + (uint)bVar11 * -8);
          puVar9 = (uint *)(iVar5 + 0x28 + (uint)bVar11 * -8);
          *(uint *)(iVar8 + 0x24) = *(uint *)(iVar5 + 0x24);
          *puVar7 = *puVar9;
          puVar7[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          puVar7 = (uint *)(iVar8 + 0x34 + (uint)bVar11 * -8);
          puVar9 = (uint *)(iVar5 + 0x1c + (uint)bVar11 * -8);
          *(uint *)(iVar8 + 0x30) = *(uint *)(iVar5 + 0x18);
          *puVar7 = *puVar9;
          puVar7[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          *(uint *)(iVar5 + 0x4c) = 3;
          *(uint *)(iVar5 + 0x5c) = 0;
          uVar3 = *(uint *)(iVar5 + 0x5c);
          *(uint *)(iVar5 + 0x58) = uVar3;
          *(uint *)(iVar5 + 0x54) = uVar3;
          *(uint *)(iVar5 + 0x50) = uVar3;
          *(uint *)(iVar8 + 0x4c) = 3;
          *(uint *)(iVar8 + 0x5c) = 0;
          uVar3 = *(uint *)(iVar8 + 0x5c);
          *(uint *)(iVar8 + 0x58) = uVar3;
          *(uint *)(iVar8 + 0x54) = uVar3;
          *(uint *)(iVar8 + 0x50) = uVar3;
          iVar10 = local_1c + (*(int *)(param_1 + 0x1c724) + 1) * local_2c;
          *(int *)(iVar5 + 0x60) = iVar10;
          *(uint *)(iVar5 + 100) = *(uint *)(iVar10 * 0x74 + 0x218 + param_1);
          *(uint *)(iVar5 + 0x68) = *(uint *)(iVar10 * 0x74 + 0x21c + param_1);
          iVar10 = iVar10 + *(int *)(param_1 + 0x1c724) + 2;
          *(int *)(iVar5 + 0x6c) = iVar10;
          *(uint *)(iVar5 + 0x70) = *(uint *)(iVar10 * 0x74 + 0x218 + param_1);
          *(uint *)(iVar5 + 0x74) = *(uint *)(iVar10 * 0x74 + 0x21c + param_1);
          *(int *)(iVar5 + 0x78) = iVar10 + -1;
          iVar10 = (iVar10 + -1) * 0x74;
          *(uint *)(iVar5 + 0x7c) = *(uint *)(iVar10 + 0x218 + param_1);
          *(uint *)(iVar5 + 0x80) = *(uint *)(iVar10 + 0x21c + param_1);
          puVar7 = (uint *)(iVar8 + 100 + (uint)bVar11 * -8);
          puVar9 = (uint *)(iVar5 + 0x7c + (uint)bVar11 * -8);
          *(uint *)(iVar8 + 0x60) = *(uint *)(iVar5 + 0x78);
          *puVar7 = *puVar9;
          puVar7[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          puVar7 = (uint *)(iVar8 + 0x70 + (uint)bVar11 * -8);
          puVar9 = (uint *)(iVar5 + 0x70 + (uint)bVar11 * -8);
          *(uint *)(iVar8 + 0x6c) = *(uint *)(iVar5 + 0x6c);
          *puVar7 = *puVar9;
          puVar7[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          iVar10 = iVar5 + 0x90;
          iVar4 = iVar8 + 0x90;
          puVar7 = (uint *)(iVar8 + 0x7c + (uint)bVar11 * -8);
          puVar9 = (uint *)(iVar5 + 100 + (uint)bVar11 * -8);
          *(uint *)(iVar8 + 0x78) = *(uint *)(iVar5 + 0x60);
          *puVar7 = *puVar9;
          puVar7[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
          local_1c = local_1c + 1;
          iVar5 = iVar10;
          iVar8 = iVar4;
        } while (local_1c < *(int *)(param_1 + 0x1c724));
      }
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)(param_1 + 0x1c728));
  }
  core_curtain_cpp_CCurtain_updateWorldPositions_FUN_0043e110(param_1,fVar15);
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0x174) < 0xfde9);
  return;
}
