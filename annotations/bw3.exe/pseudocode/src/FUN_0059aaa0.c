// Name: FUN_0059aaa0
// Address: 0059aaa0
// Address Range: [[0059aaa0, 0059ab9e]]
// Convention: unknown
// Signature: int FUN_0059aaa0(undefined4 param_1)

#include "nocturne.h"

int FUN_0059aaa0(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = FUN_00508f40(param_1);
  iVar2 = FUN_0050acc0(iVar2 + 0x206c8);
  iVar2 = FUN_0043f8c0(iVar2 + 0x138dc);
  iVar2 = FUN_004fa8a0(iVar2 + 0x1d0);
  *(byte ***)(iVar2 + -0x34020) = &PTR_FUN_005e8024;
  *(uint *)(iVar2 + -0x30f08) = 0x3f19999a;
  *(uint *)(iVar2 + -0x30f04) = 0x3f666666;
  *(uint *)(iVar2 + -0x30ef8) = 0x3fcccccd;
  *(uint *)(iVar2 + -0x30ef4) = 0xc479c000;
  uVar3 = FUN_0040ce40(0x3f666666,0x3f8ccccd);
  pcVar4 = (char *)0x5d9b12;
  *(uint *)(iVar2 + -0xc) = uVar3;
  FUN_0054eae0(iVar2 + -0x3401c,0x5d9b04);
  pcVar5 = (char *)(iVar2 + -0x1cc);
  *(uint *)(iVar2 + -0x1d0) = 1;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x319b4) = 0;
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  return iVar2 + -0x34174;
}
