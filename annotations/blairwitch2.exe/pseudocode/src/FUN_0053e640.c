// Name: FUN_0053e640
// Address: 0053e640
// Address Range: [[0053e640, 0053e6bf]]
// Convention: unknown
// Signature: undefined4 FUN_0053e640(int param_1)

#include "nocturne.h"

uint FUN_0053e640(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((*(int *)(param_1 + 0x10b70) != 0) || (iVar1 = FUN_0046b960(DAT_0060b280), iVar1 == 0)) &&
      ((iVar1 = FUN_0046b960(DAT_0060b280), iVar1 == 0 ||
       (iVar1 = FUN_0048e340(0x01C38BC0,"heroCanSee"), iVar1 != 0)))) &&
     ((*(int *)(0x01CB6900 + 0x25c) == 0 || (iVar1 = FUN_0040cfc0(0,2), iVar1 == 1)))) {
    uVar2 = FUN_004254b0(param_1);
    return uVar2;
  }
  return 0;
}
