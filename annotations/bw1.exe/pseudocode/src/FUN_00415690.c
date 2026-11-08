// Name: FUN_00415690
// Address: 00415690
// Address Range: [[00415690, 00415722]]
// Convention: unknown
// Signature: undefined4 FUN_00415690(int param_1)

#include "nocturne.h"

uint FUN_00415690(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1fab0) == 0) {
    if (*(int *)(param_1 + 0x27a8) == 0) {
      uVar2 = FUN_0042f240(param_1);
      return uVar2;
    }
    iVar1 = FUN_00483e60(DAT_00612560);
    if ((iVar1 != 0) && (iVar1 = FUN_004a6c30(0x01C51D80,"heroCanSee"), iVar1 == 0)) {
      return 0;
    }
    if (((*(int *)(param_1 + 0x27a8) != 0) && (*(int *)(0x01CCF390 + 0x25c) != 0)) &&
       (iVar1 = FUN_0040cc60(0,2), iVar1 == 1)) {
      uVar2 = FUN_0042f240(param_1);
      return uVar2;
    }
  }
  return 0;
}
