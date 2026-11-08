// Name: FUN_005876d0
// Address: 005876d0
// Address Range: [[005876d0, 005878c1]]
// Convention: unknown
// Signature: void FUN_005876d0(int param_1)

#include "nocturne.h"

void FUN_005876d0(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040b4b0(param_1 + 0x2b4,&DAT_005edfc6);
  FUN_0040b960(param_1 + 0x2c0,"opacity");
  if (0x00000006 == 2) {
    FUN_0040b8e0(param_1 + 0x2c4,"heightDelta");
    FUN_0040b8e0(param_1 + 0x2c8,"timeToMove");
    FUN_0040b730(param_1 + 0x2d0,"moveSound");
    FUN_0040b730(param_1 + 0x310,"moveEvent");
    FUN_0040b8e0(param_1 + 0x3d8,"param");
  }
  if (2 < 0x00000006) {
    FUN_0040b8e0(param_1 + 0x2c4,"heightDelta");
    FUN_0040b8e0(param_1 + 0x2c8,"timeToMoveUp");
    FUN_0040b8e0(param_1 + 0x2cc,"timeToMoveDown");
    FUN_0040b730(param_1 + 0x2d0,"moveUpSound");
    FUN_0040b730(param_1 + 0x2f0,"moveDownSound");
    FUN_0040b730(param_1 + 0x310,"moveUpEvent");
    FUN_0040b730(param_1 + 0x374,"moveDownEvent");
    FUN_0040b8e0(param_1 + 0x3d8,"param");
    FUN_0040b960(param_1 + 0x3dc,"state");
  }
  if (3 < 0x00000006) {
    FUN_0040b8e0(param_1 + 0x3e0,"patchSize");
  }
  if (4 < 0x00000006) {
    FUN_0040b960(param_1 + 0x3e4,"roundFlag");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b960(param_1 + 1000,&DAT_005ee080);
  FUN_0040b960(param_1 + 0x3ec,&DAT_005ee085);
  FUN_0040b960(param_1 + 0x3f0,&DAT_005ee08a);
  return;
}
