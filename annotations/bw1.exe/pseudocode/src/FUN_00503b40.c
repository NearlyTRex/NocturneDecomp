// Name: FUN_00503b40
// Address: 00503b40
// Address Range: [[00503b40, 00503c80]]
// Convention: unknown
// Signature: int FUN_00503b40(undefined4 param_1)

#include "nocturne.h"

int FUN_00503b40(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_00468860(iVar2 + 0x158);
  iVar2 = FUN_00468860(iVar2 + 0x17c);
  iVar2 = FUN_00468860(iVar2 + 0x17c);
  iVar2 = FUN_005c0357(iVar2 + 0x1a0,0xc,0x603610);
  iVar2 = FUN_005c0357(iVar2 + 0x4b0,0xc,0x603630);
  iVar2 = FUN_005c0357(iVar2 + 0x8a0,2,0x603650);
  *(uint *)(iVar2 + -0x11ec) = 0x603454;
  FUN_00468950(iVar2 + -0x11e8,0x5e7406);
  FUN_00468950(iVar2 + -0x106c,0x5e7413);
  FUN_00468950(iVar2 + -0xef0,"mirrhack.kfm");
  pcVar3 = "headlite.raw";
  pcVar4 = (char *)(iVar2 + 0x188);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xd6c) = 0;
  *(uint *)(iVar2 + -0xd70) = *(uint *)(iVar2 + -0xd6c);
  *(uint *)(iVar2 + -0xd74) = *(uint *)(iVar2 + -0xd70);
  *(uint *)(iVar2 + -0xd60) = 0;
  *(uint *)(iVar2 + -0xd64) = *(uint *)(iVar2 + -0xd60);
  *(uint *)(iVar2 + -0xd68) = *(uint *)(iVar2 + -0xd64);
  *(uint *)(iVar2 + -0xd54) = 0;
  *(uint *)(iVar2 + -0xd58) = *(uint *)(iVar2 + -0xd54);
  *(uint *)(iVar2 + -0xd5c) = *(uint *)(iVar2 + -0xd58);
  FUN_00504cb0(iVar2 + -0x1340);
  return iVar2 + -0x1340;
}
