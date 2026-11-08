// Name: FUN_0049ad00
// Address: 0049ad00
// Address Range: [[0049ad00, 0049ad17]]
// Convention: unknown
// Signature: void FUN_0049ad00(int param_1)

#include "nocturne.h"

void FUN_0049ad00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  *(int *)(param_1 + 0x20) = iVar1;
  if (-1 < iVar1) {
    return;
  }
  *(uint *)(param_1 + 0x20) = 0;
  return;
}
