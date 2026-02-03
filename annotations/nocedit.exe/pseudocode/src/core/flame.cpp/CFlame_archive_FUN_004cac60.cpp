// Name: core_flame.cpp_CFlame_archive_FUN_004cac60
// Address: 004cac60
// Address Range: [[004cac60, 004cad7a]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_archive_FUN_004cac60(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_archive_FUN_004cac60(CFlame *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->flame_size,"flameSize");
  if (1 < g_CFlameClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->which_flame,"whichFlame");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->globe_scalar,"globeScalar");
  }
  if (2 < g_CFlameClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->on_event,"onEvent");
  }
  if (3 < g_CFlameClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->on_event_alt,"onEvent");
  }
  if (4 < g_CFlameClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->flame_state,"flameState");
  }
  if (5 < g_CFlameClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->intensity,"intensity");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->randomness,"randomness");
  }
  if (g_CFlameClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->burn_hero,"burnHero");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->burn_enemy,"burnEnemy");
  return;
}
