// Name: FUN_005bb87c
// Address: 005bb87c
// Address Range: [[005bb87c, 005bb8be]]
// Convention: unknown
// Signature: void FUN_005bb87c(int param_1)

#include "nocturne.h"

void FUN_005bb87c(int param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x1e) & 8) == 0) && (*(char *)(param_1 + 0x16) == '0')) {
    iVar1 = (((((*(int *)(param_1 + 4) - *(int *)(param_1 + 0x20)) - *(int *)(param_1 + 0x24)) -
              *(int *)(param_1 + 0x28)) - *(int *)(param_1 + 0x2c)) - *(int *)(param_1 + 0x30)) -
            *(int *)(param_1 + 0x34);
    if (0 < iVar1) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar1;
    }
  }
  return;
}
