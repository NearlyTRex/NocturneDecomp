// Name: FUN_00485370
// Address: 00485370
// Address Range: [[00485370, 0048544e]]
// Convention: unknown
// Signature: int FUN_00485370(undefined4 param_1)

#include "nocturne.h"

int FUN_00485370(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_00468860(iVar2 + 0x158);
  *(uint *)(iVar2 + -4) = 0x5ff374;
  FUN_00468950(iVar2,0x5db56c);
  *(uint *)(iVar2 + 0x17c) = 2;
  *(uint *)(iVar2 + 0x180) = 1;
  *(uint *)(iVar2 + 0x1b4) = 0;
  *(uint *)(iVar2 + 0x1b0) = *(uint *)(iVar2 + 0x1b4);
  *(uint *)(iVar2 + 0x1ac) = *(uint *)(iVar2 + 0x1b0);
  *(uint *)(iVar2 + 0x188) = 0x40a00000;
  *(uint *)(iVar2 + 0x18c) = 0x41200000;
  *(uint *)(iVar2 + 0x184) = 0;
  pcVar3 = (char *)0x5db577;
  *(uint *)(iVar2 + 400) = 0;
  *(uint *)(iVar2 + 0x1b8) = 0x41200000;
  pcVar4 = (char *)(iVar2 + 0x1bc);
  *(uint *)(iVar2 + 0x1e0) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x1dc) = 0;
  return iVar2 + -0x158;
}
