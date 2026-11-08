// Name: FUN_005747b0
// Address: 005747b0
// Address Range: [[005747b0, 005747cc]]
// Convention: unknown
// Signature: void FUN_005747b0(byte *param_1,int param_2)

#include "nocturne.h"

void FUN_005747b0(byte *param_1,int param_2)

{
  for (; 0 < param_2; param_2 = param_2 + -1) {
    *param_1 = *param_1 ^ 0x80;
    param_1 = param_1 + 1;
  }
  return;
}
