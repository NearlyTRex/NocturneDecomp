// Name: FUN_004e7c80
// Address: 004e7c80
// Address Range: [[004e7c80, 004e7d44]]
// Convention: unknown
// Signature: int FUN_004e7c80(undefined4 param_1)

#include "nocturne.h"

int FUN_004e7c80(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_00438a50(iVar2 + 0x300);
  pcVar3 = (char *)0x5dc74e;
  *(uint *)(iVar2 + -0x50) = 0x5f9b74;
  pcVar4 = (char *)(iVar2 + -0x4c);
  *(uint *)(iVar2 + -0x2c) = 0x41200000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x28) = 0;
  *(uint *)(iVar2 + -0x24) = 3;
  *(uint *)(iVar2 + -0x20) = 0;
  *(uint *)(iVar2 + -0x1c) = 0;
  *(uint *)(iVar2 + -0x18) = 0;
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0xc) = 0;
  *(uint *)(iVar2 + -0x204) = 1;
  *(uint *)(iVar2 + -4) = 1;
  return iVar2 + -0x300;
}
