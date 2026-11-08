// Name: FUN_00418720
// Address: 00418720
// Address Range: [[00418720, 00418784]]
// Convention: unknown
// Signature: undefined4 FUN_00418720(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00418720(int param_1,int param_2)

{
  param_1 = param_2 * 0x2c + param_1;
  if ((((*(int *)(param_1 + 0x88) <= _DAT_01c4353c) &&
       (_DAT_01c4353c <= *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x88))) &&
      (*(int *)(param_1 + 0x8c) <= _DAT_01c43540)) &&
     (_DAT_01c43540 <= *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x8c))) {
    return 1;
  }
  return 0;
}
