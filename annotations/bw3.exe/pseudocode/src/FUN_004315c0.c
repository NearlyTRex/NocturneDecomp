// Name: FUN_004315c0
// Address: 004315c0
// Address Range: [[004315c0, 0043160d]]
// Convention: unknown
// Signature: void FUN_004315c0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004315c0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x273c) = 1;
  *(uint *)(param_1 + 0x2708) = 0xbf800000;
  *(uint *)(param_1 + 0x2704) = param_2;
  *(uint *)(param_1 + 0x270c) = 0x7149f2ca;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x138))(param_1,0x40000000);
  *(uint *)(param_1 + 0xcdc8) = 1;
  return;
}
