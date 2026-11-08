// Name: FUN_00449d30
// Address: 00449d30
// Address Range: [[00449d30, 00449d8d]]
// Convention: unknown
// Signature: int FUN_00449d30(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00449d30(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f5090);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_005f5074;
  FUN_00449e70(param_1);
  iVar1 = FUN_0043b460(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
