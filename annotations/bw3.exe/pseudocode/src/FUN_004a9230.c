// Name: FUN_004a9230
// Address: 004a9230
// Address Range: [[004a9230, 004a9266]]
// Convention: unknown
// Signature: void FUN_004a9230(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004a9230(int param_1,uint param_2)

{
  FUN_004a9830(param_1);
  FUN_004a8d00(*(int *)(param_1 + 0x10) * 0x144 + *(int *)(param_1 + 0x3c),param_2);
  return;
}
