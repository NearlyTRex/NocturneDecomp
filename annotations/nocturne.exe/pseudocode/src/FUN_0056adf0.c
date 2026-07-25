// Name: FUN_0056adf0
// Address: 0056adf0
// Address Range: [[0056adf0, 0056ae0f]]
// Convention: unknown
// Signature: void FUN_0056adf0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0056adf0(uint *param_1,uint param_2)

{
  _fputc(param_2,*param_1);
  param_1[4] = param_1[4] + 1;
  return;
}
