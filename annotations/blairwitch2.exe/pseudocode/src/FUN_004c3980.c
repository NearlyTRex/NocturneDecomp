// Name: FUN_004c3980
// Address: 004c3980
// Address Range: [[004c3980, 004c39a7]]
// Convention: unknown
// Signature: void FUN_004c3980(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004c3980(int param_1,uint param_2)

{
  if ((*(int *)(param_1 + 0x10b18) == 0) && (*(int *)(param_1 + 0x10b14) < 1)) {
    FUN_00488940(param_1,param_2);
    return;
  }
  return;
}
