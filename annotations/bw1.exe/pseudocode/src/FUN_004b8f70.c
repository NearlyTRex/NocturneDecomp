// Name: FUN_004b8f70
// Address: 004b8f70
// Address Range: [[004b8f70, 004b9008]]
// Convention: unknown
// Signature: int FUN_004b8f70(undefined4 param_1)

#include "nocturne.h"

int FUN_004b8f70(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_00468860(iVar2 + 0x158);
  iVar2 = FUN_004b7a30(iVar2 + 0x1e8);
  pcVar3 = (char *)0x5df78e;
  *(uint *)(iVar2 + -0x1ec) = 0x6004a4;
  FUN_00468950(iVar2 + -0x1e8,"question.kfm");
  *(uint *)(iVar2 + -0x6c) = 0;
  pcVar4 = (char *)(iVar2 + -100);
  *(uint *)(iVar2 + -0x68) = 0x41200000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x2a4) = 0;
  return iVar2 + -0x340;
}
