// Name: crt_unknown.c_FUN_0056adf0
// Address: 0056adf0
// Address Range: [[0056adf0, 0056ae0f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056adf0(undefined4 *param_1,int param_2)

#include "nocturne.h"

void FUN_0056adf0(uint *param_1,int param_2)

{
  _fputc(param_2,(_FILE *)*param_1);
  param_1[4] = param_1[4] + 1;
  return;
}
