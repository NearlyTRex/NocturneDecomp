// Name: FUN_004ce590
// Address: 004ce590
// Address Range: [[004ce590, 004ce9b4]]
// Convention: unknown
// Signature: int FUN_004ce590(int param_1)

#include "nocturne.h"

int FUN_004ce590(int param_1)

{
  int iVar1;
  int iVar2;
  byte local_dc [100];
  byte local_78 [100];
  byte local_14 [4];
  
  iVar2 = param_1 + 0x2b4;
  if (0x00000011 < 4) {
    iVar1 = FUN_0040c330(param_1);
    if (1 < 0x00000011) {
      iVar1 = FUN_0040bb60(iVar2,"motion state");
    }
    if (2 < 0x00000011) {
      FUN_0040bc50(param_1 + 0x2b4,"partStatus");
      FUN_0040b9e0(param_1 + 0x276c,"grabbedBy");
      iVar2 = FUN_0040b8e0(param_1 + 0x25a8,"hitPoints");
      return iVar2;
    }
  }
  else {
    FUN_00422c30(param_1);
    FUN_0040bb60(iVar2,"motion state");
    FUN_0040bc50(iVar2,"partStatus");
    if (0x00000011 < 8) {
      FUN_0040b9e0(param_1 + 0x276c,"grabbedBy");
      *(uint *)(param_1 + 0x2770) = 0;
    }
    if (4 < 0x00000011) {
      FUN_0040b960(param_1 + 0x10a64,"controlType");
    }
    if (6 < 0x00000011) {
      FUN_0040b9e0(param_1 + 0x25608,"objectToPickUp");
      FUN_0040b9e0(param_1 + 0x25604,"doorToOpen");
      FUN_0040b9e0(param_1 + 0x25610,"leverToPull");
      FUN_0040b9e0(param_1 + 0x25614,"ladderToClimb");
      FUN_0040b9e0(param_1 + 0x2560c,"pushedObject");
    }
    if (0x00000011 == 10) {
      FUN_0040b960(local_14,&DAT_005d9ade);
    }
    iVar1 = 0x00000011;
    if ((7 < 0x00000011) && (0x00000011 < 0xb)) {
      iVar2 = 0;
      do {
        FUN_005b7790(local_dc,"keyNameList[%d]",iVar2);
        iVar2 = iVar2 + 1;
        iVar1 = FUN_0040b730(local_78,local_dc);
      } while (iVar2 < 0x20);
    }
    if (8 < 0x00000011) {
      iVar1 = FUN_0040b960(param_1 + 0x25638,"AITask");
    }
    if (0xb < 0x00000011) {
      iVar1 = FUN_0040b960(param_1 + 0x255e8,"isWearingGasMask");
    }
    if (0xc < 0x00000011) {
      iVar1 = FUN_0040b960(param_1 + 0x255ec,"isWearingGoggles");
    }
    if (0x00000011 < 0x11) {
      if (5 < 0x00000011) {
        if (DAT_007bc038 == 1) {
          iVar1 = FUN_004dc4b0(param_1 + 0x2437c,DAT_007bc034);
        }
        else {
          iVar1 = FUN_004dc2c0(param_1 + 0x2437c,DAT_007bc034);
        }
      }
      if (0xd < 0x00000011) {
        if (DAT_007bc038 == 1) {
          FUN_004dc4b0(param_1 + 0x249a0,DAT_007bc034);
          iVar1 = FUN_004dc4b0(param_1 + 0x24fc4,DAT_007bc034);
        }
        else {
          FUN_004dc2c0(param_1 + 0x249a0,DAT_007bc034);
          iVar1 = FUN_004dc2c0(param_1 + 0x24fc4,DAT_007bc034);
        }
      }
      if (0xe < 0x00000011) {
        FUN_0040b960(param_1 + 0x2563c,"HeroInventoryIndex");
        iVar2 = param_1 + 0x247e8;
        do {
          iVar1 = FUN_0040b960(iVar2,"inventoryIndex");
          iVar2 = iVar2 + 4;
        } while (iVar2 != param_1 + 0x24978);
      }
      if (0xf < 0x00000011) {
        iVar1 = FUN_0040b960(param_1 + 0x247e4,"InventoryIndex");
      }
    }
    if (0x10 < 0x00000011) {
      if (0xe < 0x00000011) {
        FUN_0040b960(param_1 + 0x2563c,"HeroInventoryIndex");
        iVar2 = param_1 + 0x247e8;
        do {
          iVar1 = FUN_0040b960(iVar2,"inventoryIndex");
          iVar2 = iVar2 + 4;
        } while (iVar2 != param_1 + 0x24978);
      }
      if (0xf < 0x00000011) {
        iVar1 = FUN_0040b960(param_1 + 0x247e4,"InventoryIndex");
      }
      if (5 < 0x00000011) {
        if (DAT_007bc038 != 1) {
          iVar2 = FUN_004dc2c0(param_1 + 0x2437c,DAT_007bc034);
          return iVar2;
        }
        iVar2 = FUN_004dc4b0(param_1 + 0x2437c,DAT_007bc034);
        return iVar2;
      }
    }
  }
  return iVar1;
}
