// Name: FUN_004f4b30
// Address: 004f4b30
// Address Range: [[004f4b30, 004f4b76]]
// Convention: unknown
// Signature: int FUN_004f4b30(int param_1,uint param_2)

#include "nocturne.h"

int FUN_004f4b30(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_00600fc0);
    FUN_005c0336(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x200) = &PTR_FUN_00602964;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005c0344(param_1);
  return param_1;
}
