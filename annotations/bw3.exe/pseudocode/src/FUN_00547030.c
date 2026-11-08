// Name: FUN_00547030
// Address: 00547030
// Address Range: [[00547030, 005470ad]]
// Convention: unknown
// Signature: int FUN_00547030(undefined4 param_1)

#include "nocturne.h"

int FUN_00547030(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ad70(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e44f4;
  FUN_004625f0(iVar1 + 0x158,0x5d153e);
  *(uint *)(iVar1 + 0x2e0) = 7;
  *(uint *)(iVar1 + 0x56c) = 0xffffffff;
  *(uint *)(iVar1 + 0x568) = 0;
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e4) = 0;
  *(uint *)(iVar1 + 0x2e8) = 0x40a00000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  return iVar1;
}
