// Name: FUN_0054aae0
// Address: 0054aae0
// Address Range: [[0054aae0, 0054ab05]]
// Convention: unknown
// Signature: undefined4 * FUN_0054aae0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_0054aae0(int param_1,uint *param_2)

{
  *param_2 = *(uint *)(param_1 + 0x858);
  param_2[1] = *(uint *)(param_1 + 0x85c);
  param_2[2] = *(uint *)(param_1 + 0x860);
  return param_2;
}
