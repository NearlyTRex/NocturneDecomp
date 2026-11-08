// Name: FUN_0045d1f0
// Address: 0045d1f0
// Address Range: [[0045d1f0, 0045d259]]
// Convention: unknown
// Signature: int FUN_0045d1f0(undefined4 param_1)

#include "nocturne.h"

int FUN_0045d1f0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x5d834d;
  iVar2 = FUN_004085c0(param_1);
  pcVar4 = (char *)(iVar2 + 0x188);
  *(uint *)(iVar2 + 0x154) = 0x5fe854;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x158) = 0;
  *(byte *)(iVar2 + 0x15c) = 0;
  *(uint *)(iVar2 + 0x1f0) = 1;
  *(uint *)(iVar2 + 0x1ec) = 1;
  return iVar2;
}
