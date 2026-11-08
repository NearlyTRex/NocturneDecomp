// Name: FUN_0056e4d0
// Address: 0056e4d0
// Address Range: [[0056e4d0, 0056e7ba]]
// Convention: unknown
// Signature: void FUN_0056e4d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056e4d0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  if ((((*(int *)(param_1 + 0x10a74) != 0) && (*(int *)(param_1 + 0x256a4) == 0)) &&
      (iVar1 = FUN_0056e7c0(param_1), iVar1 == 0)) && (*(int *)(param_1 + 0x25640) == 0)) {
    iVar1 = param_1 + 0x2b4;
    fVar2 = (float)FUN_005038a0(iVar1,0);
    fVar3 = (float)FUN_005038a0(iVar1,1);
    if ((float)_DAT_005ebe3d < fVar3 + fVar2) {
      uVar4 = FUN_004cf030(param_1,0);
      switch(uVar4) {
      case 0:
        if (*(int *)(param_1 + 0x25604) != 0) {
          FUN_0047be40(0x01C25594,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",*(int *)(param_1 + 0x25604))
          ;
        }
        break;
      case 1:
        if (*(int *)(param_1 + 0x25604) != 0) {
          FUN_0047be40(0x01C25594,"?eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s" + 1,
                       *(int *)(param_1 + 0x25604));
          *(uint *)(param_1 + 0x10a74) = 0;
          return;
        }
        *(uint *)(param_1 + 0x10a74) = 0;
        return;
      case 2:
      case 3:
        FUN_00503620(param_1 + 0x2b4,0x1c,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        *(uint *)(param_1 + 0x10a74) = 0;
        return;
      case 4:
        FUN_00503620(iVar1,0x1d,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        *(uint *)(param_1 + 0x10a74) = 0;
        return;
      case 5:
        FUN_00503620(iVar1,0x1e,1);
        *(uint *)(param_1 + 0x256a4) = 5;
        *(uint *)(param_1 + 0x10a74) = 0;
        return;
      default:
        FUN_004cf230(param_1);
        *(uint *)(param_1 + 0x10a74) = 0;
        return;
      }
    }
    iVar1 = FUN_0056acd0(param_1);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x10a74) = 0;
      return;
    }
    iVar1 = FUN_00569620(param_1,"!CBodyPart");
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x10a74) = 0;
      return;
    }
    iVar1 = FUN_004cec50(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_004cee90(param_1);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x10a74) = 0;
        return;
      }
      iVar1 = FUN_004cf4e0(param_1);
      if (iVar1 != 0) {
        FUN_00503620(param_1 + 0x2b4,6,1);
        return;
      }
      if ((*(int *)(param_1 + 0x2698) == 0) &&
         (fVar2 = (float)FUN_0042a5a0(param_1,0), (float)_DAT_005ebe45 < fVar2)) {
        iVar1 = FUN_004cf2b0(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0x10a74) = 0;
          FUN_00503620(param_1 + 0x2b4,0x1f,1);
          return;
        }
        iVar1 = FUN_0056a240(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0x10a74) = 0;
          return;
        }
        iVar1 = FUN_0056a780(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0x10a74) = 0;
          return;
        }
        iVar1 = FUN_004cf890(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0x10a74) = 0;
          return;
        }
        iVar1 = FUN_00569620(param_1,"CBodyPart");
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0x10a74) = 0;
          return;
        }
      }
      *(uint *)(param_1 + 0x10a74) = 0;
      return;
    }
  }
  return;
}
