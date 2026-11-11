// Name: core_enemy.cpp_CEnemy_archive_FUN_00489120
// Address: 00489120
// Address Range: [[00489120, 004892f8]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_archive_FUN_00489120(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_archive_FUN_00489120(CEnemy *this_ptr)

{
  if (g_CEnemyClassVersion < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
    if (1 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->speed,"speed");
    }
    if (2 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).hit_points,"hitPoints");
      core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->pool_me,"poolMe");
      return;
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_0042b450(&this_ptr->base);
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->speed,"speed");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->pool_me,"poolMe");
    if (4 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->randomize_me,"randomizeMe");
    }
    if (5 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->script_victim,"scriptVictim");
    }
    if (6 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b680
                (this_ptr->patrol_name_pattern,"patrolNamePattern");
    }
    if (7 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->guard_distance,"guardDistance");
    }
    if (8 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->victim_height,"victimHeight");
    }
    if (9 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->victim,"victim");
    }
    if (10 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->attack_damage,"attack_damage");
    }
    if (0xb < g_CEnemyClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->spawn_amount,"spawn_amount");
      core_actor_cpp_archiveString_FUN_0040b680
                (this_ptr->spawn_item_class,"spawn_item_class");
    }
    if (0xc < g_CEnemyClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0
                (&this_ptr->spawned_item_already,"spawned_item_already");
    }
    if (0xd < g_CEnemyClassVersion) {
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
                (&this_ptr->spawn_model,"spawnmodelName");
      return;
    }
  }
  return;
}
