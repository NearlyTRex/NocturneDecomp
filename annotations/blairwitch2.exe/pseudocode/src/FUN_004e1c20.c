// Name: FUN_004e1c20
// Address: 004e1c20
// Address Range: [[004e1c20, 004e1ce1]]
// Convention: unknown
// Signature: int FUN_004e1c20(undefined4 param_1)

#include "nocturne.h"

int FUN_004e1c20(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b4);
  FUN_00492350(iVar1 + 0x2c8);
  *(uint *)(iVar1 + -4) = 0x5f94a4;
  FUN_0044fd70(iVar1,"lightswitch.kfm");
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
  return iVar1 + -0x2b4;
}
