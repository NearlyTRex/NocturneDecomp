// Name: FUN_00433e50
// Address: 00433e50
// Address Range: [[00433e50, 00433e70]]
// Convention: unknown
// Signature: void FUN_00433e50(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00433e50(int param_1,uint param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x3120) != 0) {
    return;
  }
  FUN_00409c00(param_1,param_2,param_3);
  return;
}
