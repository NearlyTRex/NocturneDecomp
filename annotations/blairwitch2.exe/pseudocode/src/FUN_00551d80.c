// Name: FUN_00551d80
// Address: 00551d80
// Address Range: [[00551d80, 00551d9c]]
// Convention: unknown
// Signature: void FUN_00551d80(byte *param_1,int param_2)

#include "nocturne.h"

void FUN_00551d80(byte *param_1,int param_2)

{
  for (; 0 < param_2; param_2 = param_2 + -1) {
    *param_1 = *param_1 ^ 0x80;
    param_1 = param_1 + 1;
  }
  return;
}
