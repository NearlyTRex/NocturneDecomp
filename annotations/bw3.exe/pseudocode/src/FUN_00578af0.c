// Name: FUN_00578af0
// Address: 00578af0
// Address Range: [[00578af0, 00578cfe]]
// Convention: unknown
// Signature: void FUN_00578af0(int param_1)

#include "nocturne.h"

void FUN_00578af0(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b400(param_1 + 0x158,&DAT_005d7293);
  FUN_0040b8b0(param_1 + 0x164,"opacity");
  if (0x00000007 == 2) {
    FUN_0040b830(param_1 + 0x168,"heightDelta");
    FUN_0040b830(param_1 + 0x16c,"timeToMove");
    FUN_0040b680(param_1 + 0x174,"moveSound");
    FUN_0040b680(param_1 + 0x1b4,"moveEvent");
    FUN_0040b830(param_1 + 0x27c,"param");
  }
  if (2 < 0x00000007) {
    FUN_0040b830(param_1 + 0x168,"heightDelta");
    FUN_0040b830(param_1 + 0x16c,"timeToMoveUp");
    FUN_0040b830(param_1 + 0x170,"timeToMoveDown");
    FUN_0040b680(param_1 + 0x174,"moveUpSound");
    FUN_0040b680(param_1 + 0x194,"moveDownSound");
    FUN_0040b680(param_1 + 0x1b4,"moveUpEvent");
    FUN_0040b680(param_1 + 0x218,"moveDownEvent");
    FUN_0040b830(param_1 + 0x27c,"param");
    FUN_0040b8b0(param_1 + 0x280,"state");
  }
  if (3 < 0x00000007) {
    FUN_0040b830(param_1 + 0x284,"patchSize");
  }
  if (4 < 0x00000007) {
    FUN_0040b8b0(param_1 + 0x288,"roundFlag");
  }
  if (5 < 0x00000007) {
    FUN_0040b8b0(param_1 + 0x28c,&DAT_005d734d);
    FUN_0040b8b0(param_1 + 0x290,&DAT_005d7352);
    FUN_0040b8b0(param_1 + 0x294,&DAT_005d7357);
  }
  if (0x00000007 < 7) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x298,"is_lava");
  return;
}
