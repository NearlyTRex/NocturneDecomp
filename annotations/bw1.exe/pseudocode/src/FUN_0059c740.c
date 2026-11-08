// Name: FUN_0059c740
// Address: 0059c740
// Address Range: [[0059c740, 0059c752]]
// Convention: unknown
// Signature: void FUN_0059c740(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

#include "nocturne.h"

void FUN_0059c740(uint *param_1,uint param_2,ushort param_3)

{
  *param_1 = param_2;
  *(ushort *)(param_1 + 1) = param_3;
  return;
}
