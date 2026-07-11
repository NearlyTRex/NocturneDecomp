// Name: FUN_00473b80
// Address: 00473b80
// Address Range: [[00473b80, 00473bce]]
// Convention: unknown
// Signature: int FUN_00473b80(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00473b80(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_0059caf0);
    FUN_00564486(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0xc) = &PTR_FUN_0059ca74;
  FUN_00473c50(param_1);
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_00564494(param_1);
  return param_1;
}
