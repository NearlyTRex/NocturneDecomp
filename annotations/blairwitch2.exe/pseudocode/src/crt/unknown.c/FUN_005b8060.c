// Name: crt_unknown.c_FUN_005b8060
// Address: 005b8060
// Address Range: [[005b8060, 005b8077]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005b8060(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_005b8060(uint param_1,int param_2)

{
  _ungetc(param_1,*(uint *)(param_2 + 8));
  return;
}
