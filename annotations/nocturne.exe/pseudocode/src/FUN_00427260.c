// Name: FUN_00427260
// Address: 00427260
// Address Range: [[00427260, 0042728f]]
// Convention: unknown
// Signature: undefined4 FUN_00427260(int param_1)

#include "nocturne.h"

uint FUN_00427260(int param_1)

{
  if ((0 < *(int *)(param_1 + 0x2f08)) && (*(int *)(param_1 + 0x2618) != 0)) {
    FUN_00427290(param_1);
    return *(uint *)(param_1 + 0x2618);
  }
  return *(uint *)(param_1 + 0x2618);
}
