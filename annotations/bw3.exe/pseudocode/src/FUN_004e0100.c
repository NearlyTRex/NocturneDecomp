// Name: FUN_004e0100
// Address: 004e0100
// Address Range: [[004e0100, 004e01c1]]
// Convention: unknown
// Signature: int FUN_004e0100(undefined4 param_1)

#include "nocturne.h"

int FUN_004e0100(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  FUN_00495b40(iVar1 + 0x2c8);
  *(uint *)(iVar1 + -4) = 0x5e23d4;
  FUN_004625f0(iVar1,"lightswitch.kfm");
  *(uint *)(iVar1 + 0x180) = 0;
  *(byte *)(iVar1 + 0x188) = 0;
  *(byte *)(iVar1 + 0x1ec) = 0;
  *(byte *)(iVar1 + 0x250) = 0;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x2b4) = 1;
  *(uint *)(iVar1 + 0x2b8) = 0;
  *(uint *)(iVar1 + 700) = 0x17;
  *(uint *)(iVar1 + 0x2c0) = 0;
  *(uint *)(iVar1 + 0x2c4) = 0;
  *(uint *)(iVar1 + 0x6b4) = 2;
  *(uint *)(iVar1 + 0x6b8) = 1;
  return iVar1 + -0x158;
}
