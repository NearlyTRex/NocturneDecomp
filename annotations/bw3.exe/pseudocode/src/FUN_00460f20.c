// Name: FUN_00460f20
// Address: 00460f20
// Address Range: [[00460f20, 00460f5e]]
// Convention: unknown
// Signature: void FUN_00460f20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00460f20(int param_1,uint param_2,uint param_3,uint param_4)

{
  if (*(int *)(param_1 + 0x110) < 1) {
    return;
  }
  FUN_00460fa0(param_1,param_2,param_3);
  FUN_00461050(param_1,param_3,param_4);
  return;
}
