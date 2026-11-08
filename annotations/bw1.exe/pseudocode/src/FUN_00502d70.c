// Name: FUN_00502d70
// Address: 00502d70
// Address Range: [[00502d70, 00502e01]]
// Convention: unknown
// Signature: int FUN_00502d70(undefined4 param_1)

#include "nocturne.h"

int FUN_00502d70(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  *(uint *)(iVar2 + 0x154) = 0x6032d4;
  pcVar3 = "none";
  *(uint *)(iVar2 + 0x158) = 0x42600000;
  *(uint *)(iVar2 + 0x15c) = 0x40c00000;
  *(uint *)(iVar2 + 0xfc) = 1;
  pcVar4 = (char *)(iVar2 + 0x164);
  *(uint *)(iVar2 + 0x160) = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "none";
  pcVar4 = (char *)(iVar2 + 0x1c8);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2;
}
