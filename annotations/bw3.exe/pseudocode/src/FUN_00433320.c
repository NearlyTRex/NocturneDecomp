// Name: FUN_00433320
// Address: 00433320
// Address Range: [[00433320, 00433340]]
// Convention: unknown
// Signature: void FUN_00433320(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00433320(int param_1,uint param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x33a0) != 0) {
    return;
  }
  FUN_00409c40(param_1,param_2,param_3);
  return;
}
