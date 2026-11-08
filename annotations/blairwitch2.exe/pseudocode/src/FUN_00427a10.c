// Name: FUN_00427a10
// Address: 00427a10
// Address Range: [[00427a10, 00427a40]]
// Convention: unknown
// Signature: undefined4 FUN_00427a10(int param_1)

#include "nocturne.h"

uint FUN_00427a10(int param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x276c);
  if (iVar1 == 0) {
    return in_EAX;
  }
  *(uint *)(param_1 + 0x276c) = 0;
  uVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x104))(iVar1,param_1);
  return uVar2;
}
