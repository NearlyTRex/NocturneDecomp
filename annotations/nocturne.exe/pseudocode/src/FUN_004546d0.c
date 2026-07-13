// Name: FUN_004546d0
// Address: 004546d0
// Address Range: [[004546d0, 00454727]]
// Convention: unknown
// Signature: void FUN_004546d0(int param_1)

#include "nocturne.h"

void FUN_004546d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0051dcd0(param_1 + 0x150);
  uVar1 = FUN_0051e0a0(param_1 + 0x150);
  uVar2 = FUN_005179d0(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xbd24) = uVar2;
  uVar1 = FUN_005179d0(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xbd28) = uVar1;
  FUN_004796b0(param_1);
  return;
}
