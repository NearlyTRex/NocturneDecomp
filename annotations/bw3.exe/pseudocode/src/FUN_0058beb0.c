// Name: FUN_0058beb0
// Address: 0058beb0
// Address Range: [[0058beb0, 0058c051]]
// Convention: unknown
// Signature: void FUN_0058beb0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0058beb0(int param_1)

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
  uint auStack_124 [12];
  uint uStack_f4;
  uint auStack_f0 [2];
  float fStack_e8;
  uint auStack_e4 [2];
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint auStack_c0 [2];
  uint auStack_b8 [3];
  uint uStack_ac;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  float afStack_90 [5];
  uint auStack_7c [3];
  uint auStack_70 [3];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  uint uStack_4c;
  uint auStack_40 [3];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x27bc) != 0) && (*(int *)(param_1 + 0xd0d8) != 0)) {
    FUN_0054d9c0(param_1 + 0x158,*(uint *)(param_1 + 0xd0e8));
    puVar2 = (uint *)&stack0xfffffeac;
    puVar3 = auStack_124;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    uStack_d8 = 0x3f000000;
    uStack_d4 = 0x3f000000;
    uStack_dc = 0;
    FUN_00583260(&uStack_dc,auStack_124);
    puVar5 = (byte *)auStack_b8;
    auStack_b8[0] = uStack_c4;
    *(uint *)((int)auStack_c0 + ((uint)bVar4 * -2 + 3) * 4) =
         *(uint *)((int)auStack_c0 + (uint)bVar4 * 0xfffffff8);
    *(uint *)((int)auStack_c0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4) =
         *(uint *)((int)auStack_c0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
    FUN_00408b80(param_1,puVar5);
    puVar5 = (byte *)auStack_124;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_f4 = uStack_58;
    *(uint *)((int)auStack_f0 + (uint)bVar4 * 0xfffffff8) =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 0xf) * 4);
    auStack_f0[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10) * 4);
    FUN_00583260(&uStack_a0,puVar5);
    puVar5 = (byte *)auStack_7c;
    auStack_7c[0] = uStack_ac;
    *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 6) * 4) =
         *(uint *)((int)auStack_c0 + ((uint)bVar4 * -2 + 6) * 4);
    *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4) =
         *(uint *)((int)auStack_c0 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4);
    FUN_00408b00(param_1,puVar5);
    puVar5 = (byte *)auStack_124;
    uStack_c8 = 0x3f800000;
    uStack_d0 = 0;
    uStack_cc = 0;
    fStack_34 = fStack_1c;
    *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 0x18) * 4) =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 0x1e) * 4);
    *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19) * 4) =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f) * 4);
    FUN_00583260(&uStack_d0,puVar5);
    puVar5 = (byte *)auStack_40;
    auStack_40[0] = uStack_94;
    *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 0x15) * 4) =
         *(uint *)((int)afStack_90 + (uint)bVar4 * 0xfffffff8);
    *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16) * 4) =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
    FUN_00408b00(param_1,puVar5);
    fStack_28 = afStack_90[2];
    *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 0x1b) * 4) =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 3) * 4);
    *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c) * 4) =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4);
    fStack_64 = fStack_28 - fStack_34;
    fStack_60 = fStack_24 - fStack_30;
    fStack_5c = fStack_20 - fStack_2c;
    fStack_e8 = fStack_28 - fStack_34;
    *(uint *)((int)auStack_e4 + (uint)bVar4 * 0xfffffff8) =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 0xc) * 4);
    *(uint *)((int)auStack_e4 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd) * 4);
    FUN_00576250(&fStack_e8);
    uVar8 = 0x40c00000;
    puVar6 = (byte *)auStack_70;
    uVar7 = 0x42600000;
    puVar5 = (byte *)&uStack_f4;
    auStack_70[0] = uStack_4c;
    *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 9) * 4) =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 0x12) * 4);
    *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 10) * 4) =
         *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13) * 4);
    FUN_0045f5a0(puVar5,puVar6,uVar7,uVar8);
  }
  FUN_0042f510(param_1);
  return;
}
