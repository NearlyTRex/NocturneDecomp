// Name: FUN_004d4090
// Address: 004d4090
// Address Range: [[004d4090, 004d4158]]
// Convention: unknown
// Signature: undefined4 FUN_004d4090(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d4090(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      return 1;
    }
    if (((((*(int *)(param_1 + 0xcdd4) != 0) || (*(int *)(param_1 + 0xcdd8) != 0)) ||
         (*(int *)(param_1 + 0xcde0) != 0)) ||
        ((((*(int *)(param_1 + 0xcde8) != 0 || (*(int *)(param_1 + 0xcdec) != 0)) ||
          ((*(int *)(param_1 + 0xcdf0) != 0 ||
           ((*(int *)(param_1 + 0xcdf4) != 0 || (*(int *)(param_1 + 0xcdf8) != 0)))))) ||
         ((float)_DAT_005c4e7d < ABS(*(float *)(param_1 + 0xcdfc)))))) ||
       ((((float)_DAT_005c4e7d < ABS(*(float *)(param_1 + 0xce00)) ||
         ((float)_DAT_005c4e7d < ABS(*(float *)(param_1 + 0xce04)))) ||
        (*(int *)(param_1 + 0x2500) == 0)))) {
      return 1;
    }
  }
  return 0;
}
