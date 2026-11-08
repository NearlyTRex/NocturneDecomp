// Name: FUN_005a7be0
// Address: 005a7be0
// Address Range: [[005a7be0, 005a7c11]]
// Convention: unknown
// Signature: void FUN_005a7be0(int param_1)

#include "nocturne.h"

void FUN_005a7be0(int param_1)

{
  uint uVar1;
  
  FUN_005a4870(param_1);
  uVar1 = FUN_00540e80(*(uint *)(param_1 + 0x113b0),"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x11850) = uVar1;
  *(uint *)(param_1 + 0x2618) = uVar1;
  return;
}
