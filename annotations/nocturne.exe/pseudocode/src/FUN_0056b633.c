// Name: FUN_0056b633
// Address: 0056b633
// Address Range: [[0056b633, 0056b67c]]
// Convention: unknown
// Signature: int FUN_0056b633(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0056b633(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) == 0) {
    *(byte ***)(param_1 + 0x28) = &PTR_FUN_005a4948;
    FUN_00570410(param_1);
    if ((param_2 & 2) == 0) {
      return param_1;
    }
    FUN_00564494(param_1);
  }
  else {
    uVar1 = FUN_0056445f(param_1,&DAT_005a49a0);
    FUN_00564486(uVar1);
  }
  return param_1;
}
