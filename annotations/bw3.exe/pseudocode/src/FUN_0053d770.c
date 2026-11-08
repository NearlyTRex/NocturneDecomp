// Name: FUN_0053d770
// Address: 0053d770
// Address Range: [[0053d770, 0053d7cd]]
// Convention: unknown
// Signature: undefined4 FUN_0053d770(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0053d770(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x15f6b0) != 0) &&
     (iVar2 = FUN_0040c810(param_2,DAT_007e2cec), iVar2 != 0)) {
    return 1;
  }
  iVar1 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x15f6ac)) {
    do {
      if (param_2 == *(int *)(iVar2 + 0x15f6b4)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x15f6ac));
  }
  return 0;
}
