// Name: FUN_004e0170
// Address: 004e0170
// Address Range: [[004e0170, 004e01a4]]
// Convention: unknown
// Signature: void FUN_004e0170(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004e0170(int param_1,int param_2,uint param_3)

{
  param_1 = param_1 + param_2 * 0x608;
  FUN_004df290(param_1);
  FUN_004df5b0(param_1,param_3);
  return;
}
