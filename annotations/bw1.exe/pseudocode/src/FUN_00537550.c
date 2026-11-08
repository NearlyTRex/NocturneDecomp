// Name: FUN_00537550
// Address: 00537550
// Address Range: [[00537550, 0053757f]]
// Convention: unknown
// Signature: void FUN_00537550(int param_1)

#include "nocturne.h"

void FUN_00537550(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x14));
  }
  FUN_005c0336(*(uint *)(param_1 + 0x20));
  FUN_00537520(param_1);
  return;
}
