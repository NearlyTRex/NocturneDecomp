// Name: FUN_00521880
// Address: 00521880
// Address Range: [[00521880, 00521f3d]]
// Convention: unknown
// Signature: undefined4 FUN_00521880(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00521880(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_10ec [1005];
  uint uVar5;
  float *pfVar6;
  uint *puVar7;
  uint uVar8;
  uint local_110;
  uint local_10c;
  uint local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  uint uStack_98;
  float afStack_94 [4];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_68;
  float local_5c;
  float local_54;
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint uStack_38;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float fStack_18;
  float local_14;
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x20b98) != 0) || (*(int *)(param_1 + 0x2628) == 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x2f00) != 0x11) &&
     (local_14 = (float)FUN_00433a60(param_1,0), local_14 < (float)_DAT_005cd5b7)) {
    return 0;
  }
  local_14 = (float)FUN_004fc350(param_1 + 0x158,0);
  if (local_14 < 1.0) {
    return 0;
  }
  local_24 = 0;
  for (local_1c = 0; local_1c < *(int *)(0x01ED78C8 + 0x14d164); local_1c = local_1c + 1) {
    iVar1 = FUN_0040c840(*(uint *)(0x01ED78C8 + local_24 + 0x14d168),_DAT_01548bfc);
    local_28 = iVar1;
    if ((iVar1 != 0) && (iVar2 = FUN_004594a0(iVar1,*(uint *)(param_1 + 0x2628)), iVar2 != 0))
    {
      FUN_00408bf0(param_1,*(int *)(param_1 + 0x2628) + 0x20);
      local_b0 = local_50;
      *(float *)((int)&stack0xffffff54 + (uint)bVar4 * -8) =
           afStack_94[(uint)bVar4 * 0xfffffffe + 0x12];
      iVar2 = iVar1 + 0x20;
      *(float *)((int)&stack0xffffff58 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           afStack_94[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0x13];
      FUN_00408bf0(param_1,iVar2);
      local_e0 = local_f8;
      *(uint *)((int)&stack0xffffff24 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff0c + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffff28 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff10 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      local_80 = local_e0 - local_b0;
      local_7c = local_dc - local_ac;
      local_78 = local_d8 - local_a8;
      local_104 = local_e0 - local_b0;
      (&stack0xffffff00)[(uint)bVar4 * 0xfffffffe] = afStack_94[(uint)bVar4 * 0xfffffffe + 6];
      *(float *)((int)&stack0xffffff04 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           afStack_94[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7];
      if ((0.0 < local_fc) &&
         ((((local_fc < (float)_DAT_005cd5bf && (ABS(local_104) < (float)_DAT_005cd5c7)) &&
           (0.0 < (double)local_100)) && ((double)local_100 < _DAT_005cd5cf)))) {
        iVar2 = *(int *)(param_1 + 0x2628);
        if ((iVar2 == 0) ||
           (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x84))(iVar2,param_1), iVar2 != 4)) {
          FUN_004fc0d0(param_1 + 0x158,0x21,1);
        }
        else {
          FUN_004fc0d0(param_1 + 0x158,0x25,1);
          FUN_00408bf0(param_1,iVar1 + 0x20);
          uStack_98 = uStack_38;
          *(float *)((int)afStack_94 + (uint)bVar4 * -8) =
               afStack_94[(uint)bVar4 * 0xfffffffe + 0x18];
          afStack_94[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
               afStack_94[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0x19];
          if ((uint *)(param_1 + 0x20c8c) != &uStack_98) {
            *(uint *)(param_1 + 0x20c8c) = uStack_98;
            *(float *)(param_1 + 0x20c90) = afStack_94[0];
            *(float *)(param_1 + 0x20c94) = afStack_94[1];
          }
          fStack_18 = *(float *)(param_1 + 0x20ca8) - *(float *)(param_1 + 0x20c9c);
          local_14 = (float)FUN_00517e80(*(uint *)(param_1 + 0x2628));
          *(float *)(param_1 + 0x20c90) = (fStack_18 - local_14) + *(float *)(param_1 + 0x20c90);
        }
        if (*(int *)(param_1 + 0x20b64) != 0) {
          FUN_0047cee0(0x01C5B0E4,"?actionPending = %d\nprye.cpp line %d" + 1,
                       *(int *)(param_1 + 0x20b64),0x11b5);
        }
        *(uint *)(param_1 + 0x20b64) = 2;
        if ((uint *)(param_1 + 0x20bb0) != (uint *)(local_28 + 0x20)) {
          *(uint *)(param_1 + 0x20bb0) = *(uint *)(local_28 + 0x20);
          *(uint *)(param_1 + 0x20bb4) = *(uint *)(local_28 + 0x24);
          *(uint *)(param_1 + 0x20bb8) = *(uint *)(local_28 + 0x28);
        }
        if ((uint *)(param_1 + 0x20bbc) != (uint *)(local_28 + 0x30)) {
          *(uint *)(param_1 + 0x20bbc) = *(uint *)(local_28 + 0x30);
          *(uint *)(param_1 + 0x20bc0) = *(uint *)(local_28 + 0x34);
          *(uint *)(param_1 + 0x20bc4) = *(uint *)(local_28 + 0x38);
        }
        return 1;
      }
    }
    local_24 = local_24 + 4;
  }
  FUN_0053ec10(0x01ED78C8,param_1);
  FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0x2628));
  puVar7 = &stack0xfffffef0;
  puVar3 = (uint *)(*(int *)(param_1 + 0x2628) + 0x24 + (uint)bVar4 * -8);
  local_bc = *(float *)(*(int *)(param_1 + 0x2628) + 0x20);
  (&stack0xffffff48)[(uint)bVar4 * 0xfffffffe] = (float)*puVar3;
  *(uint *)((int)&stack0xffffff4c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       puVar3[(uint)bVar4 * -2 + 1];
  local_108 = 0x3f800000;
  local_110 = 0;
  local_10c = 0;
  FUN_00408b00(param_1,puVar7);
  local_5c = local_74;
  afStack_94[(uint)bVar4 * 0xfffffffe + 0xf] = afStack_94[(uint)bVar4 * 0xfffffffe + 9];
  afStack_94[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0x10] =
       afStack_94[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 10];
  local_b8 = *(float *)(param_1 + 0x24);
  local_bc = local_bc + local_5c;
  local_b4 = local_b4 + local_54;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0x3fc00000;
  FUN_00408b00(param_1,&stack0xffffff38);
  uVar8 = 0x40400000;
  uVar5 = 0x3dcccccd;
  local_a4 = local_68;
  *(float *)((int)&stack0xffffff60 + (uint)bVar4 * -8) = afStack_94[(uint)bVar4 * 0xfffffffe + 0xc];
  *(float *)((int)&stack0xffffff64 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_94[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0xd];
  local_14 = (float)FUN_0053de10(0x01ED78C8,local_bc,local_b4,local_a4,local_9c,0x3f800000,uVar5,
                                 uVar8);
  if (local_14 < 1.0) {
    FUN_0053ebe0(0x01ED78C8);
    return 0;
  }
  uVar5 = 0x3f000000;
  pfVar6 = &stack0xffffff14;
  local_44 = local_bc + local_a4;
  local_40 = local_b8 + local_a0;
  local_3c = local_b4 + local_9c;
  local_ec = local_bc + local_a4;
  *(float *)((int)&stack0xffffff18 + (uint)bVar4 * 0xfffffffe * 4) =
       afStack_94[(uint)bVar4 * 0xfffffffe + 0x15];
  iVar1 = 0x01ED78C8;
  *(float *)(&stack0xffffff1c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_94[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 0x16];
  local_2c = (float)FUN_0053bc80(iVar1,pfVar6,uVar5);
  local_14 = local_2c;
  FUN_0053ebe0(0x01ED78C8);
  if (ABS(local_2c - *(float *)(param_1 + 0x24)) <= 1.0) {
    iVar1 = 0;
    local_20 = 0;
    do {
      if (*(int *)(0x01ED78C8 + 0x14d164) <= iVar1) {
        *(uint *)(param_1 + 0x20b64) = 6;
        iVar1 = *(int *)(param_1 + 0x2628);
        if ((iVar1 == 0) ||
           (iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x84))(iVar1,param_1), iVar1 != 4)) {
          uVar5 = 0x1f;
        }
        else {
          uVar5 = 0x24;
        }
        FUN_004fc0d0(param_1 + 0x158,uVar5,1);
        return 1;
      }
      iVar2 = FUN_0040c840(*(uint *)(0x01ED78C8 + local_20 + 0x14d168),DAT_007f8fc8);
      if (iVar2 != 0) {
        afStack_94[2] = *(float *)(iVar2 + 0x20) - local_bc;
        afStack_94[3] = *(float *)(iVar2 + 0x24) - local_b8;
        local_84 = *(float *)(iVar2 + 0x28) - local_b4;
        local_d4 = afStack_94[2];
        *(float *)((int)&stack0xffffff30 + (uint)bVar4 * -8) =
             afStack_94[(uint)bVar4 * 0xfffffffe + 3];
        *(float *)((int)&stack0xffffff34 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             afStack_94[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4];
        if (SQRT(local_cc * local_cc + local_d4 * local_d4 + local_d0 * local_d0) <
            (float)_DAT_005cd5c7) {
          return 0;
        }
      }
      local_20 = local_20 + 4;
      iVar1 = iVar1 + 1;
    } while( true );
  }
  return 0;
}
