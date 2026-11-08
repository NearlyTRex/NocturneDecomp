// Name: FUN_004254d0
// Address: 004254d0
// Address Range: [[004254d0, 00425518]]
// Convention: unknown
// Signature: int FUN_004254d0(int param_1,uint param_2)

#include "nocturne.h"

int FUN_004254d0(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005dcf10);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_005dcef4;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005a30c4(param_1);
  return param_1;
}
