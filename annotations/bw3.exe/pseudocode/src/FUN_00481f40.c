// Name: FUN_00481f40
// Address: 00481f40
// Address Range: [[00481f40, 00481f8e]]
// Convention: unknown
// Signature: int FUN_00481f40(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00481f40(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005df0a0);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0xc) = &PTR_FUN_005df024;
  FUN_00482010(param_1);
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005a30c4(param_1);
  return param_1;
}
