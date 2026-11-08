// Name: FUN_00422570
// Address: 00422570
// Address Range: [[00422570, 004229e2]]
// Convention: unknown
// Signature: void FUN_00422570(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422570(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_10ac [953];
  byte auStack_1b8 [4];
  uint local_1b4;
  int local_184;
  int local_180;
  byte auStack_17c [48];
  byte local_14c [48];
  uint auStack_11c [12];
  byte auStack_ec [40];
  float fStack_c4;
  float afStack_c0 [2];
  byte auStack_b8 [12];
  uint uStack_ac;
  uint uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float afStack_7c [3];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float local_58;
  float local_54;
  float local_50;
  uint uStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float afStack_24 [3];
  uint *puStack_18;
  int local_14;
  
  bVar8 = 0;
  if (*(int *)(param_1 + 0x1381c) == 0) {
    *(uint *)(param_1 + 0xd054) = 0;
    return;
  }
  iVar4 = 0;
  local_14 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0xd058)) {
    do {
      if (-1 < *(int *)(iVar3 + 0xd088)) {
        local_14 = local_14 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar4 < *(int *)(param_1 + 0xd058));
  }
  if (local_14 < *(int *)(param_1 + 0xd058)) {
    iVar3 = *(int *)(param_1 + 0x1381c);
    local_58 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
    local_54 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
    local_50 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
    local_34 = local_58;
    local_30 = local_54;
    local_2c = local_50;
    if ((((float)_DAT_005b7861 < ABS(local_54)) || ((float)_DAT_005b7861 < ABS(local_58))) ||
       ((float)_DAT_005b7861 < ABS(local_50))) {
      iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1381c) + 0x154) + 0xc4))
                        (*(int *)(param_1 + 0x1381c));
      if (iVar3 == 0) {
        iVar3 = FUN_0050ced0(*(int *)(param_1 + 0x1381c) + 0x20);
      }
      puStack_18 = (uint *)(param_1 + 0x20);
      iVar3 = FUN_0050c680(iVar3,puStack_18,auStack_b8,*(uint *)(param_1 + 0x6c));
      if (iVar3 != 0) {
        FUN_0045b550(auStack_ec,auStack_b8);
        fStack_a4 = _DAT_005dcbd4 * param_2;
        uStack_ac = 0;
        uStack_a8 = 0;
        afStack_24[2] = fStack_a4;
        FUN_0045b800(auStack_ec,&uStack_ac);
        puVar5 = &uStack_4c;
        uStack_4c = afStack_9c[2];
        afStack_48[(uint)bVar8 * -2] = afStack_9c[(uint)bVar8 * -2 + 3];
        afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        pfVar6 = (float *)(param_1 + 0x24 + (uint)bVar8 * -8);
        uStack_64 = *(uint *)(param_1 + 0x20);
        afStack_9c[(uint)bVar8 * -2 + 0xf] = *pfVar6;
        iVar3 = param_1;
        afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] = pfVar6[(uint)bVar8 * -2 + 1];
        FUN_0042c230(iVar3,puVar5);
        pfVar6 = (float *)(param_1 + 0x24 + (uint)bVar8 * -8);
        afStack_7c[0] = *(float *)(param_1 + 0x20);
        afStack_9c[(uint)bVar8 * -2 + 9] = *pfVar6;
        afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] = pfVar6[(uint)bVar8 * -2 + 1];
        *puStack_18 = uStack_64;
        puStack_18[1] = uStack_60;
        puStack_18[2] = uStack_5c;
        FUN_00423fb0(param_1,afStack_9c + 8);
      }
      FUN_00421c90(param_1);
    }
    else {
      FUN_00421c90(param_1);
    }
  }
  if ((0 < local_14) &&
     (fVar1 = *(float *)(param_1 + 0x1be90) - param_2, *(float *)(param_1 + 0x1be90) = fVar1,
     uVar2 = DAT_007e2cec, fVar1 <= 0.0)) {
    *(uint *)(param_1 + 0x1be90) = 0x3e4ccccd;
    iVar3 = FUN_0040c840(*(uint *)(param_1 + 0x1381c),uVar2);
    if (iVar3 != 0) {
      FUN_0042abb0(auStack_1b8);
      local_184 = param_1;
      local_180 = param_1;
      local_1b4 = 0x3f800000;
      (**(code **)(*(int *)(iVar3 + 0x154) + 0x108))(iVar3,auStack_1b8);
    }
  }
  FUN_00583940(local_14c,*(int *)(param_1 + 0x1381c) + 0x20,*(int *)(param_1 + 0x1381c) + 0x30);
  FUN_00583800(auStack_17c,param_1 + 0x20,param_1 + 0x30);
  FUN_005833e0(local_14c,auStack_17c);
  puVar5 = auStack_11c;
  puVar7 = (uint *)(param_1 + 0x13824);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  if (*(int *)(param_1 + 0x13854) != *(int *)(*(int *)(param_1 + 0x13820) + 0x2320)) {
    FUN_0054e420(*(int *)(param_1 + 0x13820),*(int *)(param_1 + 0x13854));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xd058)) {
    iVar4 = param_1 + 0xd05c;
    do {
      iVar3 = iVar3 + 1;
      FUN_00423050(param_1,iVar4,param_2);
      iVar4 = iVar4 + 0x40;
    } while (iVar3 < *(int *)(param_1 + 0xd058));
  }
  FUN_00423bc0(param_1);
  afStack_48[2] = *(float *)(param_1 + 0x1be68) + *(float *)(param_1 + 0x1be74);
  afStack_48[3] = *(float *)(param_1 + 0x1be6c) + *(float *)(param_1 + 0x1be78);
  fStack_38 = *(float *)(param_1 + 0x1be70) + *(float *)(param_1 + 0x1be7c);
  fStack_c4 = afStack_48[2];
  afStack_c0[(uint)bVar8 * -2] = afStack_48[(uint)bVar8 * -2 + 3];
  *(float *)(auStack_b8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -4) =
       afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
  fStack_28 = fStack_c4 * _DAT_005b7869;
  afStack_24[0] = afStack_c0[0] * _DAT_005b7869;
  afStack_24[1] = afStack_c0[1] * _DAT_005b7869;
  fStack_88 = fStack_c4 * _DAT_005b7869;
  afStack_9c[(uint)bVar8 * -2 + 6] = afStack_24[(uint)bVar8 * -2];
  afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       afStack_24[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  pfVar6 = &fStack_a0;
  fStack_70 = *(float *)(param_1 + 0x20) + fStack_88;
  fStack_6c = *(float *)(param_1 + 0x24) + fStack_84;
  fStack_68 = *(float *)(param_1 + 0x28) + fStack_80;
  fStack_a0 = fStack_70;
  afStack_9c[(uint)bVar8 * -2] = afStack_9c[(uint)bVar8 * -2 + 0xc];
  afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
  FUN_00423fb0(param_1,pfVar6);
  return;
}
