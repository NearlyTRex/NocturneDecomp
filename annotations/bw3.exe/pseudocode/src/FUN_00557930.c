// Name: FUN_00557930
// Address: 00557930
// Address Range: [[00557930, 0055794f]]
// Convention: unknown
// Signature: void FUN_00557930(int param_1,int param_2)

#include "nocturne.h"

void FUN_00557930(int param_1,int param_2)

{
  for (; 0 < param_2; param_2 = param_2 + -1) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x80;
    param_1 = param_1 + 2;
  }
  return;
}
