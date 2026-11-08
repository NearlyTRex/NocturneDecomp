// Name: FUN_0047b130
// Address: 0047b130
// Address Range: [[0047b130, 0047b19d]]
// Convention: unknown
// Signature: undefined4 FUN_0047b130(int param_1)

#include "nocturne.h"

uint FUN_0047b130(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057b880(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004a3920(0x01C73654,param_1 + 0x20,param_1 + 0x30,(uint *)(param_1 + 0x598),
               *(uint *)(param_1 + 0x594),*(uint *)(param_1 + 0x5a4));
  *(uint *)(param_1 + 0x5a4) = 0;
  *(uint *)(param_1 + 0x594) = 0xbf800000;
  *(uint *)(param_1 + 0x5a0) = 0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x5a0);
  *(uint *)(param_1 + 0x598) = *(uint *)(param_1 + 0x59c);
  return 1;
}
