// Name: FUN_00414330
// Address: 00414330
// Address Range: [[00414330, 00414394]]
// Convention: unknown
// Signature: undefined4 FUN_00414330(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00414330(int param_1,int param_2)

{
  param_1 = param_2 * 0x2c + param_1;
  if ((((*(int *)(param_1 + 0x88) <= _DAT_01c5fadc) &&
       (_DAT_01c5fadc <= *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x88))) &&
      (*(int *)(param_1 + 0x8c) <= _DAT_01c5fae0)) &&
     (_DAT_01c5fae0 <= *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x8c))) {
    return 1;
  }
  return 0;
}
