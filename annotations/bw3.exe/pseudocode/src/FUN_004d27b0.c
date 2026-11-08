// Name: FUN_004d27b0
// Address: 004d27b0
// Address Range: [[004d27b0, 004d2a6f]]
// Convention: unknown
// Signature: void FUN_004d27b0(int param_1)

#include "nocturne.h"

void FUN_004d27b0(int param_1)

{
  int iVar1;
  byte local_d4 [100];
  byte local_70 [100];
  byte local_c [4];
  
  iVar1 = param_1 + 0x158;
  if (0x0000000F < 4) {
    FUN_0040c280(param_1);
    if (1 < 0x0000000F) {
      FUN_0040bab0(iVar1,"motion state");
    }
    if (2 < 0x0000000F) {
      FUN_0040bba0(param_1 + 0x158,"partStatus");
      FUN_0040b930(param_1 + 0x26fc,"grabbedBy");
      FUN_0040b830(param_1 + 0x2538,"hitPoints");
    }
  }
  else {
    FUN_0042b450(param_1);
    FUN_0040bab0(iVar1,"motion state");
    FUN_0040bba0(iVar1,"partStatus");
    if (0x0000000F < 8) {
      FUN_0040b930(param_1 + 0x26fc,"grabbedBy");
      *(uint *)(param_1 + 0x2700) = 0;
    }
    if (4 < 0x0000000F) {
      FUN_0040b8b0(param_1 + 0xcdd0,"controlType");
    }
    if (6 < 0x0000000F) {
      FUN_0040b930(param_1 + 0x20b98,"objectToPickUp");
      FUN_0040b930(param_1 + 0x20b94,"doorToOpen");
      FUN_0040b930(param_1 + 0x20ba0,"leverToPull");
      FUN_0040b930(param_1 + 0x20ba4,"ladderToClimb");
      FUN_0040b930(param_1 + 0x20b9c,"pushedObject");
    }
    if (0x0000000F == 10) {
      FUN_0040b8b0(local_c,&DAT_005c4bbf);
    }
    if ((7 < 0x0000000F) && (0x0000000F < 0xb)) {
      iVar1 = 0;
      do {
        FUN_005a28c0(local_70,"keyNameList[%d]",iVar1);
        iVar1 = iVar1 + 1;
        FUN_0040b680(local_d4,local_70);
      } while (iVar1 < 0x20);
    }
    if (8 < 0x0000000F) {
      FUN_0040b8b0(param_1 + 0x20bc8,"AITask");
    }
    if (0xb < 0x0000000F) {
      FUN_0040b8b0(param_1 + 0x20b58,"isWearingGasMask");
    }
    if (0xc < 0x0000000F) {
      FUN_0040b8b0(param_1 + 0x20b5c,"isWearingGoggles");
    }
    if (5 < 0x0000000F) {
      if (DAT_007df9b8 == 1) {
        FUN_004dc750(param_1 + 0x206e8,DAT_007df9b4);
      }
      else {
        FUN_004dc560(param_1 + 0x206e8,DAT_007df9b4);
      }
    }
    if (0xd < 0x0000000F) {
      FUN_0040b8b0(param_1 + 0x20b80,&DAT_005c4bfd);
      FUN_0040b8b0(param_1 + 0x20b84,"bullets");
    }
    if (0xe < 0x0000000F) {
      FUN_0040b830(param_1 + 0x20b88,"light_radius");
      return;
    }
  }
  return;
}
