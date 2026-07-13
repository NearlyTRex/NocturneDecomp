// Name: FUN_00415230
// Address: 00415230
// Address Range: [[00415230, 0041524e]]
// Convention: unknown
// Signature: undefined4 FUN_00415230(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_00415230(int param_1,int *param_2)

{
  if (*param_2 != 1) {
    return 0;
  }
  param_2[8] = param_1 + 0x150;
  return 1;
}
