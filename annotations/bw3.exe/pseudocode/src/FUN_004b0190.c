// Name: FUN_004b0190
// Address: 004b0190
// Address Range: [[004b0190, 004b01ca]]
// Convention: unknown
// Signature: void FUN_004b0190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

void FUN_004b0190(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  FUN_004b0480(param_1);
  *(uint *)(param_1 + 0x4208) = param_7;
  FUN_004af920(param_1,param_2,param_3,param_4,param_5);
  return;
}
