// Name: FUN_00487690
// Address: 00487690
// Address Range: [[00487690, 004876cf]]
// Convention: unknown
// Signature: undefined4 FUN_00487690(int param_1)

#include "nocturne.h"

uint FUN_00487690(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0;
  }
  uVar1 = FUN_0040ce40(0x43e10000,0x44160000);
  return uVar1;
}
