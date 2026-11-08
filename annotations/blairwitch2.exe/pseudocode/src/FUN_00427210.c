// Name: FUN_00427210
// Address: 00427210
// Address Range: [[00427210, 0042725d]]
// Convention: unknown
// Signature: void FUN_00427210(int param_1)

#include "nocturne.h"

void FUN_00427210(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"glass-1.wav@2.0");
  if (*(char *)(param_1 + 0x2514) == '\0') {
    *(uint *)(param_1 + 0x70) = 2;
    return;
  }
  FUN_005485c0(param_1 + 0x2b4,param_1 + 0x20,param_1 + 0x30,0);
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
