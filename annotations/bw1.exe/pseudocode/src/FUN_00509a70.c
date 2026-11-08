// Name: FUN_00509a70
// Address: 00509a70
// Address Range: [[00509a70, 00509a8c]]
// Convention: unknown
// Signature: void FUN_00509a70(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00509a70(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x590) = 0;
  FUN_005add50(param_1,param_2);
  return;
}
