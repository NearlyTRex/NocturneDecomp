// Name: FUN_00598fa0
// Address: 00598fa0
// Address Range: [[00598fa0, 0059915e]]
// Convention: unknown
// Signature: undefined4 FUN_00598fa0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint FUN_00598fa0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_10dc [990];
  byte *puVar5;
  byte *puVar6;
  uint uVar7;
  uint uVar8;
  uint auStack_154 [12];
  uint auStack_124 [12];
  uint uStack_f4;
  uint auStack_f0 [2];
  uint uStack_e8;
  uint auStack_e4 [2];
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float afStack_cc [2];
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint auStack_b4 [5];
  uint uStack_a0;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  float afStack_84 [5];
  uint auStack_70 [3];
  uint auStack_64 [3];
  float afStack_58 [3];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint auStack_34 [3];
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x2828) != 0) && (*(int *)(param_1 + 0x10b7c) != 0)) {
    FUN_00546790(param_1 + 0x2b4,*(uint *)(param_1 + 0x10b88));
    puVar2 = auStack_124;
    puVar3 = auStack_154;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    uStack_d8 = 0x3f000000;
    uStack_d4 = 0x3f000000;
    uStack_dc = 0;
    FUN_00591530(&uStack_dc,auStack_154);
    puVar6 = (byte *)&uStack_f4;
    uStack_f4 = uStack_b8;
    *(uint *)((int)auStack_f0 + (uint)bVar4 * 0xfffffff8) =
         *(uint *)((int)auStack_b4 + (uint)bVar4 * 0xfffffff8);
    *(uint *)((int)afStack_cc + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + -8) * 4) =
         *(uint *)((int)auStack_b4 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
    FUN_00408d70(param_1,puVar6);
    puVar6 = (byte *)auStack_154;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_e8 = auStack_b4[2];
    *(uint *)((int)auStack_e4 + (uint)bVar4 * 0xfffffff8) =
         *(uint *)((int)auStack_b4 + ((uint)bVar4 * -2 + 3) * 4);
    *(uint *)((int)auStack_e4 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
         *(uint *)((int)auStack_b4 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4);
    FUN_00591530(&uStack_94,puVar6);
    puVar6 = (byte *)auStack_70;
    auStack_70[0] = uStack_a0;
    *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + 6) * 4) =
         *(uint *)((int)auStack_b4 + ((uint)bVar4 * -2 + 6) * 4);
    *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4) =
         *(uint *)((int)auStack_b4 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4);
    FUN_00408cf0(param_1,puVar6);
    puVar6 = (byte *)auStack_154;
    uStack_bc = 0x3f800000;
    uStack_c4 = 0;
    uStack_c0 = 0;
    fStack_d0 = fStack_28;
    *(uint *)((int)afStack_cc + (uint)bVar4 * 0xfffffff8) =
         *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + 0x18) * 4);
    *(uint *)((int)afStack_cc + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
         *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19) * 4);
    FUN_00591530(&uStack_c4,puVar6);
    puVar6 = (byte *)auStack_34;
    auStack_34[0] = uStack_88;
    *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + 0x15) * 4) =
         *(uint *)((int)afStack_84 + (uint)bVar4 * 0xfffffff8);
    *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16) * 4) =
         *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
    FUN_00408cf0(param_1,puVar6);
    fStack_1c = afStack_84[2];
    *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + 0x1b) * 4) =
         *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + 3) * 4);
    *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c) * 4) =
         *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4);
    fStack_4c = fStack_1c - fStack_d0;
    fStack_48 = fStack_18 - afStack_cc[0];
    fStack_44 = fStack_14 - afStack_cc[1];
    afStack_58[0] = fStack_1c - fStack_d0;
    *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + 0xc) * 4) =
         *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + 0xf) * 4);
    *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd) * 4) =
         *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10) * 4);
    FUN_005838f0(afStack_58);
    uVar8 = 0x40c00000;
    puVar6 = (byte *)auStack_64;
    uVar7 = 0x42600000;
    puVar5 = (byte *)&uStack_e8;
    auStack_64[0] = uStack_40;
    *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + 9) * 4) =
         *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + 0x12) * 4);
    *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 10) * 4) =
         *(uint *)((int)afStack_84 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13) * 4);
    FUN_0044d060(puVar5,puVar6,uVar7,uVar8);
  }
  if (*(int *)(param_1 + 0x2828) == 0) {
    return *(uint *)(param_1 + 0x2828);
  }
  FUN_004268b0(param_1);
  return *(uint *)(param_1 + 0x2828);
}
