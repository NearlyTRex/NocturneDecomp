// Name: FUN_004b82d0
// Address: 004b82d0
// Address Range: [[004b82d0, 004b831e]]
// Convention: unknown
// Signature: void FUN_004b82d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004b82d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (0 < iVar1) {
    iVar1 = FUN_00564520(param_1,"?ScatDazzle" + 1);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        *(uint *)(param_1 + 0x2404) = 1;
      }
      FUN_004eece0(param_1,param_2);
      return;
    }
  }
  return;
}
