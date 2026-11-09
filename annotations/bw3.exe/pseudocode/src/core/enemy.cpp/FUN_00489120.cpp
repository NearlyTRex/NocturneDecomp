// Name: core_enemy.cpp_FUN_00489120
// Address: 00489120
// Address Range: [[00489120, 004892f8]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_00489120(CDemonActor *param_1)

#include "nocturne.h"

void core_enemy_cpp_FUN_00489120(CDemonActor *param_1)

{
  if (g_CEnemyClassVersion < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
    if (1 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x99].field_0x34,"speed");
    }
    if (2 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x1b].field_0xf0,"hitPoints");
      core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[0x99].field_0x38,"poolMe")
      ;
      return;
    }
  }
  else {
    core_charactr_cpp_FUN_0042b450(param_1);
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x99].field_0x34,"speed");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[0x99].field_0x38,"poolMe");
    if (4 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0
                ((int *)&param_1[0x99].field_0x3c,"randomizeMe");
    }
    if (5 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b930(&param_1[0x9b].field_0x4,"scriptVictim");
    }
    if (6 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b680
                (&param_1[0x99].field_0x58,"patrolNamePattern");
    }
    if (7 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x99].field_0x44,"guardDistance");
    }
    if (8 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x99].field_0xc0,"victimHeight");
    }
    if (9 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b930(&param_1[0x99].field_0x4c,"victim");
    }
    if (10 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x99].field_0xc4,"attack_damage");
    }
    if (0xb < g_CEnemyClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0
                ((int *)&param_1[0x99].field_0xcc,"spawn_amount");
      core_actor_cpp_archiveString_FUN_0040b680
                (&param_1[0x99].field_0xd0,"spawn_item_class");
    }
    if (0xc < g_CEnemyClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0
                ((int *)&param_1[0x99].field_0x134,"spawned_item_already");
    }
    if (0xd < g_CEnemyClassVersion) {
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
                (&param_1[0x99].field_0x138,"spawnmodelName");
      return;
    }
  }
  return;
}
