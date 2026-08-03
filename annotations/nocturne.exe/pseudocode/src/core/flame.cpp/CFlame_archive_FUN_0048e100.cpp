// Name: core_flame.cpp_CFlame_archive_FUN_0048e100
// Address: 0048e100
// Address Range: [[0048e100, 0048e21a]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_archive_FUN_0048e100(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_archive_FUN_0048e100(CFlame *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->flame_size,"flameSize");
  if (1 < INT_005b91c0) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->which_flame,"whichFlame");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->globe_scalar,"globeScalar");
  }
  if (2 < INT_005b91c0) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->on_event,"onEvent");
  }
  if (3 < INT_005b91c0) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->off_event,"onEvent");
  }
  if (4 < INT_005b91c0) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->flame_state,"flameState");
  }
  if (5 < INT_005b91c0) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->intensity,"intensity");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->randomness,"randomness");
  }
  if (INT_005b91c0 < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->burn_hero,"burnHero");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->burn_enemy,"burnEnemy");
  return;
}
