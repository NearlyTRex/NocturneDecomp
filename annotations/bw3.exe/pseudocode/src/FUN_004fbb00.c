// Name: FUN_004fbb00
// Address: 004fbb00
// Address Range: [[004fbb00, 004fbb43]]
// Convention: unknown
// Signature: int FUN_004fbb00(int param_1,uint param_2)

#include "nocturne.h"

int FUN_004fbb00(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005e2c90);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x50) = &PTR_FUN_005e2c84;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005a30c4(param_1);
  return param_1;
}
