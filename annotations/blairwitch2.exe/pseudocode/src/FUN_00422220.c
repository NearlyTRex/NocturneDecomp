// Name: FUN_00422220
// Address: 00422220
// Address Range: [[00422220, 00422268]]
// Convention: unknown
// Signature: int FUN_00422220(int param_1,uint param_2)

#include "nocturne.h"

int FUN_00422220(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005f4040);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_005f4024;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005b7fdc(param_1);
  return param_1;
}
