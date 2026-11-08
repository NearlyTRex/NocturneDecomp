// Name: FUN_0057b440
// Address: 0057b440
// Address Range: [[0057b440, 0057b4eb]]
// Convention: unknown
// Signature: undefined4 FUN_0057b440(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057b440(int param_1,uint param_2)

{
  int iVar1;
  
  if (((((*(int *)(param_1 + 0x304) == 0) && (*(int *)(param_1 + 0x2d4) == 0)) &&
       (*(int *)(param_1 + 0x55c) != 0)) &&
      ((float)_DAT_005d78cb <
       SQRT(*(float *)(param_1 + 0x35c) * *(float *)(param_1 + 0x35c) +
            *(float *)(param_1 + 0x354) * *(float *)(param_1 + 0x354) +
            *(float *)(param_1 + 0x358) * *(float *)(param_1 + 0x358)))) ||
     (*(int *)(param_1 + 0x304) != 0)) {
    return 0;
  }
  iVar1 = FUN_0040c790(param_2,"CIcePick");
  if (iVar1 == 0) {
    iVar1 = FUN_0040c790(param_2,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
    if ((*(int *)(param_1 + 0x2d4) != 0) && (*(int *)(param_1 + 0x2d4) != 3)) {
      return 0;
    }
  }
  return 3;
}
