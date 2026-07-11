// Name: FUN_0049a890
// Address: 0049a890
// Address Range: [[0049a890, 0049a89f]]
// Convention: unknown
// Signature: void FUN_0049a890(int param_1)

#include "nocturne.h"

void FUN_0049a890(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00558a30();
  *(uint *)(param_1 + 0x25c) = uVar1;
  return;
}
