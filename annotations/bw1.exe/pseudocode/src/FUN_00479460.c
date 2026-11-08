// Name: FUN_00479460
// Address: 00479460
// Address Range: [[00479460, 0047949b]]
// Convention: unknown
// Signature: void FUN_00479460(int param_1)

#include "nocturne.h"

void FUN_00479460(int param_1)

{
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_004794a0(param_1);
    return;
  }
  FindClose(*(HANDLE *)(param_1 + 0x110));
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_004794a0(param_1);
  return;
}
