// Name: FUN_005141f0
// Address: 005141f0
// Address Range: [[005141f0, 005142fd]]
// Convention: unknown
// Signature: undefined8 FUN_005141f0(int param_1)

#include "nocturne.h"

ulonglong FUN_005141f0(int param_1)

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
  
  iVar2 = *(int *)(param_1 + 0x15b028);
  iVar1 = 0;
  iVar7 = param_1;
  if (0 < iVar2) {
    do {
      *(uint *)(iVar7 + 0x15b06c) = 0xffffffff;
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x44;
    } while (iVar1 < *(int *)(param_1 + 0x15b028));
  }
  if (0 < *(int *)(param_1 + 0x15b028)) {
    iVar7 = 0;
    iVar1 = 0;
    do {
      iVar8 = iVar1;
      iVar2 = FUN_00514300(param_1,iVar1,iVar7);
      iVar1 = iVar1 + 1;
      if (iVar1 < *(int *)(param_1 + 0x15b028)) {
        iVar6 = iVar1 * 0x44 + param_1 + 0x15b02c;
        iVar9 = iVar7;
        do {
          iVar3 = FUN_00514300(param_1,iVar1,iVar7,iVar8,iVar9);
          if (iVar3 != iVar2) {
            iVar5 = param_1 + 0x15b02c + iVar9;
            iVar4 = FUN_00513e80(iVar5,iVar6);
            if ((iVar4 != 0) || (iVar4 = FUN_00513e80(iVar6,iVar5), iVar4 != 0)) {
              *(int *)(param_1 + 0x15b06c + iVar3 * 0x44) = iVar2;
            }
          }
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 0x44;
        } while (iVar1 < *(int *)(param_1 + 0x15b028));
      }
      iVar2 = *(int *)(param_1 + 0x15b028);
      iVar7 = iVar7 + 0x44;
      iVar1 = iVar8 + 1;
    } while (iVar1 < iVar2);
  }
  return CONCAT44(iVar2,iVar1);
}
