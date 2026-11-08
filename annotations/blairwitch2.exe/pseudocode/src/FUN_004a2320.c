// Name: FUN_004a2320
// Address: 004a2320
// Address Range: [[004a2320, 004a2374]]
// Convention: unknown
// Signature: int FUN_004a2320(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004a2320(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f6fe0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14) = &PTR_FUN_005f6ef4;
  iVar1 = FUN_004a2200(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
