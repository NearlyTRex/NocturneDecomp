// Name: FUN_0054aca0
// Address: 0054aca0
// Address Range: [[0054aca0, 0054acb9]]
// Convention: unknown
// Signature: void FUN_0054aca0(int param_1,int param_2)

#include "nocturne.h"

void FUN_0054aca0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 4)) {
    return;
  }
  *(uint *)(param_1 + 4) = 0;
  *(byte *)(param_1 + 0x50) = 0;
  return;
}
