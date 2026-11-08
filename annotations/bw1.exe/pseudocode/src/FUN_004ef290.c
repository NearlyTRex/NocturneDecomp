// Name: FUN_004ef290
// Address: 004ef290
// Address Range: [[004ef290, 004ef2f2]]
// Convention: unknown
// Signature: undefined4 FUN_004ef290(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_004ef290(int param_1,uint param_2,int param_3)

{
  *(int *)(param_1 + 0x2700) = param_3;
  *(uint *)(param_1 + 0x26fc) = param_2;
  if (param_3 == 0) {
    FUN_005247c0(param_1 + 0x158,4,1);
    FUN_004a1b70(0x01C51D80,param_1 + 0x1fc6c);
  }
  *(uint *)(param_1 + 0x1fe9c) = 0x40400000;
  *(uint *)(param_1 + 0x1fe98) = param_2;
  return 1;
}
