// Name: FUN_005230c0
// Address: 005230c0
// Address Range: [[005230c0, 005230f4]]
// Convention: unknown
// Signature: void FUN_005230c0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005230c0(int param_1,int param_2,uint param_3)

{
  param_1 = param_1 + param_2 * 0x608;
  FUN_00522170(param_1);
  FUN_00522490(param_1,param_3);
  return;
}
