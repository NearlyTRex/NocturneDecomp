// Name: FUN_004f8d00
// Address: 004f8d00
// Address Range: [[004f8d00, 004f8dba]]
// Convention: unknown
// Signature: void FUN_004f8d00(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_004f8d00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == *(int *)(param_1 + 0x338)) {
    *(uint *)(param_1 + 0x338) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x33c)) {
    *(uint *)(param_1 + 0x33c) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x45c)) {
    *(uint *)(param_1 + 0x45c) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x460)) {
    *(uint *)(param_1 + 0x460) = 0;
  }
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      if (param_2 == iVar1) {
        iVar3 = *(int *)(param_1 + 0x10) + -1;
        *(int *)(param_1 + 0x10) = iVar3;
        FUN_005c25d0(param_1 + 0x14 + iVar2 * 4,iVar2 * 4 + 4 + param_1 + 0x14,(iVar3 - iVar2) * 4);
        if (param_3 == 0) {
          return;
        }
        FUN_00408560(iVar1);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  return;
}
