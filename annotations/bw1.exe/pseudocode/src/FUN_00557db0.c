// Name: FUN_00557db0
// Address: 00557db0
// Address Range: [[00557db0, 00557e0d]]
// Convention: unknown
// Signature: undefined4 FUN_00557db0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00557db0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x15f6b0) != 0) &&
     (iVar2 = FUN_0040c5d0(param_2,DAT_007c637c), iVar2 != 0)) {
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
