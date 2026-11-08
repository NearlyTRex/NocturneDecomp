// Name: FUN_00414bf0
// Address: 00414bf0
// Address Range: [[00414bf0, 00414c0e]]
// Convention: unknown
// Signature: undefined4 FUN_00414bf0(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_00414bf0(int param_1,int *param_2)

{
  if (*param_2 != 1) {
    return 0;
  }
  param_2[8] = param_1 + 0x2b4;
  return 1;
}
