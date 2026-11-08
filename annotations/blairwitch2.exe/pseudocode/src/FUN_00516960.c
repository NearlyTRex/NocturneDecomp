// Name: FUN_00516960
// Address: 00516960
// Address Range: [[00516960, 005169ab]]
// Convention: unknown
// Signature: void FUN_00516960(int param_1,int param_2)

#include "nocturne.h"

void FUN_00516960(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0042c520(param_1,0,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c));
  if (iVar1 != 0) {
    FUN_005169b0(param_1,iVar1,*(uint *)(param_1 + 0x18));
    FUN_005b86a0(iVar1);
    if (param_2 != 0) {
      FUN_00516d60(param_1);
      return;
    }
  }
  return;
}
