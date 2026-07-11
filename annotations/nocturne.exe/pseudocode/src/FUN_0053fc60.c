// Name: FUN_0053fc60
// Address: 0053fc60
// Address Range: [[0053fc60, 0053ff48]]
// Convention: unknown
// Signature: void FUN_0053fc60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053fc60(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  if ((((*(int *)(param_1 + 0xbca0) != 0) && (*(int *)(param_1 + 0x1faa0) == 0)) &&
      (iVar1 = FUN_0053ff50(param_1), iVar1 == 0)) && (*(int *)(param_1 + 0x1fa3c) == 0)) {
    iVar1 = param_1 + 0x150;
    fVar2 = (float)FUN_004e18d0(iVar1,0);
    fVar3 = (float)FUN_004e18d0(iVar1,1);
    if ((float)_DAT_00595ea7 < fVar3 + fVar2) {
      uVar4 = FUN_004b5110(param_1);
      switch(uVar4) {
      case 0:
        if (*(int *)(param_1 + 0x1fa04) != 0) {
          FUN_0046fcd0(0x01BCD074,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",
                       *(int *)(param_1 + 0x1fa04));
        }
        break;
      case 1:
        if (*(int *)(param_1 + 0x1fa04) != 0) {
          FUN_0046fcd0(0x01BCD074,"?eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s" + 1,
                       *(int *)(param_1 + 0x1fa04));
          *(uint *)(param_1 + 0xbca0) = 0;
          return;
        }
        *(uint *)(param_1 + 0xbca0) = 0;
        return;
      case 2:
      case 3:
        FUN_004e16b0(param_1 + 0x150,0x1c,1);
        *(uint *)(param_1 + 0x1faa0) = 5;
        *(uint *)(param_1 + 0xbca0) = 0;
        return;
      case 4:
        FUN_004e16b0(iVar1,0x1d,1);
        *(uint *)(param_1 + 0x1faa0) = 5;
        *(uint *)(param_1 + 0xbca0) = 0;
        return;
      case 5:
        FUN_004e16b0(iVar1,0x1e,1);
        *(uint *)(param_1 + 0x1faa0) = 5;
        *(uint *)(param_1 + 0xbca0) = 0;
        return;
      default:
        FUN_004b5270(param_1);
        *(uint *)(param_1 + 0xbca0) = 0;
        return;
      }
    }
    iVar1 = FUN_0053c800(param_1);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xbca0) = 0;
      return;
    }
    iVar1 = FUN_0053b630(param_1,"!CBodyPart");
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xbca0) = 0;
      return;
    }
    iVar1 = FUN_004b4e90(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_004b4fe0(param_1);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0xbca0) = 0;
        return;
      }
      iVar1 = FUN_004b54c0(param_1);
      if (iVar1 != 0) {
        FUN_004e16b0(param_1 + 0x150,6,1);
        return;
      }
      if ((*(int *)(param_1 + 0x24f0) == 0) &&
         (fVar2 = (float)FUN_0042a9d0(param_1,0), (float)_DAT_00595eaf < fVar2)) {
        iVar1 = FUN_004b52f0(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0xbca0) = 0;
          FUN_004e16b0(param_1 + 0x150,0x1f,1);
          return;
        }
        iVar1 = FUN_0053bf90(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0xbca0) = 0;
          return;
        }
        iVar1 = FUN_0053c3b0(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0xbca0) = 0;
          return;
        }
        iVar1 = FUN_004b5750(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0xbca0) = 0;
          return;
        }
        iVar1 = FUN_0053b630(param_1,"CBodyPart");
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0xbca0) = 0;
          return;
        }
      }
      *(uint *)(param_1 + 0xbca0) = 0;
      return;
    }
  }
  return;
}
