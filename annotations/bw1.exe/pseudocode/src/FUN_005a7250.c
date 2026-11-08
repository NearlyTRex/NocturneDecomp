// Name: FUN_005a7250
// Address: 005a7250
// Address Range: [[005a7250, 005a7284]]
// Convention: unknown
// Signature: void FUN_005a7250(int param_1)

#include "nocturne.h"

void FUN_005a7250(int param_1)

{
  *(uint *)(param_1 + 0xbe79c) = 1;
  *(uint *)(param_1 + 0xbf3e0) = 1;
  *(uint *)(param_1 + 0xbf3d0) = 0x40000000;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"voicubat.wav");
  return;
}
