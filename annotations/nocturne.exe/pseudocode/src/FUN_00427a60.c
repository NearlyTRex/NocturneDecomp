// Name: FUN_00427a60
// Address: 00427a60
// Address Range: [[00427a60, 00427aad]]
// Convention: unknown
// Signature: void FUN_00427a60(int param_1)

#include "nocturne.h"

void FUN_00427a60(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"glass-1.wav@2.0");
  if (*(char *)(param_1 + 0x23b0) == '\0') {
    *(uint *)(param_1 + 0x70) = 2;
    return;
  }
  FUN_0051ed30(param_1 + 0x150,param_1 + 0x20,param_1 + 0x30,0);
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
