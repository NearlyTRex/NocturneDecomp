// Name: core_pendulum.cpp_CPendulum_archive_FUN_0054a3b0
// Address: 0054a3b0
// Address Range: [[0054a3b0, 0054a54b]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_archive_FUN_0054a3b0(CPendulum *this_ptr)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_archive_FUN_0054a3b0(CPendulum *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->start_event,"startEvent");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->moving,"moving");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->param,"param");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->max_angle,"maxAngle");
  if (1 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->swoosh_sound,"swooshSound");
  }
  if (2 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->creak_1_sound,"creak1Sound");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->creak_2_sound,"creak2Sound");
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&this_ptr->swoosh_phase_bias,"swooshPhaseBias");
  }
  if (3 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->kill_hero,"killHero");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->kill_enemy,"killEnemy");
  }
  if (4 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->decay,"decay");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->decay_timer,"decayTimer");
  }
  if (5 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->ground_type,"groundType");
  }
  if (6 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->stop_event,"stopEvent");
  }
  if (g_CPendulumClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->one_shot,"oneShot");
  return;
}
