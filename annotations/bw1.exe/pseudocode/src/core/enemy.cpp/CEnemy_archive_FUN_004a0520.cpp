// Name: core_enemy.cpp_CEnemy_archive_FUN_004a0520
// Address: 004a0520
// Address Range: [[004a0520, 004a0671]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004a0520(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004a0520(CEnemy *this_ptr)

{
  if (g_CEnemyClassVersion < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
    if (1 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->speed,"speed");
    }
    if (2 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).hit_points,"hitPoints");
      core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->pool_me,"poolMe");
      return;
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_0042c7f0(&this_ptr->base);
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->speed,"speed");
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->pool_me,"poolMe");
    if (4 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->randomize_me,"randomizeMe");
    }
    if (5 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->script_victim,"scriptVictim");
    }
    if (6 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b440
                (this_ptr->patrol_name_pattern,"patrolNamePattern");
    }
    if (7 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->guard_distance,"guardDistance");
    }
    if (8 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->victim_height,"victimHeight");
    }
    if (9 < g_CEnemyClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->victim,"victim");
      return;
    }
  }
  return;
}
