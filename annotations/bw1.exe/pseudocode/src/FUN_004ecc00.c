// Name: FUN_004ecc00
// Address: 004ecc00
// Address Range: [[004ecc00, 004ecc57]]
// Convention: unknown
// Signature: int FUN_004ecc00(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004ecc00(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_00601f80);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_00601ea4;
  iVar1 = FUN_00408730(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
