// Name: FUN_0040dbc0
// Address: 0040dbc0
// Address Range: [[0040dbc0, 0040dc40]]
// Convention: unknown
// Signature: int FUN_0040dbc0(undefined4 param_1)

#include "nocturne.h"

int FUN_0040dbc0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_00468860(iVar2 + 0x158);
  *(byte ***)(iVar2 + -4) = &PTR_FUN_005fb474;
  FUN_00468950(iVar2,"bullet.kfm");
  pcVar3 = &DAT_005d304a;
  pcVar4 = (char *)(iVar2 + 0x17c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x1bc) = 0x14;
  *(uint *)(iVar2 + 0x1c0) = 0;
  return iVar2 + -0x158;
}
