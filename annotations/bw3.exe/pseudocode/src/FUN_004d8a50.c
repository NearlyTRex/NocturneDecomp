// Name: FUN_004d8a50
// Address: 004d8a50
// Address Range: [[004d8a50, 004d8a96]]
// Convention: unknown
// Signature: int FUN_004d8a50(int param_1,uint param_2)

#include "nocturne.h"

int FUN_004d8a50(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005a308f(param_1,&DAT_005e0730);
    FUN_005a30b6(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x200) = &PTR_FUN_005e2074;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005a30c4(param_1);
  return param_1;
}
