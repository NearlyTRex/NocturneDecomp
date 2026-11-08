// Name: FUN_00563e50
// Address: 00563e50
// Address Range: [[00563e50, 00563f68]]
// Convention: unknown
// Signature: void FUN_00563e50(int param_1)

#include "nocturne.h"

void FUN_00563e50(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b680(param_1 + 0x158,"@@spawn_name" + 2);
  FUN_0040b680(param_1 + 0x176,"actor_class_name");
  FUN_0040b830(param_1 + 0x1b4,"spawn_timer");
  FUN_0040b830(param_1 + 0x1bc,"spawn_time");
  if (1 < 0x00000005) {
    FUN_0040b8b0(param_1 + 0x1c0,"number_of_spawns");
    FUN_0040b8b0(param_1 + 0x1c4,"max_number_of_spawns");
    FUN_0040b680(param_1 + 0x194,"starting_state");
  }
  if (2 < 0x00000005) {
    FUN_0040ba30(param_1 + 0x1d0,"spawnmodelName");
  }
  if (3 < 0x00000005) {
    FUN_0040b830(param_1 + 0x1b8,"reset_timer");
    FUN_0040b8b0(param_1 + 0x1c8,"dont_spawn_when_in_view");
  }
  if (0x00000005 < 5) {
    return;
  }
  FUN_0040b830(param_1 + 0x1cc,"startGuardDist");
  return;
}
