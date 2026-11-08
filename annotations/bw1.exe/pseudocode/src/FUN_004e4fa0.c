// Name: FUN_004e4fa0
// Address: 004e4fa0
// Address Range: [[004e4fa0, 004e5021]]
// Convention: unknown
// Signature: void FUN_004e4fa0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004e4fa0(int param_1,uint param_2)

{
  FUN_005c04b0(param_2,"%f,%f,%f\n",param_1 + 4,param_1 + 8,param_1 + 0xc);
  FUN_005c04b0(param_2,"%d,%d,%d\n",param_1 + 0x10,param_1 + 0x14,param_1);
  FUN_005c04b0(param_2,"%f,%f,%f\n",param_1 + 0x18,param_1 + 0x20,param_1 + 0x1c);
  FUN_005c04b0(param_2,"%d,%d,%d,%d,%d,%d,%d\n",param_1 + 0x28,param_1 + 0x2c,param_1 + 0x30,
               param_1 + 0x34,param_1 + 0x38,param_1 + 0x3c,param_1 + 0x40);
  return;
}
