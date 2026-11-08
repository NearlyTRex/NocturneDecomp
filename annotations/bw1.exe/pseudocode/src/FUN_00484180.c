// Name: FUN_00484180
// Address: 00484180
// Address Range: [[00484180, 0048418a]]
// Convention: unknown
// Signature: int FUN_00484180(int param_1)

#include "nocturne.h"

int FUN_00484180(int param_1)

{
  return *(int *)(param_1 + 0x14) >> 0x18;
}
