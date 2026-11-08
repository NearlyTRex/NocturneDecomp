// Name: FUN_00410b50
// Address: 00410b50
// Address Range: [[00410b50, 00410c1f]]
// Convention: unknown
// Signature: int FUN_00410b50(undefined4 param_1)

#include "nocturne.h"

int FUN_00410b50(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_00447d10(iVar2 + 0x178);
  iVar2 = FUN_00468860(iVar2 + 0x10);
  *(uint *)(iVar2 + -0x34) = 0x5fbeb4;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + 0x17c) = 0;
  pcVar3 = "batpath.pth";
  *(uint *)(iVar2 + 0x180) = 0x41f00000;
  *(uint *)(iVar2 + 0x184) = 0x3f800000;
  pcVar4 = (char *)(iVar2 + -0x30);
  *(uint *)(iVar2 + 0x188) = 0x41f00000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  FUN_00468950(iVar2,0x5d35d2);
  *(byte *)(iVar2 + 0x18c) = 0;
  *(uint *)(iVar2 + 0x1f0) = 0x41700000;
  *(uint *)(iVar2 + 500) = 0x41f00000;
  *(uint *)(iVar2 + 0x1fc) = 0;
  return iVar2 + -0x188;
}
