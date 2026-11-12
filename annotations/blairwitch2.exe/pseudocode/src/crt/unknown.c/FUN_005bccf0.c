// Name: crt_unknown.c_FUN_005bccf0
// Address: 005bccf0
// Address Range: [[005bccf0, 005bcd0f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bccf0(undefined4 *param_1,int param_2)

#include "nocturne.h"

void FUN_005bccf0(uint *param_1,int param_2)

{
  _fputc(param_2,(_FILE *)*param_1);
  param_1[4] = param_1[4] + 1;
  return;
}
