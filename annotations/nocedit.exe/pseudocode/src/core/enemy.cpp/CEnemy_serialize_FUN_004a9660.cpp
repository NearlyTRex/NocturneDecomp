// Name: core_enemy.cpp_CEnemy_serialize_FUN_004a9660
// Address: 004a9660
// Address Range: [[004a9660, 004a97b1]]
// Convention: __cdecl
// Signature: void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_serialize_FUN_004a9660(CEnemy *this_ptr)

{
  if (g_CEnemyClassVersion < 4) {
    core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0((CDemonActor *)this_ptr);
    if (1 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->speed,"speed");
    }
    if (2 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeFloat_FUN_0040b770
                (&(this_ptr->base_character).hit_points,"hitPoints");
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->pool_me,"poolMe");
      return;
    }
  }
  else {
    core_charactr_cpp_CCharacter_serialize_FUN_004283a0(&this_ptr->base_character);
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->speed,"speed");
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->pool_me,"poolMe");
    if (4 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->randomize_me,"randomizeMe");
    }
    if (5 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(this_ptr + 1),"scriptVictim");
    }
    if (6 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeString_FUN_0040b5c0
                ((char **)this_ptr->patrol_name_pattern,"patrolNamePattern");
    }
    if (7 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->guard_distance,"guardDistance")
      ;
    }
    if (8 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->victim_height,"victimHeight");
    }
    if (9 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(this_ptr->field6_0xbe38 + 4),"victim");
      return;
    }
  }
  return;
}
