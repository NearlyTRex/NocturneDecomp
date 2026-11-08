// Name: FUN_005418d0
// Address: 005418d0
// Address Range: [[005418d0, 005419dd]]
// Convention: unknown
// Signature: undefined8 FUN_005418d0(int param_1)

#include "nocturne.h"

ulonglong FUN_005418d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_1 + 0x15b428);
  iVar1 = 0;
  iVar7 = param_1;
  if (0 < iVar2) {
    do {
      *(uint *)(iVar7 + 0x15b46c) = 0xffffffff;
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x44;
    } while (iVar1 < *(int *)(param_1 + 0x15b428));
  }
  if (0 < *(int *)(param_1 + 0x15b428)) {
    iVar7 = 0;
    iVar1 = 0;
    do {
      iVar8 = iVar1;
      iVar2 = FUN_005419e0(param_1,iVar1,iVar7);
      iVar1 = iVar1 + 1;
      if (iVar1 < *(int *)(param_1 + 0x15b428)) {
        iVar6 = iVar1 * 0x44 + param_1 + 0x15b42c;
        iVar9 = iVar7;
        do {
          iVar3 = FUN_005419e0(param_1,iVar1,iVar7,iVar8,iVar9);
          if (iVar3 != iVar2) {
            iVar5 = param_1 + 0x15b42c + iVar9;
            iVar4 = FUN_00541470(iVar5,iVar6);
            if ((iVar4 != 0) || (iVar4 = FUN_00541470(iVar6,iVar5), iVar4 != 0)) {
              *(int *)(param_1 + 0x15b46c + iVar3 * 0x44) = iVar2;
            }
          }
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 0x44;
        } while (iVar1 < *(int *)(param_1 + 0x15b428));
      }
      iVar2 = *(int *)(param_1 + 0x15b428);
      iVar7 = iVar7 + 0x44;
      iVar1 = iVar8 + 1;
    } while (iVar1 < iVar2);
  }
  return CONCAT44(iVar2,iVar1);
}
