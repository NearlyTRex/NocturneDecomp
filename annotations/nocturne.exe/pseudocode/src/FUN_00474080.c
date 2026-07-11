// Name: FUN_00474080
// Address: 00474080
// Address Range: [[00474080, 0047408e]]
// Convention: unknown
// Signature: undefined4 FUN_00474080(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00474080(int param_1,int param_2)

{
  return *(uint *)(*(int *)(param_1 + 8) + param_2 * 4);
}
