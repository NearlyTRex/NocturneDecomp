// Name: FUN_00583650
// Address: 00583650
// Address Range: [[00583650, 00583692]]
// Convention: unknown
// Signature: void FUN_00583650(int param_1)

#include "nocturne.h"

void FUN_00583650(int param_1)

{
  *(uint *)(param_1 + 0xc2f3c) = 3;
  FUN_00503950(param_1 + 0x2b4,"float",0);
  *(uint *)(param_1 + 0xc3b98) = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"voicuhuman.wav");
  return;
}
