// Name: FUN_00514350
// Address: 00514350
// Address Range: [[00514350, 005143a8]]
// Convention: unknown
// Signature: int FUN_00514350(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00514350(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005e3440);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x194) = &PTR_FUN_005e3424;
  FUN_00514650(param_1);
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005a30c4(param_1);
  return param_1;
}
