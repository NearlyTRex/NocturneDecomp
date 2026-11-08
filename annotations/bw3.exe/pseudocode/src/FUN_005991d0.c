// Name: FUN_005991d0
// Address: 005991d0
// Address Range: [[005991d0, 005992e2]]
// Convention: unknown
// Signature: int FUN_005991d0(undefined4 param_1)

#include "nocturne.h"

int FUN_005991d0(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = FUN_0042ac20(param_1);
  iVar2 = FUN_0050acc0(iVar2 + 0xcdcc);
  iVar2 = FUN_0043f8c0(iVar2 + 0x138dc);
  iVar2 = FUN_004fa8a0(iVar2 + 0x1cc);
  *(byte ***)(iVar2 + -0x20720) = &PTR_FUN_005e7d04;
  *(uint *)(iVar2 + -0x1d608) = 0x3f19999a;
  pcVar4 = (char *)0x5d98da;
  *(uint *)(iVar2 + -0x1d604) = 0x3f666666;
  *(uint *)(iVar2 + -0x1d5f8) = 0x3fcccccd;
  *(uint *)(iVar2 + -0x1d5f4) = 0xc479c000;
  uVar3 = FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar2 + 0xc30) = 0;
  pcVar5 = (char *)(iVar2 + -0x1c8);
  *(uint *)(iVar2 + 0xc34) = 0;
  *(uint *)(iVar2 + -0x1cc) = 1;
  *(uint *)(iVar2 + -8) = uVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  FUN_0054eae0(iVar2 + -0x2071c,0x5d98e9);
  *(uint *)(iVar2 + -0x1e0b4) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0xc) = 0;
  return iVar2 + -0x20874;
}
