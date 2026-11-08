// Name: FUN_00591120
// Address: 00591120
// Address Range: [[00591120, 0059140a]]
// Convention: unknown
// Signature: void FUN_00591120(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00591120(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  if ((((*(int *)(param_1 + 0xc1e4) != 0) && (*(int *)(param_1 + 0x1ff5c) == 0)) &&
      (iVar1 = FUN_00591410(param_1), iVar1 == 0)) && (*(int *)(param_1 + 0x1ffac) == 0)) {
    iVar1 = param_1 + 0x158;
    fVar2 = (float)FUN_00524a40(iVar1,0);
    fVar3 = (float)FUN_00524a40(iVar1,1);
    if ((float)_DAT_005f70b1 < fVar3 + fVar2) {
      uVar4 = FUN_004eb3e0(param_1,0);
      switch(uVar4) {
      case 0:
        if (*(int *)(param_1 + 0x1ff74) != 0) {
          FUN_004943a0(0x01C3EB54,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",*(int *)(param_1 + 0x1ff74))
          ;
        }
        break;
      case 1:
        if (*(int *)(param_1 + 0x1ff74) != 0) {
          FUN_004943a0(0x01C3EB54,"?eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s" + 1,
                       *(int *)(param_1 + 0x1ff74));
          *(uint *)(param_1 + 0xc1e4) = 0;
          return;
        }
        *(uint *)(param_1 + 0xc1e4) = 0;
        return;
      case 2:
      case 3:
        FUN_005247c0(param_1 + 0x158,0x27,1);
        *(uint *)(param_1 + 0x1ff5c) = 5;
        *(uint *)(param_1 + 0xc1e4) = 0;
        return;
      case 4:
        FUN_005247c0(iVar1,0x28,1);
        *(uint *)(param_1 + 0x1ff5c) = 5;
        *(uint *)(param_1 + 0xc1e4) = 0;
        return;
      case 5:
        FUN_005247c0(iVar1,0x29,1);
        *(uint *)(param_1 + 0x1ff5c) = 5;
        *(uint *)(param_1 + 0xc1e4) = 0;
        return;
      default:
        FUN_004eb5e0(param_1);
        *(uint *)(param_1 + 0xc1e4) = 0;
        return;
      }
    }
    iVar1 = FUN_0058d910(param_1);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xc1e4) = 0;
      return;
    }
    iVar1 = FUN_0058c260(param_1,"!CBodyPart");
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xc1e4) = 0;
      return;
    }
    iVar1 = FUN_004eb090(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_004eb240(param_1);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0xc1e4) = 0;
        return;
      }
      iVar1 = FUN_004eb890(param_1);
      if (iVar1 != 0) {
        FUN_005247c0(param_1 + 0x158,0x11,1);
        return;
      }
      if ((*(int *)(param_1 + 0x2628) == 0) &&
         (fVar2 = (float)FUN_00434590(param_1,0), (float)_DAT_005f70b9 < fVar2)) {
        iVar1 = FUN_004eb660(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0xc1e4) = 0;
          FUN_005247c0(param_1 + 0x158,0x2c,1);
          return;
        }
        iVar1 = FUN_0058ce80(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0xc1e4) = 0;
          return;
        }
        iVar1 = FUN_0058d3c0(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0xc1e4) = 0;
          return;
        }
        iVar1 = FUN_004ebc40(param_1);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0xc1e4) = 0;
          return;
        }
        iVar1 = FUN_0058c260(param_1,"CBodyPart");
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0xc1e4) = 0;
          return;
        }
      }
      *(uint *)(param_1 + 0xc1e4) = 0;
      return;
    }
  }
  return;
}
