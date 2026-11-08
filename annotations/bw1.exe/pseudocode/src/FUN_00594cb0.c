// Name: FUN_00594cb0
// Address: 00594cb0
// Address Range: [[00594cb0, 00594d44]]
// Convention: unknown
// Signature: int FUN_00594cb0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00594cb0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00606860);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = FUN_00533060(param_1 + 0xc1d0,0);
  iVar1 = FUN_0040ee30(iVar1 + -0x8bf4,0);
  iVar1 = FUN_00441ca0(iVar1 + -0x93c,0);
  iVar1 = FUN_005673f0(iVar1 + -0x2b48,0);
  iVar1 = FUN_00408730(iVar1 + -0x158,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
