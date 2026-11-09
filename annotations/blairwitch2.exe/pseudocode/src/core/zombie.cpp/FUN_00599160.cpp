// Name: core_zombie.cpp_FUN_00599160
// Address: 00599160
// Address Range: [[00599160, 005992a8]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_00599160(CEnemy *param_1)

#include "nocturne.h"

void core_zombie_cpp_FUN_00599160(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  if (1 < g_CZombieClassVersion) {
    if (g_CZombieClassVersion < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a70,"guardDistance");
    }
    core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  }
  if (2 < g_CZombieClassVersion) {
    core_actor_cpp_archivePartStatus_FUN_0040bc50(&param_1->field_0x2b4,"partStatus");
    if (g_CZombieClassVersion < 7) {
      core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1->field_0x2698,"carriedActor");
    }
  }
  if (3 < g_CZombieClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730
              (&param_1[1].field_0x20,"riseFromGraveCondition");
  }
  if (4 < g_CZombieClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x18,"graveActor");
  }
  if ((5 < g_CZombieClassVersion) && (g_CZombieClassVersion < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040bfd0(&param_1->field_0x2d0c,"clothList");
  }
  if (7 < g_CZombieClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[1].field_0x84,"isMinerZombie");
  }
  if (g_CZombieClassVersion < 10) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&param_1[1].field_0x88,"alwaysChaseFast");
  return;
}
