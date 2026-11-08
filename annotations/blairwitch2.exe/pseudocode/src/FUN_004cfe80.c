// Name: FUN_004cfe80
// Address: 004cfe80
// Address Range: [[004cfe80, 004cff48]]
// Convention: unknown
// Signature: undefined4 FUN_004cfe80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004cfe80(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      return 1;
    }
    if (((((*(int *)(param_1 + 0x10a68) != 0) || (*(int *)(param_1 + 0x10a6c) != 0)) ||
         (*(int *)(param_1 + 0x10a74) != 0)) ||
        ((((*(int *)(param_1 + 0x10a78) != 0 || (*(int *)(param_1 + 0x10a7c) != 0)) ||
          ((*(int *)(param_1 + 0x10a80) != 0 ||
           ((*(int *)(param_1 + 0x10a84) != 0 || (*(int *)(param_1 + 0x10a88) != 0)))))) ||
         ((float)_DAT_005d9d7c < ABS(*(float *)(param_1 + 0x10a8c)))))) ||
       ((((float)_DAT_005d9d7c < ABS(*(float *)(param_1 + 0x10a90)) ||
         ((float)_DAT_005d9d7c < ABS(*(float *)(param_1 + 0x10a94)))) ||
        (*(int *)(param_1 + 0x2570) == 0)))) {
      return 1;
    }
  }
  return 0;
}
