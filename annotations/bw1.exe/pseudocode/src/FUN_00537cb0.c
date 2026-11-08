// Name: FUN_00537cb0
// Address: 00537cb0
// Address Range: [[00537cb0, 00537cfb]]
// Convention: unknown
// Signature: void FUN_00537cb0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00537cb0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0043b2e0(param_1,0,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    FUN_00537d00(param_1,iVar1,*(uint *)(param_1 + 0x18));
    FUN_005c09f0(iVar1);
    if (param_2 != 0) {
      FUN_005380b0(param_1);
      return;
    }
  }
  return;
}
