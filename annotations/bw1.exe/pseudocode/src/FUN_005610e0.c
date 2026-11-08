// Name: FUN_005610e0
// Address: 005610e0
// Address Range: [[005610e0, 0056111d]]
// Convention: unknown
// Signature: void FUN_005610e0(int param_1)

#include "nocturne.h"

void FUN_005610e0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005735a0(*(uint *)(param_1 + 0xc27c));
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"scorp-emerge.wav @ 2");
  *(uint *)(param_1 + 0xc284) = 0x41000000;
  *(uint *)(param_1 + 0xc27c) = uVar2;
  return;
}
