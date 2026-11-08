// Name: FUN_005a7290
// Address: 005a7290
// Address Range: [[005a7290, 005a72d2]]
// Convention: unknown
// Signature: void FUN_005a7290(int param_1)

#include "nocturne.h"

void FUN_005a7290(int param_1)

{
  *(uint *)(param_1 + 0xbe79c) = 3;
  FUN_00524ae0(param_1 + 0x158,"float",0);
  *(uint *)(param_1 + 0xbf3f8) = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"voicuhuman.wav");
  return;
}
