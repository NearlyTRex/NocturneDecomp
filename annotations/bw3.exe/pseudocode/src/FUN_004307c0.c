// Name: FUN_004307c0
// Address: 004307c0
// Address Range: [[004307c0, 004307f0]]
// Convention: unknown
// Signature: undefined4 FUN_004307c0(int param_1)

#include "nocturne.h"

uint FUN_004307c0(int param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x26fc);
  if (iVar1 == 0) {
    return in_EAX;
  }
  *(uint *)(param_1 + 0x26fc) = 0;
  uVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xfc))(iVar1,param_1);
  return uVar2;
}
