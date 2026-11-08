// Name: FUN_0040ec40
// Address: 0040ec40
// Address Range: [[0040ec40, 0040ec83]]
// Convention: unknown
// Signature: void FUN_0040ec40(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040ec40(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return;
  }
  FUN_00430d90(param_1,0,0xbf800000,1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"armour.wav");
  FUN_004a0f00(param_1,param_2);
  return;
}
