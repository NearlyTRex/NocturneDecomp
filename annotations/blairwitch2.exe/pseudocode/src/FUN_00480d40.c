// Name: FUN_00480d40
// Address: 00480d40
// Address Range: [[00480d40, 00480d8e]]
// Convention: unknown
// Signature: int FUN_00480d40(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00480d40(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005f5d90);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0xc) = &PTR_FUN_005f5d14;
  FUN_00480e10(param_1);
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005b7fdc(param_1);
  return param_1;
}
