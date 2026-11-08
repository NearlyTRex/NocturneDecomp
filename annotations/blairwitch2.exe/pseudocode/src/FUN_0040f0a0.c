// Name: FUN_0040f0a0
// Address: 0040f0a0
// Address Range: [[0040f0a0, 0040f0e3]]
// Convention: unknown
// Signature: void FUN_0040f0a0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040f0a0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x281c) != 0) {
    return;
  }
  FUN_00427360(param_1,0,0xbf800000,1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"armour.wav");
  FUN_00488890(param_1,param_2);
  return;
}
