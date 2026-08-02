// Name: crt_unknown.c_FUN_0056e56c
// Address: 0056e56c
// Address Range: [[0056e56c, 0056e5a8]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0056e56c(int param_1)

#include "nocturne.h"

int FUN_0056e56c(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_00565c50(1,0x000000F4);
    uVar1 = 0x000000F4;
    if (param_1 != 0) {
      *(byte *)(param_1 + 0x52) = 1;
      *(uint *)(param_1 + 0xf0) = uVar1;
    }
  }
  FUN_005713a0(param_1);
  return param_1;
}
