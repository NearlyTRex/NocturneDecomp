// Name: FUN_004db8e0
// Address: 004db8e0
// Address Range: [[004db8e0, 004db9c4]]
// Convention: unknown
// Signature: int FUN_004db8e0(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_004db8e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00436710(PTR_DAT_00609ed0,"Deleting: %s\n",param_2);
  iVar1 = *(int *)(param_1 + 0x468) * 4 + param_1;
  if (param_2 == *(int *)(iVar1 + 0x610)) {
    *(uint *)(iVar1 + 0x610) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x468) * 4 + param_1;
  if (param_2 == *(int *)(iVar1 + 0x5fc)) {
    *(uint *)(iVar1 + 0x5fc) = 0;
  }
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = iVar3 * 4;
      if (param_2 == *(int *)(iVar2 + 0x14)) {
        iVar2 = *(int *)(param_1 + 0x10) + -1;
        *(int *)(param_1 + 0x10) = iVar2;
        iVar2 = FUN_005ba1f0(param_1 + 0x14 + iVar1,iVar1 + 4 + param_1 + 0x14,(iVar2 - iVar3) * 4);
        if (iVar3 < *(int *)(param_1 + 0x10)) {
          iVar2 = iVar1 + param_1;
          do {
            *(uint *)(iVar2 + 0x46c) = *(uint *)(iVar2 + 0x470);
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar3 < *(int *)(param_1 + 0x10));
        }
        if (param_3 == 0) {
          return iVar2;
        }
        iVar1 = FUN_00408730(param_2);
        return iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar2 + 4;
      iVar2 = iVar1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return iVar1;
}
