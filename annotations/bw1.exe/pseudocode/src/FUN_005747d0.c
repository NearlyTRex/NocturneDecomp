// Name: FUN_005747d0
// Address: 005747d0
// Address Range: [[005747d0, 005747ef]]
// Convention: unknown
// Signature: void FUN_005747d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005747d0(int param_1,int param_2)

{
  for (; 0 < param_2; param_2 = param_2 + -1) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x80;
    param_1 = param_1 + 2;
  }
  return;
}
