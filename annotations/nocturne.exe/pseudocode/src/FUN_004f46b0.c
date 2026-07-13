// Name: FUN_004f46b0
// Address: 004f46b0
// Address Range: [[004f46b0, 004f46fb]]
// Convention: unknown
// Signature: void FUN_004f46b0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004f46b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0042d240(param_1,0,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    FUN_004f4700(param_1,iVar1,*(uint *)(param_1 + 0x18));
    FUN_005638d0(iVar1);
    if (param_2 != 0) {
      FUN_004f4ab0(param_1);
      return;
    }
  }
  return;
}
