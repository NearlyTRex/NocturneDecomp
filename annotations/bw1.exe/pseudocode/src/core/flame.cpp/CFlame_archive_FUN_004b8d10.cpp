// Name: core_flame.cpp_CFlame_archive_FUN_004b8d10
// Address: 004b8d10
// Address Range: [[004b8d10, 004b8e2a]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_archive_FUN_004b8d10(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_archive_FUN_004b8d10(CFlame *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->flame_size,"?flameSize" + 1);
  if (1 < g_CFlameClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->which_flame,"whichFlame");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->globe_scalar,"globeScalar");
  }
  if (2 < g_CFlameClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->on_event,"onEvent");
  }
  if (3 < g_CFlameClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->off_event,"onEvent");
  }
  if (4 < g_CFlameClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->flame_state,"flameState");
  }
  if (5 < g_CFlameClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->intensity,"intensity");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->randomness,"randomness");
  }
  if (g_CFlameClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->burn_hero,"burnHero");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->burn_enemy,"burnEnemy");
  return;
}
