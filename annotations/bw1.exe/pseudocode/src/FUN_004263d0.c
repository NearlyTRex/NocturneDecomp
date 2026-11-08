// Name: FUN_004263d0
// Address: 004263d0
// Address Range: [[004263d0, 00426852]]
// Convention: unknown
// Signature: void FUN_004263d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004263d0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_10a8 [36];
  uint *apuStackY_1018 [916];
  float local_1b8;
  byte local_1b4 [4];
  float local_1b0;
  int local_180;
  int local_17c;
  byte auStack_178 [48];
  byte local_148 [48];
  uint auStack_118 [12];
  byte auStack_e8 [40];
  float fStack_c0;
  float afStack_bc [4];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float afStack_74 [5];
  uint uStack_60;
  uint auStack_5c [2];
  byte auStack_54 [12];
  uint uStack_48;
  float afStack_44 [4];
  float local_34;
  uint uStack_30;
  uint *apuStack_2c [4];
  uint uStack_1c;
  uint *puStack_18;
  float local_14;
  
  bVar8 = 0;
  if (*(int *)(param_1 + 0x12ea4) == 0) {
    *(uint *)(param_1 + 0xc268) = 0;
    return;
  }
  iVar4 = 0;
  local_1b8 = 0.0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0xc26c)) {
    do {
      if (-1 < *(int *)(iVar3 + 0xc29c)) {
        local_1b8 = (float)((int)local_1b8 + 1);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar4 < *(int *)(param_1 + 0xc26c));
  }
  if ((int)local_1b8 < *(int *)(param_1 + 0xc26c)) {
    iVar3 = *(int *)(param_1 + 0x12ea4);
    local_84 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
    local_80 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
    local_7c = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
    afStack_44[2] = local_84;
    afStack_44[3] = local_80;
    local_34 = local_7c;
    if ((((float)_DAT_005d5120 < ABS(local_80)) || ((float)_DAT_005d5120 < ABS(local_84))) ||
       ((float)_DAT_005d5120 < ABS(local_7c))) {
      iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x12ea4) + 0x154) + 0xc4))
                        (*(int *)(param_1 + 0x12ea4));
      if (iVar3 == 0) {
        iVar3 = FUN_005351f0(*(int *)(param_1 + 0x12ea4) + 0x20);
      }
      puStack_18 = (uint *)(param_1 + 0x20);
      iVar3 = FUN_005349a0(iVar3,puStack_18,auStack_54,*(uint *)(param_1 + 0x6c));
      if (iVar3 != 0) {
        FUN_0045f3e0(auStack_e8,auStack_54);
        afStack_74[4] = _DAT_005fd234 * param_2;
        afStack_74[2] = 0.0;
        afStack_74[3] = 0.0;
        local_14 = afStack_74[4];
        FUN_0045f690(auStack_e8,afStack_74 + 2);
        puVar5 = &uStack_60;
        uStack_60 = uStack_30;
        auStack_5c[(uint)bVar8 * -2] = apuStack_2c[(uint)bVar8 * -2];
        auStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             apuStack_2c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        puVar6 = (uint *)(param_1 + 0x24 + (uint)bVar8 * -8);
        apuStack_2c[2] = *(uint **)(param_1 + 0x20);
        apuStack_2c[(uint)bVar8 * -2 + 3] = (uint *)*puVar6;
        iVar3 = param_1;
        apuStack_2c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             (uint *)puVar6[(uint)bVar8 * -2 + 1];
        FUN_0042d750(iVar3,puVar5);
        pfVar7 = (float *)(param_1 + 0x24 + (uint)bVar8 * -8);
        uStack_48 = *(uint *)(param_1 + 0x20);
        afStack_44[(uint)bVar8 * -2] = *pfVar7;
        afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = pfVar7[(uint)bVar8 * -2 + 1];
        *puStack_18 = apuStack_2c[2];
        puStack_18[1] = apuStack_2c[3];
        puStack_18[2] = uStack_1c;
        FUN_00427e00(param_1,&uStack_48);
      }
      FUN_00425b00(param_1);
    }
    else {
      FUN_00425b00(param_1);
    }
  }
  if ((0 < (int)local_1b8) &&
     (fVar1 = *(float *)(param_1 + 0x19da0) - param_2, *(float *)(param_1 + 0x19da0) = fVar1,
     uVar2 = DAT_007c637c, fVar1 <= 0.0)) {
    *(uint *)(param_1 + 0x19da0) = 0x3e4ccccd;
    iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x12ea4),uVar2);
    if (iVar3 != 0) {
      FUN_0042c010(local_1b4);
      local_14 = local_1b8;
      local_1b0 = (float)(int)local_1b8 * (float)_DAT_005d5128;
      local_180 = param_1;
      local_17c = param_1;
      (**(code **)(*(int *)(iVar3 + 0x154) + 0x108))(iVar3,local_1b4);
    }
  }
  FUN_005b5760(local_148,*(int *)(param_1 + 0x12ea4) + 0x20,*(int *)(param_1 + 0x12ea4) + 0x30);
  FUN_005b5620(auStack_178,param_1 + 0x20,param_1 + 0x30);
  FUN_005b5200(local_148,auStack_178);
  puVar5 = auStack_118;
  puVar6 = (uint *)(param_1 + 0x12eac);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  if (*(int *)(param_1 + 0x12edc) != *(int *)(*(int *)(param_1 + 0x12ea8) + 0x2320)) {
    FUN_00569890(*(int *)(param_1 + 0x12ea8),*(int *)(param_1 + 0x12edc));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc26c)) {
    iVar4 = param_1 + 0xc270;
    do {
      iVar3 = iVar3 + 1;
      FUN_00426ec0(param_1,iVar4,param_2);
      iVar4 = iVar4 + 0x40;
    } while (iVar3 < *(int *)(param_1 + 0xc26c));
  }
  FUN_00427a30(param_1);
  fStack_a8 = *(float *)(param_1 + 0x19d78) + *(float *)(param_1 + 0x19d84);
  fStack_a4 = *(float *)(param_1 + 0x19d7c) + *(float *)(param_1 + 0x19d88);
  fStack_a0 = *(float *)(param_1 + 0x19d80) + *(float *)(param_1 + 0x19d8c);
  afStack_bc[2] = fStack_a8;
  afStack_bc[(uint)bVar8 * -2 + 3] = afStack_bc[(uint)bVar8 * -2 + 6];
  afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  fStack_9c = afStack_bc[2] * _DAT_005d5130;
  fStack_98 = afStack_bc[3] * _DAT_005d5130;
  fStack_94 = fStack_ac * _DAT_005d5130;
  fStack_c0 = afStack_bc[2] * _DAT_005d5130;
  afStack_bc[(uint)bVar8 * -2] = afStack_bc[(uint)bVar8 * -2 + 9];
  afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
  pfVar7 = &fStack_78;
  fStack_90 = *(float *)(param_1 + 0x20) + fStack_c0;
  fStack_8c = *(float *)(param_1 + 0x24) + afStack_bc[0];
  fStack_88 = *(float *)(param_1 + 0x28) + afStack_bc[1];
  fStack_78 = fStack_90;
  afStack_74[(uint)bVar8 * -2] = afStack_bc[(uint)bVar8 * -2 + 0xc];
  afStack_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
  FUN_00427e00(param_1,pfVar7);
  return;
}
