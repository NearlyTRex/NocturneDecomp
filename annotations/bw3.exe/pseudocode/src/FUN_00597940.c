// Name: FUN_00597940
// Address: 00597940
// Address Range: [[00597940, 0059796c]]
// Convention: unknown
// Signature: void FUN_00597940(int param_1)

#include "nocturne.h"

void FUN_00597940(int param_1)

{
  if (*(int *)(param_1 + 0x33a0) < 1) {
    FUN_0042e220(param_1);
    return;
  }
  FUN_0042f6f0(param_1);
  FUN_0042e220(param_1);
  return;
}
