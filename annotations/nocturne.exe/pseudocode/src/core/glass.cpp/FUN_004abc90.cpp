// Name: FUN_004abc90
// Address: 004abc90
// Address Range: [[004abc90, 004ac3e1]]
// Convention: unknown
// Signature: void FUN_004abc90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004abc90(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  float *pfVar4;
  int extraout_EDX;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  byte local_a8 [12];
  byte local_9c [12];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  uint local_80;
  uint local_7c;
  float local_78;
  float local_74;
  float local_70;
  byte local_6c [12];
  float local_60;
  float local_5c;
  float local_58;
  byte local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_00409fc0(param_1);
  FUN_00461eb0(DAT_005ae704,param_1 + 0x15c);
  if (*(int *)(param_1 + 0x1e0) != 0) {
    local_7c = 0;
    local_80 = 0;
    local_84 = *(float *)(param_1 + 0x150) * _DAT_00584f98;
    pfVar4 = (float *)FUN_0044da40(param_1 + 0x3c,local_a8,&local_84);
    local_78 = *(float *)(param_1 + 0x20) + *pfVar4;
    local_74 = *(float *)(param_1 + 0x24) + pfVar4[1];
    local_70 = *(float *)(param_1 + 0x28) + pfVar4[2];
    if (&local_48 != &local_78) {
      local_48 = local_78;
      local_44 = local_74;
      local_40 = local_70;
    }
    local_84 = -local_84;
    pfVar4 = (float *)FUN_0044da40(param_1 + 0x3c,local_54,&local_84);
    local_3c = *(float *)(param_1 + 0x20) + *pfVar4;
    local_38 = *(float *)(param_1 + 0x24) + pfVar4[1];
    local_34 = *(float *)(param_1 + 0x28) + pfVar4[2];
    if (&local_60 != &local_3c) {
      local_60 = local_3c;
      local_5c = local_38;
      local_58 = local_34;
    }
    local_80 = *(uint *)(param_1 + 0x154);
    pfVar4 = (float *)FUN_0044da40(param_1 + 0x3c,local_6c,&local_84);
    local_cc = *(float *)(param_1 + 0x20) + *pfVar4;
    local_c8 = *(float *)(param_1 + 0x24) + pfVar4[1];
    local_c4 = *(float *)(param_1 + 0x28) + pfVar4[2];
    if (&local_c0 != &local_cc) {
      local_c0 = local_cc;
      local_bc = local_c8;
      local_b8 = local_c4;
    }
    local_84 = -local_84;
    pfVar4 = (float *)FUN_0044da40(param_1 + 0x3c,local_9c,&local_84);
    local_90 = *(float *)(param_1 + 0x20) + *pfVar4;
    local_8c = *(float *)(param_1 + 0x24) + pfVar4[1];
    local_88 = *(float *)(param_1 + 0x28) + pfVar4[2];
    if (&local_b4 != &local_90) {
      local_b4 = local_90;
      local_b0 = local_8c;
      local_ac = local_88;
    }
    FUN_004d6590(param_1 + 0x1e4,&local_48,&local_60,&local_c0,&local_b4);
  }
  fVar9 = (float10)*(float *)(param_1 + 0x150) * (float10)_DAT_00584fa0;
  FUN_00563a30();
  local_14 = (int)ROUND(fVar9);
  *(int *)(param_1 + 0xb24) = local_14 + 1;
  if (4 < local_14 + 1) {
    *(uint *)(param_1 + 0xb24) = 4;
  }
  fVar9 = (float10)*(float *)(param_1 + 0x154) * (float10)_DAT_00584fa0;
  FUN_00563a30();
  local_14 = (int)ROUND(fVar9);
  *(int *)(param_1 + 0xb28) = local_14 + 1;
  if (4 < local_14 + 1) {
    *(uint *)(param_1 + 0xb28) = 4;
  }
  iVar3 = *(int *)(param_1 + 0xb24) * *(int *)(param_1 + 0xb28);
  *(int *)(param_1 + 0xb2c) = (*(int *)(param_1 + 0xb24) + 1) * (*(int *)(param_1 + 0xb28) + 1);
  *(int *)(param_1 + 0xb30) = iVar3;
  if ((0x19 < *(int *)(param_1 + 0xb2c)) || (0x10 < iVar3)) {
    _DAT_01cc4800 = "..\\core\\glass.cpp";
    _DAT_01cc4804 = 0x86;
    FUN_004c8440("CGlass::setup - Too many verticies(%d) or faces(%d)!",*(uint *)(param_1 + 0xb2c),
                 *(uint *)(param_1 + 0xb30));
  }
  local_24 = *(float *)(param_1 + 0x150) / (float)*(int *)(param_1 + 0xb24);
  local_30 = *(float *)(param_1 + 0x154) / (float)*(int *)(param_1 + 0xb28);
  iVar3 = 0;
  local_d8 = 0.0;
  local_d4 = 0.0;
  local_d0 = 0.0;
  local_28 = param_1 + 900;
  for (local_20 = 0; local_20 < *(int *)(param_1 + 0xb28) + 1; local_20 = local_20 + 1) {
    local_d8 = -*(float *)(param_1 + 0x150) * (float)_DAT_00584fa0;
    pfVar4 = (float *)(iVar3 * 0xc + local_28);
    for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0xb24) + 1; iVar6 = iVar6 + 1) {
      if (pfVar4 != &local_d8) {
        *pfVar4 = local_d8;
        pfVar4[1] = local_d4;
        pfVar4[2] = local_d0;
      }
      fVar9 = (float10)_DAT_00584fa8;
      fVar10 = (float10)_DAT_00584fb0;
      fVar11 = ((float10)iVar6 / (float10)*(int *)(param_1 + 0xb24)) * fVar9 + fVar10;
      local_14 = iVar6;
      FUN_00563a30();
      *(int *)(extraout_ECX + 0x5dc) = (int)ROUND(fVar11);
      local_14 = *(int *)(param_1 + 0xb28) - local_20;
      fVar10 = fVar10 + ((float10)local_14 / (float10)*(int *)(param_1 + 0xb28)) * fVar9;
      FUN_00563a30();
      local_14 = (int)ROUND(fVar10);
      pfVar4 = (float *)(extraout_EDX + 0xc);
      *(int *)(extraout_ECX_00 + 0x63c) = local_14;
      iVar3 = iVar3 + 1;
      local_d8 = local_d8 + local_24;
    }
    local_d4 = local_d4 + local_30;
  }
  local_1c = 0;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0xb28)) {
    local_2c = param_1 + 0x6a4;
    do {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xb24)) {
        iVar6 = local_18 * 0x48 + local_2c;
        do {
          *(uint *)(iVar6 + 4) = 4;
          *(uint *)(iVar6 + 0x14) = 0;
          uVar2 = *(uint *)(iVar6 + 0x14);
          *(uint *)(iVar6 + 0x10) = uVar2;
          *(uint *)(iVar6 + 0xc) = uVar2;
          *(uint *)(iVar6 + 8) = uVar2;
          iVar5 = (*(int *)(param_1 + 0xb24) + 1) * local_1c + iVar3;
          *(int *)(iVar6 + 0x18) = iVar5;
          *(uint *)(iVar6 + 0x1c) = *(uint *)(param_1 + 0x5dc + iVar5 * 4);
          *(uint *)(iVar6 + 0x20) = *(uint *)(param_1 + 0x640 + iVar5 * 4);
          *(int *)(iVar6 + 0x24) = iVar5 + 1;
          *(uint *)(iVar6 + 0x28) = *(uint *)(param_1 + 0x5e0 + iVar5 * 4);
          *(uint *)(iVar6 + 0x2c) = *(uint *)(param_1 + 0x644 + iVar5 * 4);
          *(int *)(iVar6 + 0x30) = *(int *)(param_1 + 0xb24) + iVar5 + 2;
          *(uint *)(iVar6 + 0x34) =
               *(uint *)(param_1 + 0x5e4 + (*(int *)(param_1 + 0xb24) + iVar5) * 4);
          *(uint *)(iVar6 + 0x38) =
               *(uint *)(param_1 + 0x648 + (*(int *)(param_1 + 0xb24) + iVar5) * 4);
          *(int *)(iVar6 + 0x3c) = *(int *)(param_1 + 0xb24) + iVar5 + 1;
          *(uint *)(iVar6 + 0x40) =
               *(uint *)(param_1 + 0x5e0 + (*(int *)(param_1 + 0xb24) + iVar5) * 4);
          *(uint *)(iVar6 + 0x44) =
               *(uint *)(param_1 + 0x644 + (iVar5 + *(int *)(param_1 + 0xb24)) * 4);
          iVar3 = iVar3 + 1;
          local_18 = local_18 + 1;
          iVar6 = iVar6 + 0x48;
        } while (iVar3 < *(int *)(param_1 + 0xb24));
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0xb28));
  }
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0x174) < 0xfde9);
  iVar3 = FUN_00564520(param_1 + 0x17c,&DAT_00584f23);
  if (iVar3 == 0) {
    *(byte *)(param_1 + 0x17c) = 0;
  }
  *(uint *)(param_1 + 0x104) = 0;
  if (*(char *)(param_1 + 0x17c) == '\0') {
    *(uint *)(param_1 + 0x104) = 1;
  }
  *(uint *)(param_1 + 0xb34) = 0;
  if (*(int *)(param_1 + 0x368) != 0) {
    pcVar8 = (char *)(param_1 + 0x374);
    iVar3 = FUN_005649c0(pcVar8,"7YEARS.RAW");
    if (iVar3 == 0) {
      iVar3 = FUN_00564520(param_1 + 0x164,"factwin.raw");
      if (iVar3 == 0) {
        pcVar7 = "factwinx.raw";
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = FUN_00564520(param_1 + 0x164,"dockwin.raw");
      if (iVar3 == 0) {
        pcVar7 = "dockwinx.raw";
        pcVar8 = (char *)(param_1 + 0x374);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = FUN_00564520(param_1 + 0x164,"windo10.raw");
      if (iVar3 == 0) {
        pcVar7 = "windo10x.raw";
        pcVar8 = (char *)(param_1 + 0x374);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = FUN_00564520(param_1 + 0x164,"windo11.raw");
      if (iVar3 == 0) {
        pcVar7 = "windo11x.raw";
        pcVar8 = (char *)(param_1 + 0x374);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') {
            return;
          }
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        return;
      }
    }
  }
  return;
}
