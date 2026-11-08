// Name: FUN_004085a0
// Address: 004085a0
// Address Range: [[004085a0, 004085bd]]
// Convention: unknown
// Signature: void FUN_004085a0(int param_1)

#include "nocturne.h"

void FUN_004085a0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xd0))(param_1,2);
  return;
}
