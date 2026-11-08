// Name: FUN_004a2200
// Address: 004a2200
// Address Range: [[004a2200, 004a226e]]
// Convention: unknown
// Signature: int FUN_004a2200(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004a2200(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f6fc0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14) = &PTR_FUN_005f6ee4;
  FUN_0040d540(param_1 + 0x18);
  iVar1 = FUN_0040d440(param_1 + 0x18,0);
  iVar1 = FUN_004a1e90(iVar1 + -0x18,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
