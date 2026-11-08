// Name: FUN_004150f0
// Address: 004150f0
// Address Range: [[004150f0, 00415184]]
// Convention: unknown
// Signature: int FUN_004150f0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004150f0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_005fc720);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = FUN_00522fc0(param_1 + 0xc3ec,0);
  iVar1 = FUN_0040ee30(iVar1 + -0x8e10,0);
  iVar1 = FUN_00441ca0(iVar1 + -0x93c,0);
  iVar1 = FUN_005673f0(iVar1 + -0x2b48,0);
  iVar1 = FUN_00408730(iVar1 + -0x158,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
