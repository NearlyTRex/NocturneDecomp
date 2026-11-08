// Name: FUN_0045d530
// Address: 0045d530
// Address Range: [[0045d530, 0045d55f] [0045d561, 0045daec]]
// Convention: unknown
// Signature: int FUN_0045d530(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045d530(int param_1)

{
  longlong lVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  ulonglong uVar8;
  float afStackY_1094 [996];
  uint uVar9;
  byte auStack_f8 [4];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  float afStack_a8 [6];
  float local_90 [4];
  float local_80;
  int local_7c;
  float afStack_78 [5];
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_20;
  float local_1c;
  int local_18;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x1cbc) == 0) {
    return param_1;
  }
  FUN_0046ce90(DAT_005f2afc,(float *)(param_1 + 4));
  FUN_0046d250(DAT_005f2afc);
  uVar9 = 0;
  local_ac = afStack_78[2];
  afStack_a8[(uint)bVar6 * -2] = afStack_78[(uint)bVar6 * -2 + 3];
  afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  FUN_0046cf30(DAT_005f2afc,&local_ac,uVar9);
  FUN_0046d1a0(DAT_005f2afc);
  local_64 = local_7c;
  afStack_78[(uint)bVar6 * -2 + 6] = afStack_78[(uint)bVar6 * -2];
  afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       afStack_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  fVar2 = (float)_DAT_005bb49c;
  local_18 = local_5c;
  local_90[2] = (float)local_64 * fVar2;
  afStack_a8[5] = *(float *)(param_1 + 4) - (float)local_64 * fVar2;
  local_90[3] = (float)local_60 * fVar2;
  local_80 = (float)local_5c * fVar2;
  local_90[0] = *(float *)(param_1 + 8) - (float)local_60 * fVar2;
  local_90[1] = *(float *)(param_1 + 0xc) - (float)local_5c * fVar2;
  local_40 = afStack_a8[5];
  local_3c[(uint)bVar6 * -2] = local_90[(uint)bVar6 * -2];
  local_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       local_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (afStack_a8 + 2 != &local_40) {
    afStack_a8[2] = local_40;
    afStack_a8[3] = local_3c[0];
    afStack_a8[4] = local_3c[1];
  }
  local_4c = *(float *)(param_1 + 0x18);
  local_48 = *(float *)(param_1 + 0x24);
  local_44 = *(float *)(param_1 + 0x30);
  local_1c = SQRT(afStack_a8[4] * afStack_a8[4] +
                  afStack_a8[2] * afStack_a8[2] + afStack_a8[3] * afStack_a8[3]);
  if (local_1c <= 0.0) {
    afStack_a8[3] = 0.0;
    afStack_a8[2] = 0.0;
    afStack_a8[4] = 0.0;
  }
  else {
    fVar2 = 1.0 / local_1c;
    afStack_a8[2] = afStack_a8[2] * fVar2;
    afStack_a8[3] = afStack_a8[3] * fVar2;
    afStack_a8[4] = afStack_a8[4] * fVar2;
  }
  fVar7 = -((float10)afStack_a8[4] * (float10)local_44 +
           (float10)afStack_a8[2] * (float10)local_4c + (float10)afStack_a8[3] * (float10)local_48);
  local_28 = (float)fVar7;
  fVar7 = fVar7 * (float10)local_28 * (float10)local_28 * (float10)local_28 * (float10)_DAT_005bb4a4
  ;
  uVar8 = FUN_005a3120();
  local_20 = (int)ROUND(fVar7);
  lVar1 = (longlong)((int)((ulonglong)uVar8 >> 0x20) - (int)uVar8) * (longlong)local_20;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_28) {
    local_58 = 0x40000000;
    local_54 = 0x40000000;
    local_50 = 0xbf000000;
    local_d0 = (int)ROUND(_DAT_005de4f0 * 2.0);
    local_cc = (int)ROUND(_DAT_005de4f0 * 2.0);
    local_c8 = (int)ROUND(_DAT_005de4f0 * -0.5);
    FUN_005632a3(*DAT_005f2afc,&local_d0);
    local_54 = 0x40000000;
    local_58 = 0xc0000000;
    local_50 = 0xbf000000;
    local_b8 = (int)ROUND(_DAT_005de4f0 * -2.0);
    local_b4 = (int)ROUND(_DAT_005de4f0 * 2.0);
    local_b0 = (int)ROUND(_DAT_005de4f0 * -0.5);
    FUN_005632a3(*DAT_005f2afc + 0x30,&local_b8);
    local_58 = 0xc0000000;
    local_54 = 0xc0000000;
    local_50 = 0xbf000000;
    local_c4 = (int)ROUND(_DAT_005de4f0 * -2.0);
    local_c0 = (int)ROUND(_DAT_005de4f0 * -2.0);
    local_bc = (int)ROUND(_DAT_005de4f0 * -0.5);
    FUN_005632a3(*DAT_005f2afc + 0x60,&local_c4);
    local_58 = 0x40000000;
    local_50 = 0xbf000000;
    local_54 = 0xc0000000;
    local_34 = (int)ROUND(_DAT_005de4f0 * 2.0);
    local_30 = (int)ROUND(_DAT_005de4f0 * -2.0);
    local_2c = (int)ROUND(_DAT_005de4f0 * -0.5);
    FUN_005632a3(*DAT_005f2afc + 0x90,&local_34);
    piVar3 = DAT_005f2afc;
    *(uint *)(*DAT_005f2afc + 0x18) = 0xf80000;
    *(uint *)(*piVar3 + 0x1c) = 0xf80000;
    *(uint *)(*piVar3 + 0x2c) = uVar4;
    *(uint *)(*piVar3 + 0x48) = 0x80000;
    *(uint *)(*piVar3 + 0x4c) = 0xf80000;
    *(uint *)(*piVar3 + 0x5c) = uVar4;
    *(uint *)(*piVar3 + 0x78) = 0x80000;
    *(uint *)(*piVar3 + 0x7c) = 0x80000;
    *(uint *)(*piVar3 + 0x8c) = uVar4;
    *(uint *)(*piVar3 + 0xa8) = 0xf80000;
    *(uint *)(*piVar3 + 0xac) = 0x80000;
    *(uint *)(*piVar3 + 0xbc) = uVar4;
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
    FUN_0046e5e0(piVar3,&DAT_005f2858);
    FUN_0046d4b0(DAT_005f2afc,1);
    local_f4 = 4;
    local_f0 = 0;
    local_ec = 0;
    local_e8 = 0xffff0001;
    local_e4 = 0xfffe0002;
    local_e0 = 0;
    local_d4 = 3;
    local_dc = 1;
    local_d8 = 2;
    FUN_0046c510(DAT_005f2afc,auStack_f8);
  }
  FUN_0046d4b0(DAT_005f2afc,0);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  iVar5 = FUN_0045dea0(param_1);
  return iVar5;
}
