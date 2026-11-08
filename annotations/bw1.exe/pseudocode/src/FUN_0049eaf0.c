// Name: FUN_0049eaf0
// Address: 0049eaf0
// Address Range: [[0049eaf0, 0049eb2f]]
// Convention: unknown
// Signature: undefined4 FUN_0049eaf0(int param_1)

#include "nocturne.h"

uint FUN_0049eaf0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0;
  }
  uVar1 = FUN_0040cc00(0x43e10000,0x44160000);
  return uVar1;
}
