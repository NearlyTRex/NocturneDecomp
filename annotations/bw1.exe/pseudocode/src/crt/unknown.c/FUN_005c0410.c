// Name: crt_unknown.c_FUN_005c0410
// Address: 005c0410
// Address Range: [[005c0410, 005c0427]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c0410(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_005c0410(uint param_1,int param_2)

{
  _ungetc(param_1,*(uint *)(param_2 + 8));
  return;
}
