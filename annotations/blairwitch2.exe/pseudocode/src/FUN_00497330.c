// Name: FUN_00497330
// Address: 00497330
// Address Range: [[00497330, 00497347]]
// Convention: unknown
// Signature: void FUN_00497330(int param_1)

#include "nocturne.h"

void FUN_00497330(int param_1)

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
