// Name: FUN_004e5600
// Address: 004e5600
// Address Range: [[004e5600, 004e565b]]
// Convention: unknown
// Signature: void FUN_004e5600(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004e5600(int param_1,uint param_2)

{
  FUN_005c04b0(param_2,"%f,%f,%f\n",param_1 + 4,param_1 + 8,param_1 + 0xc);
  FUN_005c04b0(param_2,"%d,%d\n",param_1,param_1 + 0x10);
  FUN_005c04b0(param_2,"%d,%f,%d,%d,%d\n",param_1 + 0x14,param_1 + 0x18,param_1 + 0x1c,
               param_1 + 0x20,param_1 + 0x24);
  return;
}
