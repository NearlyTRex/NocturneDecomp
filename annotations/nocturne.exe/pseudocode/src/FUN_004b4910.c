// Name: FUN_004b4910
// Address: 004b4910
// Address Range: [[004b4910, 004b4945]]
// Convention: unknown
// Signature: undefined4 FUN_004b4910(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_004b4910(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(int *)(0x01C775EC + 0x1d0) == 0) && ((*(uint *)(param_1 + 0xbc8c) & 0x7fffffff) == 0)) {
    uVar1 = FUN_0040a390(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}
