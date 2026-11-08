// Name: FUN_004321a0
// Address: 004321a0
// Address Range: [[004321a0, 004321e1]]
// Convention: unknown
// Signature: void FUN_004321a0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004321a0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x273c) = 1;
  *(uint *)(param_1 + 0x2708) = 0xbf800000;
  *(uint *)(param_1 + 0x2704) = param_2;
  *(uint *)(param_1 + 0x270c) = 0x7149f2ca;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x138))(param_1,0xbf800000);
  return;
}
