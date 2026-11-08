// Name: FUN_00589e50
// Address: 00589e50
// Address Range: [[00589e50, 00589efb]]
// Convention: unknown
// Signature: undefined4 FUN_00589e50(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00589e50(int param_1,uint param_2)

{
  int iVar1;
  
  if (((((*(int *)(param_1 + 0x460) == 0) && (*(int *)(param_1 + 0x430) == 0)) &&
       (*(int *)(param_1 + 0x6b8) != 0)) &&
      ((float)_DAT_005ee52a <
       SQRT(*(float *)(param_1 + 0x4b8) * *(float *)(param_1 + 0x4b8) +
            *(float *)(param_1 + 0x4b0) * *(float *)(param_1 + 0x4b0) +
            *(float *)(param_1 + 0x4b4) * *(float *)(param_1 + 0x4b4)))) ||
     (*(int *)(param_1 + 0x460) != 0)) {
    return 0;
  }
  iVar1 = FUN_0040c840(param_2,"CIcePick");
  if (iVar1 == 0) {
    iVar1 = FUN_0040c840(param_2,"CHero");
    if (iVar1 != 0) {
      return 2;
    }
    if ((*(int *)(param_1 + 0x430) != 0) && (*(int *)(param_1 + 0x430) != 3)) {
      return 0;
    }
  }
  return 3;
}
