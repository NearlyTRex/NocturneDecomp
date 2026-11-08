// Name: FUN_004d12d0
// Address: 004d12d0
// Address Range: [[004d12d0, 004d13f2]]
// Convention: unknown
// Signature: int FUN_004d12d0(undefined4 param_1)

#include "nocturne.h"

int FUN_004d12d0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00510460(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5f86d4;
  FUN_005478b0(iVar2 + 0x2b4,0x5da107);
  *(uint *)(iVar2 + 0x246f4) = 0;
  *(uint *)(iVar2 + 0x246fc) = 0;
  pcVar3 = (char *)0x5da113;
  *(uint *)(iVar2 + 0x24700) = 0;
  *(uint *)(iVar2 + 0x24704) = 0;
  pcVar4 = (char *)(iVar2 + 0x2434c);
  *(uint *)(iVar2 + 0x24348) = 0x40a00000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x24708) = 0;
  *(uint *)(iVar2 + 0x276c) = 0;
  *(uint *)(iVar2 + 0x24720) = 0;
  *(uint *)(iVar2 + 0x24724) = 0;
  *(byte *)(iVar2 + 0x243b0) = 0;
  *(byte *)(iVar2 + 0x243d0) = 0;
  *(byte *)(iVar2 + 0x24434) = 0;
  *(byte *)(iVar2 + 0x24498) = 0;
  *(byte *)(iVar2 + 0x244fc) = 0;
  *(byte *)(iVar2 + 0x24560) = 0;
  *(byte *)(iVar2 + 0x245c4) = 0;
  *(uint *)(iVar2 + 0x24728) = 0;
  *(uint *)(iVar2 + 0x2472c) = 0;
  *(uint *)(iVar2 + 0x2471c) = 0;
  *(byte *)(iVar2 + 0x25b4) = 0;
  *(byte *)(iVar2 + 0x24628) = 0;
  *(byte *)(iVar2 + 0x2468c) = 0;
  *(uint *)(iVar2 + 0x25b0) = 1;
  return iVar2;
}
