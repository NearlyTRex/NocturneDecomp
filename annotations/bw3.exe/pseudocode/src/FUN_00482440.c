// Name: FUN_00482440
// Address: 00482440
// Address Range: [[00482440, 0048244e]]
// Convention: unknown
// Signature: undefined4 FUN_00482440(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00482440(int param_1,int param_2)

{
  return *(uint *)(*(int *)(param_1 + 8) + param_2 * 4);
}
