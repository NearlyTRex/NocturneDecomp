// Name: FUN_00479ff0
// Address: 00479ff0
// Address Range: [[00479ff0, 0047a099]]
// Convention: unknown
// Signature: int FUN_00479ff0(undefined4 param_1)

#include "nocturne.h"

int FUN_00479ff0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005899d0(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5f5bb4;
  FUN_0044fd70(iVar1 + 0x2b4,"dynamitestick.kfm");
  *(uint *)(iVar1 + 0x6c0) = 0x3f800000;
  *(uint *)(iVar1 + 0x6e0) = 0;
  *(uint *)(iVar1 + 0x6dc) = *(uint *)(iVar1 + 0x6e0);
  *(uint *)(iVar1 + 0x6d8) = *(uint *)(iVar1 + 0x6dc);
  *(uint *)(iVar1 + 0x6d4) = 0xbf800000;
  *(uint *)(iVar1 + 0x434) = 0;
  *(uint *)(iVar1 + 0x438) = 0;
  *(uint *)(iVar1 + 0x43c) = 3;
  *(uint *)(iVar1 + 0x440) = 0;
  *(uint *)(iVar1 + 0x444) = 0x43480000;
  *(uint *)(iVar1 + 0x448) = 0;
  *(uint *)(iVar1 + 0x44c) = 0;
  *(uint *)(iVar1 + 0x6e4) = 0;
  return iVar1;
}
