// Name: crt_unknown.c_FUN_005a7e30
// Address: 005a7e30
// Address Range: [[005a7e30, 005a7e4f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a7e30(undefined4 *param_1,int param_2)

#include "nocturne.h"

void FUN_005a7e30(uint *param_1,int param_2)

{
  _fputc(param_2,(_FILE *)*param_1);
  param_1[4] = param_1[4] + 1;
  return;
}
