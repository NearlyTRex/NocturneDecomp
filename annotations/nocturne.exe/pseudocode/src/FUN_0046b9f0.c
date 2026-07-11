// Name: FUN_0046b9f0
// Address: 0046b9f0
// Address Range: [[0046b9f0, 0046ba13]]
// Convention: unknown
// Signature: undefined4 * FUN_0046b9f0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_0046b9f0(int param_1,uint *param_2)

{
  *param_2 = *(uint *)(param_1 + 0x1c);
  param_2[1] = *(uint *)(param_1 + 0x20);
  param_2[2] = *(uint *)(param_1 + 0x24);
  return param_2;
}
