// Name: FUN_0058e050
// Address: 0058e050
// Address Range: [[0058e050, 0058e0b0]]
// Convention: unknown
// Signature: int FUN_0058e050(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0058e050(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005fe290);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x6a44) = &PTR_FUN_005fe274;
  FUN_0058e640(param_1);
  iVar1 = FUN_00510cc0(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
