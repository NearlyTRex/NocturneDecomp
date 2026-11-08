// Name: FUN_004ce090
// Address: 004ce090
// Address Range: [[004ce090, 004ce0ef]]
// Convention: unknown
// Signature: void FUN_004ce090(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004ce090(int param_1,uint param_2)

{
  FUN_005a3230(param_2,"%f,%f,%f,%d\n",param_1 + 4,param_1 + 8,param_1 + 0xc,param_1 + 0x14);
  FUN_005a3230(param_2,"%d,%d\n",param_1,param_1 + 0x10);
  FUN_005a3230(param_2,"%d,%f,%d,%d,%d\n",param_1 + 0x18,param_1 + 0x1c,param_1 + 0x20,
               param_1 + 0x24,param_1 + 0x28);
  return;
}
