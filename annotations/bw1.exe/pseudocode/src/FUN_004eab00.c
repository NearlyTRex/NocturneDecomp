// Name: FUN_004eab00
// Address: 004eab00
// Address Range: [[004eab00, 004ead76]]
// Convention: unknown
// Signature: void FUN_004eab00(int param_1)

#include "nocturne.h"

void FUN_004eab00(int param_1)

{
  int iVar1;
  byte local_d4 [100];
  byte local_70 [100];
  byte local_c [4];
  
  iVar1 = param_1 + 0x158;
  if (0x0000000D < 4) {
    FUN_0040c040(param_1);
    if (1 < 0x0000000D) {
      FUN_0040b870(iVar1,"motion state");
    }
    if (2 < 0x0000000D) {
      FUN_0040b960(param_1 + 0x158,"partStatus");
      FUN_0040b6f0(param_1 + 0x26fc,"grabbedBy");
      FUN_0040b5f0(param_1 + 0x2538,"hitPoints");
    }
  }
  else {
    FUN_0042c7f0(param_1);
    FUN_0040b870(iVar1,"motion state");
    FUN_0040b960(iVar1,"partStatus");
    if (0x0000000D < 8) {
      FUN_0040b6f0(param_1 + 0x26fc,"grabbedBy");
      *(uint *)(param_1 + 0x2700) = 0;
    }
    if (4 < 0x0000000D) {
      FUN_0040b670(param_1 + 0xc1d4,"controlType");
    }
    if (6 < 0x0000000D) {
      FUN_0040b6f0(param_1 + 0x1ff78,"objectToPickUp");
      FUN_0040b6f0(param_1 + 0x1ff74,"doorToOpen");
      FUN_0040b6f0(param_1 + 0x1ff80,"leverToPull");
      FUN_0040b6f0(param_1 + 0x1ff84,"ladderToClimb");
      FUN_0040b6f0(param_1 + 0x1ff7c,"pushedObject");
    }
    if (0x0000000D == 10) {
      FUN_0040b670(local_c,"keys");
    }
    if ((7 < 0x0000000D) && (0x0000000D < 0xb)) {
      iVar1 = 0;
      do {
        FUN_005bfb40(local_70,"keyNameList[%d]",iVar1);
        iVar1 = iVar1 + 1;
        FUN_0040b440(local_d4,local_70);
      } while (iVar1 < 0x20);
    }
    if (8 < 0x0000000D) {
      FUN_0040b670(param_1 + 0x1ffa8,"AITask");
    }
    if (0xb < 0x0000000D) {
      FUN_0040b670(param_1 + 0x1ff54,"isWearingGasMask");
    }
    if (0xc < 0x0000000D) {
      FUN_0040b670(param_1 + 0x1ff58,"isWearingGoggles");
    }
    if (5 < 0x0000000D) {
      if (DAT_007c3038 != 1) {
        FUN_004f95b0(param_1 + 0x1fae8,DAT_007c3034);
        return;
      }
      FUN_004f97a0(param_1 + 0x1fae8,DAT_007c3034);
      return;
    }
  }
  return;
}
