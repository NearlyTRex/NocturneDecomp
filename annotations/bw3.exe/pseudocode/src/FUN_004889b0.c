// Name: FUN_004889b0
// Address: 004889b0
// Address Range: [[004889b0, 00488ab2]]
// Convention: unknown
// Signature: undefined4 FUN_004889b0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint FUN_004889b0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint *apuStackY_101c [972];
  uint uVar5;
  uint uStack_94;
  uint uStack_90;
  uint *puStack_8c;
  uint uStack_88;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar4 = 0;
  puStack_8c = (uint *)DAT_005f2afc;
  uStack_90 = 0x4889c8;
  iVar1 = FUN_0046d540();
  if (((iVar1 == 0) && (*(int *)(param_1 + 0x158) == 3)) && (*(int *)(param_1 + 0x168) != 0)) {
    puStack_8c = (uint *)0x01ED78C8;
    uStack_90 = 0x4889f6;
    FUN_0053ebe0();
    puStack_8c = (uint *)param_1;
    uStack_90 = 0x01ED78C8;
    uStack_94 = 0x488a05;
    FUN_0053ec10();
    puStack_8c = &stack0xffffff78;
    uStack_90 = 0x488a11;
    FUN_004a2de0();
    uStack_80 = *(uint *)(param_1 + 0x238);
    uStack_7c = *(uint *)(param_1 + 0x23c);
    puStack_8c = (uint *)0x0;
    uStack_78 = *(uint *)(param_1 + 0x240);
    uStack_74 = *(uint *)(param_1 + 0x244);
    uStack_88 = 0x3f800000;
    uStack_70 = 0;
    uStack_6c = 0;
    puVar2 = &stack0xffffff78;
    puVar3 = (uint *)&stack0xffffff20;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    uStack_20 = 0x42c80000;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_00408b00(param_1,&stack0xffffffd8);
    puVar2 = &stack0xffffffe4;
    param_1 = param_1 + 0x20;
    uStack_1c = uStack_34;
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * 0xfffffffe * 4);
    uVar5 = 0x01C73654;
    *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    FUN_004a2e20(uVar5,param_1,puVar2);
    puStack_8c = (uint *)0x01ED78C8;
    uStack_90 = 0x488aa4;
    FUN_0053ebe0();
    return 1;
  }
  return 0;
}
