// Name: FUN_005a2040
// Address: 005a2040
// Address Range: [[005a2040, 005a2199]]
// Convention: unknown
// Signature: int FUN_005a2040(undefined4 param_1)

#include "nocturne.h"

int FUN_005a2040(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  uint auStackY_1018 [1016];
  uint uStack_30;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar5 = 0;
  iVar2 = FUN_005ad4c0(param_1);
  iVar2 = FUN_00468860(iVar2 + 0x584);
  *(uint *)(iVar2 + -0x430) = 0x6074e4;
  FUN_00468950(iVar2 + -0x42c,"gturret_head.kfm");
  FUN_00468950(iVar2,"gturret_tripod.kfm");
  *(uint *)(iVar2 + 0x17c) = 0;
  *(byte *)(iVar2 + 0x180) = 0;
  *(uint *)(iVar2 + 0x1e4) = 0x40400000;
  *(uint *)(iVar2 + 0x1e8) = 0x40c00000;
  *(uint *)(iVar2 + 0x1ec) = 0x40400000;
  *(uint *)(iVar2 + 0x1f0) = 0x3e4ccccd;
  *(uint *)(iVar2 + 500) = 0x41f00000;
  pcVar3 = "CCharacter";
  *(uint *)(iVar2 + 0x1f8) = 0;
  *(uint *)(iVar2 + -0x284) = 0;
  pcVar4 = (char *)(iVar2 + 0x200);
  *(uint *)(iVar2 + 0x1fc) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  uStack_18 = 0;
  uStack_10 = 0x3f800000;
  uStack_14 = 0;
  FUN_00408b40(iVar2 + -0x584,&stack0xffffffe8);
  uStack_24 = uStack_30;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((uint *)(iVar2 + 0x2c8) != &stack0xffffffdc) {
    *(uint *)(iVar2 + 0x2c8) = uStack_24;
    *(uint *)(iVar2 + 0x2cc) = uStack_20;
    *(uint *)(iVar2 + 0x2d0) = uStack_1c;
  }
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0;
  *(uint *)(iVar2 + 0x2d4) = 0;
  return iVar2 + -0x584;
}
