// Name: FUN_004182d0
// Address: 004182d0
// Address Range: [[004182d0, 004184b6]]
// Convention: unknown
// Signature: void FUN_004182d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004182d0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float afStackY_101c [1015];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  float fStack_1c;
  uint uStack_10;
  
  bVar7 = 0;
  iVar3 = FUN_00487db0(param_1);
  iVar3 = FUN_005b7f5f(iVar3 + 0x10b78,0x14,0x5f39a0);
  *(uint *)(iVar3 + -0x108c8) = 0x5f3844;
  FUN_005478b0(iVar3 + -0x108c4,0x5cc022);
  *(uint *)(iVar3 + -0xd748) = 0x3f19999a;
  *(uint *)(iVar3 + -0xd744) = 0x3f666666;
  pcVar5 = "boneguydie";
  *(uint *)(iVar3 + -0x10a7c) = 1;
  pcVar6 = (char *)(iVar3 + -0x6c);
  *(uint *)(iVar3 + 0x5a0) = 0;
  uVar4 = _DAT_005f3830;
  *(uint *)(iVar3 + -0xe36c) = 2;
  uVar2 = _DAT_005f3834;
  *(uint *)(iVar3 + -8) = 0x41200000;
  *(uint *)(iVar3 + -0xd740) = uVar4;
  *(uint *)(iVar3 + -0xd73c) = uVar2;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + -4) = 0;
  FUN_005b77c0(iVar3,0,0x5a0);
  uVar4 = FUN_0040cfc0(0,0xff);
  *(uint *)(iVar3 + -0x7c) = 0;
  *(uint *)(iVar3 + -0x78) = 0;
  *(uint *)(iVar3 + -0x74) = 0;
  *(uint *)(iVar3 + -0x8c) = 0x40c00000;
  *(uint *)(iVar3 + -0xe5dc) = 0x3f490fdb;
  *(uint *)(iVar3 + -0x80) = uVar4;
  uStack_28 = FUN_0040cf60(0,0x437f0000);
  uStack_10 = uStack_28;
  uStack_24 = FUN_0040cf60(0,0x42200000);
  uStack_10 = uStack_24;
  uStack_20 = FUN_0040cf60(0x42d40000,0x43800000);
  uStack_10 = uStack_20;
  FUN_00418110(&stack0xffffffd8);
  fStack_34 = fStack_1c;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar7 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  fVar8 = (float10)_DAT_005cc03a;
  fVar9 = (float10)fStack_34 * fVar8;
  fVar10 = (float10)fStack_30 * fVar8;
  fVar8 = (float10)fStack_2c * fVar8;
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  *(int *)(iVar3 + -0x10a70) = (int)ROUND(fVar9);
  *(int *)(iVar3 + -0x10a6c) = (int)ROUND(fVar10);
  *(int *)(iVar3 + -0x10a68) = (int)ROUND(fVar8);
  return;
}
