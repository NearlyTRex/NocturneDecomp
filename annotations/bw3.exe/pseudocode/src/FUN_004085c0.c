// Name: FUN_004085c0
// Address: 004085c0
// Address Range: [[004085c0, 004085f2]]
// Convention: unknown
// Signature: void FUN_004085c0(undefined4 *param_1)

#include "nocturne.h"

void FUN_004085c0(uint *param_1)

{
  param_1[2] = 0;
  param_1[1] = param_1[2];
  *param_1 = param_1[1];
  param_1[5] = 0;
  param_1[4] = param_1[5];
  param_1[3] = param_1[4];
  param_1[6] = 0x1f;
  return;
}
