// Name: FUN_005620c0
// Address: 005620c0
// Address Range: [[005620c0, 005620ff]]
// Convention: unknown
// Signature: undefined4 FUN_005620c0(int param_1)

#include "nocturne.h"

uint FUN_005620c0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0;
  }
  uVar1 = FUN_0040cc00(0x43160000,0x43480000);
  return uVar1;
}
