// Name: FUN_00489120
// Address: 00489120
// Address Range: [[00489120, 004892f8]]
// Convention: unknown
// Signature: void FUN_00489120(int param_1)

#include "nocturne.h"

void FUN_00489120(int param_1)

{
  if (0x0000000E < 4) {
    FUN_0040c280(param_1);
    if (1 < 0x0000000E) {
      FUN_0040b830(param_1 + 0xcdcc,"speed");
    }
    if (2 < 0x0000000E) {
      FUN_0040b830(param_1 + 0x2538,"hitPoints");
      FUN_0040b8b0(param_1 + 0xcdd0,"poolMe");
      return;
    }
  }
  else {
    FUN_0042b450(param_1);
    FUN_0040b830(param_1 + 0xcdcc,"speed");
    FUN_0040b8b0(param_1 + 0xcdd0,"poolMe");
    if (4 < 0x0000000E) {
      FUN_0040b8b0(param_1 + 0xcdd4,"randomizeMe");
    }
    if (5 < 0x0000000E) {
      FUN_0040b930(param_1 + 0xd04c,"scriptVictim");
    }
    if (6 < 0x0000000E) {
      FUN_0040b680(param_1 + 0xcdf0,"patrolNamePattern");
    }
    if (7 < 0x0000000E) {
      FUN_0040b830(param_1 + 0xcddc,"guardDistance");
    }
    if (8 < 0x0000000E) {
      FUN_0040b830(param_1 + 0xce58,"victimHeight");
    }
    if (9 < 0x0000000E) {
      FUN_0040b930(param_1 + 0xcde4,"victim");
    }
    if (10 < 0x0000000E) {
      FUN_0040b830(param_1 + 0xce5c,"attack_damage");
    }
    if (0xb < 0x0000000E) {
      FUN_0040b8b0(param_1 + 0xce64,"spawn_amount");
      FUN_0040b680(param_1 + 0xce68,"spawn_item_class");
    }
    if (0xc < 0x0000000E) {
      FUN_0040b8b0(param_1 + 0xcecc,"spawned_item_already");
    }
    if (0xd < 0x0000000E) {
      FUN_0040b9b0(param_1 + 0xced0,"spawnmodelName");
      return;
    }
  }
  return;
}
