// Name: FUN_00430c40
// Address: 00430c40
// Address Range: [[00430c40, 00430c8d]]
// Convention: unknown
// Signature: void FUN_00430c40(int param_1)

#include "nocturne.h"

void FUN_00430c40(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"glass-1.wav@2.0");
  if (*(char *)(param_1 + 0x24a8) == '\0') {
    *(uint *)(param_1 + 0x70) = 2;
    return;
  }
  FUN_0056ac60(param_1 + 0x158,param_1 + 0x20,param_1 + 0x30,0);
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
