// Name: FUN_00537580
// Address: 00537580
// Address Range: [[00537580, 0053759f]]
// Convention: unknown
// Signature: void FUN_00537580(int param_1)

#include "nocturne.h"

void FUN_00537580(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_005c09f0(*(int *)(param_1 + 0x14));
  *(uint *)(param_1 + 0x14) = 0;
  return;
}
