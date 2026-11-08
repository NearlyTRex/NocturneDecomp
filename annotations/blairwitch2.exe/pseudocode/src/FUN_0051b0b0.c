// Name: FUN_0051b0b0
// Address: 0051b0b0
// Address Range: [[0051b0b0, 0051b108]]
// Convention: unknown
// Signature: int FUN_0051b0b0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0051b0b0(int param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005fad80);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  *(byte ***)(param_1 + 0x194) = &PTR_FUN_005fad64;
  FUN_0051b370(param_1);
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005b7fdc(param_1);
  return param_1;
}
