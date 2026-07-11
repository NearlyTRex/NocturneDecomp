// Name: FUN_004e1150
// Address: 004e1150
// Address Range: [[004e1150, 004e1193]]
// Convention: unknown
// Signature: int FUN_004e1150(int param_1,uint param_2)

#include "nocturne.h"

int FUN_004e1150(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_005a0d30);
    FUN_00564486(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x50) = &PTR_FUN_005a0d24;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_00564494(param_1);
  return param_1;
}
