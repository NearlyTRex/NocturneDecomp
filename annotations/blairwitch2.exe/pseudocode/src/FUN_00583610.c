// Name: FUN_00583610
// Address: 00583610
// Address Range: [[00583610, 00583644]]
// Convention: unknown
// Signature: void FUN_00583610(int param_1)

#include "nocturne.h"

void FUN_00583610(int param_1)

{
  *(uint *)(param_1 + 0xc2f3c) = 1;
  *(uint *)(param_1 + 0xc3b80) = 1;
  *(uint *)(param_1 + 0xc3b70) = 0x40000000;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"voicubat.wav");
  return;
}
