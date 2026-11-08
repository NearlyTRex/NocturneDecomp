// Name: FUN_005ab300
// Address: 005ab300
// Address Range: [[005ab300, 005ab4f1]]
// Convention: unknown
// Signature: void FUN_005ab300(int param_1)

#include "nocturne.h"

void FUN_005ab300(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b1c0(param_1 + 0x158,&DAT_005f9322);
  FUN_0040b670(param_1 + 0x164,"opacity");
  if (0x00000006 == 2) {
    FUN_0040b5f0(param_1 + 0x168,"heightDelta");
    FUN_0040b5f0(param_1 + 0x16c,"timeToMove");
    FUN_0040b440(param_1 + 0x174,"moveSound");
    FUN_0040b440(param_1 + 0x1b4,"moveEvent");
    FUN_0040b5f0(param_1 + 0x27c,"param");
  }
  if (2 < 0x00000006) {
    FUN_0040b5f0(param_1 + 0x168,"heightDelta");
    FUN_0040b5f0(param_1 + 0x16c,"timeToMoveUp");
    FUN_0040b5f0(param_1 + 0x170,"timeToMoveDown");
    FUN_0040b440(param_1 + 0x174,"moveUpSound");
    FUN_0040b440(param_1 + 0x194,"moveDownSound");
    FUN_0040b440(param_1 + 0x1b4,"moveUpEvent");
    FUN_0040b440(param_1 + 0x218,"moveDownEvent");
    FUN_0040b5f0(param_1 + 0x27c,"param");
    FUN_0040b670(param_1 + 0x280,"state");
  }
  if (3 < 0x00000006) {
    FUN_0040b5f0(param_1 + 0x284,"patchSize");
  }
  if (4 < 0x00000006) {
    FUN_0040b670(param_1 + 0x288,"roundFlag");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b670(param_1 + 0x28c,&DAT_005f93dc);
  FUN_0040b670(param_1 + 0x290,&DAT_005f93e1);
  FUN_0040b670(param_1 + 0x294,&DAT_005f93e6);
  return;
}
