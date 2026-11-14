// Name: crt_unknown.c_FUN_005c0410
// Address: 005c0410
// Address Range: [[005c0410, 005c0427]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c0410(int param_1,int param_2)

#include "nocturne.h"

void FUN_005c0410(int param_1,int param_2)

{
  _ungetc(param_1,*(_FILE **)(param_2 + 8));
  return;
}
