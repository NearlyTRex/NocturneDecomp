// Name: FUN_00481240
// Address: 00481240
// Address Range: [[00481240, 0048124e]]
// Convention: unknown
// Signature: undefined4 FUN_00481240(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00481240(int param_1,int param_2)

{
  return *(uint *)(*(int *)(param_1 + 8) + param_2 * 4);
}
