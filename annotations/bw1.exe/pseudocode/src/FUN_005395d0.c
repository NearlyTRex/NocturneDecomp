// Name: FUN_005395d0
// Address: 005395d0
// Address Range: [[005395d0, 0053965c]]
// Convention: unknown
// Signature: void FUN_005395d0(int param_1)

#include "nocturne.h"

void FUN_005395d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00408850(param_1);
  if (*(char *)(param_1 + 0x2f0) != '\0') {
    FUN_00447db0(param_1 + 0x310,param_1 + 0x2f0);
    *(uint *)(param_1 + 0x318) = 0;
  }
  FUN_00539660(param_1);
  FUN_004688e0(param_1 + 0x158);
  iVar2 = param_1;
  do {
    while (iVar1 = *(int *)(iVar2 + 0x51c), iVar1 != 0) {
      *(uint *)(iVar2 + 0x51c) = 0;
      FUN_0053adb0(param_1,iVar1);
      iVar2 = iVar2 + 0x34;
      if (iVar2 == param_1 + 0x208) {
        return;
      }
    }
    iVar2 = iVar2 + 0x34;
  } while (iVar2 != param_1 + 0x208);
  return;
}
