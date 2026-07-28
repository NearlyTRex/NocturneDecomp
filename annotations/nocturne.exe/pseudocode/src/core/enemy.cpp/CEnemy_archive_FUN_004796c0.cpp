// Name: core_enemy.cpp_CEnemy_archive_FUN_004796c0
// Address: 004796c0
// Address Range: [[004796c0, 00479811]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004796c0(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004796c0(CEnemy *this_ptr)

{
  if (INT_005b7604 < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040d2d0((CDemonActor *)this_ptr);
    if (1 < INT_005b7604) {
      core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->speed,"speed");
    }
    if (2 < INT_005b7604) {
      core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).hit_points,"hitPoints");
      core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->pool_me,"poolMe");
      return;
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_004244b0(&this_ptr->base);
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->speed,"speed");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->pool_me,"poolMe");
    if (4 < INT_005b7604) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->randomize_me,"randomizeMe");
    }
    if (5 < INT_005b7604) {
      core_actor_cpp_archiveActor_FUN_0040c980
                ((CDemonActor **)&this_ptr->script_victim,"scriptVictim");
    }
    if (6 < INT_005b7604) {
      core_actor_cpp_archiveString_FUN_0040c6d0
                (this_ptr->patrol_name_pattern,"patrolNamePattern");
    }
    if (7 < INT_005b7604) {
      core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->guard_distance,"guardDistance");
    }
    if (8 < INT_005b7604) {
      core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->victim_height,"victimHeight");
    }
    if (9 < INT_005b7604) {
      core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)&this_ptr->victim,"victim");
      return;
    }
  }
  return;
}
