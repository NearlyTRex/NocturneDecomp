// Name: FUN_00415800
// Address: 00415800
// Address Range: [[00415800, 0041588b]]
// Convention: unknown
// Signature: int FUN_00415800(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00415800(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f37f0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte **)(param_1 + 0x2b0) = &DAT_005f36c4;
  FUN_00415890(param_1,0,0);
  iVar1 = FUN_005b1c70(param_1 + 0x10e0,0);
  iVar1 = FUN_00417d10(iVar1 + -0x834,0);
  iVar1 = FUN_00408930(iVar1 + -0x8ac,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
