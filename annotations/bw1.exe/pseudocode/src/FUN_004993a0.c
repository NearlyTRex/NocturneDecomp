// Name: FUN_004993a0
// Address: 004993a0
// Address Range: [[004993a0, 004993ee]]
// Convention: unknown
// Signature: int FUN_004993a0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004993a0(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005ff890);
    FUN_005c0336(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0xc) = &PTR_FUN_005ff814;
  FUN_00499470(param_1);
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005c0344(param_1);
  return param_1;
}
