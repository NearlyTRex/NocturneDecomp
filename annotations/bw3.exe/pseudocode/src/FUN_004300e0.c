// Name: FUN_004300e0
// Address: 004300e0
// Address Range: [[004300e0, 00430428]]
// Convention: unknown
// Signature: void FUN_004300e0(int param_1,float *param_2,float param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004300e0(int param_1,float *param_2,float param_3,uint param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1094 [990];
  float fVar5;
  float fVar6;
  float local_108;
  byte local_104 [40];
  float local_dc [6];
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float local_ac;
  float local_a8 [5];
  float afStack_94 [3];
  float local_88 [3];
  float fStack_7c;
  float afStack_78 [5];
  uint local_64;
  float local_58 [3];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float afStack_40 [3];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  local_108 = param_3;
  FUN_00556be0(*(uint *)(param_1 + 0xbc64));
  if (*(char *)(param_1 + 0x24a8) != '\0') {
    iVar1 = FUN_0054ea40(param_1 + 0x158);
    local_20 = *(int *)(iVar1 + 0xc00);
    if (1 < local_20) {
      if (local_108 < 0.0) {
        local_108 = 20.0;
      }
      local_1c = 0;
      if (0 < local_20) {
        do {
          pfVar2 = param_2;
          if ((param_2 != (float *)0x0) && (0.0 < local_108)) {
            FUN_00576250(param_2);
            fVar5 = -local_108;
            local_24 = fVar5;
            local_ac = afStack_78[2];
            local_a8[(uint)bVar4 * -2] = afStack_78[(uint)bVar4 * -2 + 3];
            fVar6 = local_108;
            local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
            local_18 = (float)FUN_0040ce40(fVar5,fVar6);
            local_a8[0] = local_18 + local_a8[0];
            local_18 = (float)FUN_0040ce40(local_24,local_108);
            local_ac = local_18 + local_ac;
            FUN_0045b550(local_104,&local_ac);
            local_88[2] = SQRT(param_2[2] * param_2[2] +
                               *param_2 * *param_2 + param_2[1] * param_2[1]);
            local_88[0] = 0.0;
            local_88[1] = 0.0;
            local_28 = local_88[2];
            FUN_0045b800(local_104,local_a8 + 8);
            local_58[0] = (float)local_64;
            afStack_78[(uint)bVar4 * -2 + 9] = afStack_78[(uint)bVar4 * -2 + 6];
            afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
                 afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
            pfVar2 = afStack_78 + 8;
          }
          FUN_00430520(param_1,local_1c,pfVar2,param_4);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  pfVar2 = local_dc;
  pfVar3 = &local_c4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_4c = local_c4 + fStack_b8;
  fStack_48 = fStack_c0 + fStack_b4;
  fStack_44 = fStack_bc + fStack_b0;
  fStack_7c = local_c4 + fStack_b8;
  afStack_78[(uint)bVar4 * -2] = afStack_78[(uint)bVar4 * -2 + 0xc];
  afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
  pfVar2 = afStack_78 + 0xe;
  fStack_34 = fStack_7c * _DAT_005b839e;
  fStack_30 = afStack_78[0] * _DAT_005b839e;
  fStack_2c = afStack_78[1] * _DAT_005b839e;
  afStack_40[0] = fStack_7c * _DAT_005b839e;
  afStack_78[(uint)bVar4 * -2 + 0xf] = afStack_78[(uint)bVar4 * -2 + 0x12];
  afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
       afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
  FUN_00408b80(param_1,pfVar2);
  afStack_94[0] = local_a8[2];
  local_a8[(uint)bVar4 * -2 + 6] = local_a8[(uint)bVar4 * -2 + 3];
  local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  if (*(int *)(param_1 + 0xbc68) == 0) {
    FUN_004ce9c0(0x01D22E44,local_a8 + 5,param_2,100,*(uint *)(param_1 + 0x27a0));
  }
  else {
    *(uint *)(param_1 + 0x33a0) = 0;
  }
  iVar1 = FUN_0040c840(param_1,_DAT_01c5bc48);
  if (iVar1 != 0) {
    FUN_00489c90(iVar1);
    *(uint *)(param_1 + 0x70) = 2;
    return;
  }
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
