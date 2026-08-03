// Name: core_pendulum.cpp_CPendulum_archive_FUN_004f3c50
// Address: 004f3c50
// Address Range: [[004f3c50, 004f3deb]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_archive_FUN_004f3c50(CPendulum *this_ptr)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_archive_FUN_004f3c50(CPendulum *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->start_event,"startEvent");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->moving,"moving");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->param,"param");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->max_angle,"maxAngle");
  if (1 < INT_005be164) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->swoosh_sound,"swooshSound");
  }
  if (2 < INT_005be164) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->creak_1_sound,"creak1Sound");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->creak_2_sound,"creak2Sound");
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&this_ptr->swoosh_phase_bias,"swooshPhaseBias");
  }
  if (3 < INT_005be164) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->kill_hero,"killHero");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->kill_enemy,"killEnemy");
  }
  if (4 < INT_005be164) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->decay,"decay");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->decay_timer,"decayTimer");
  }
  if (5 < INT_005be164) {
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->ground_type,"groundType");
  }
  if (6 < INT_005be164) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->stop_event,"stopEvent");
  }
  if (INT_005be164 < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->one_shot,"oneShot");
  return;
}
