// Name: FUN_00415660
// Address: 00415660
// Address Range: [[00415660, 00415689]]
// Convention: unknown
// Signature: void FUN_00415660(int param_1,int param_2)

#include "nocturne.h"

void FUN_00415660(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1fab0) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x24fc) = 1;
    }
    FUN_0042f320(param_1,param_2);
  }
  return;
}
