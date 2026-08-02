// Name: crt_unknown.c_FUN_0056986c
// Address: 0056986c
// Address Range: [[0056986c, 005698ae]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056986c(int param_1)

#include "nocturne.h"

void FUN_0056986c(int param_1)

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
