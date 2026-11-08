// Name: FUN_005a6b30
// Address: 005a6b30
// Address Range: [[005a6b30, 005a6b87]]
// Convention: unknown
// Signature: int FUN_005a6b30(int param_1,byte param_2)

#include "nocturne.h"

int FUN_005a6b30(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_006000a0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x2b0) = &PTR_LAB_005ffe84;
  iVar1 = FUN_00589ae0(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
