// Name: FUN_0054e1e0
// Address: 0054e1e0
// Address Range: [[0054e1e0, 0054e222]]
// Convention: unknown
// Signature: void FUN_0054e1e0(int param_1)

#include "nocturne.h"

void FUN_0054e1e0(int param_1)

{
  *(uint *)(param_1 + 0xbe168) = 3;
  FUN_004e1960(param_1 + 0x150,"float",0);
  *(uint *)(param_1 + 0xbedc4) = 0;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"voicuhuman.wav");
  return;
}
