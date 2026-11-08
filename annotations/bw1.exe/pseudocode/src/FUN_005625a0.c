// Name: FUN_005625a0
// Address: 005625a0
// Address Range: [[005625a0, 0056265e]]
// Convention: unknown
// Signature: int FUN_005625a0(undefined4 param_1)

#include "nocturne.h"

int FUN_005625a0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_00468860(iVar2 + 0x158);
  iVar2 = FUN_0041da00(iVar2 + 0x200);
  *(uint *)(iVar2 + -0x204) = 0x605764;
  FUN_00468950(iVar2 + -0x200,"question.kfm");
  pcVar3 = (char *)0x5f1a60;
  pcVar4 = (char *)(iVar2 + -0x7c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0x14) = *(uint *)(iVar2 + -0x10);
  *(uint *)(iVar2 + -0x18) = *(uint *)(iVar2 + -0x14);
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -8) = *(uint *)(iVar2 + -4);
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -8);
  *(uint *)(iVar2 + -0x84) = 0;
  *(uint *)(iVar2 + -0x80) = 0x42c80000;
  return iVar2 + -0x358;
}
