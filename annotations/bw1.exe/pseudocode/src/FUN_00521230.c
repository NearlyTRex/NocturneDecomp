// Name: FUN_00521230
// Address: 00521230
// Address Range: [[00521230, 00521277]]
// Convention: unknown
// Signature: void FUN_00521230(int param_1)

#include "nocturne.h"

void FUN_00521230(int param_1)

{
  *(uint *)(param_1 + 0x22358) = 0;
  *(uint *)(param_1 + 0x22354) = 1;
  if (*(int *)(param_1 + 0x22350) != 0) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"moloch-morph-todemon.wav");
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"moloch-morph-tohuman.wav");
  return;
}
