// Name: core_tvbat.cpp_CTVBat_archive_FUN_005804c0
// Address: 005804c0
// Address Range: [[005804c0, 00580608]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_archive_FUN_005804c0(CTVBat *this_ptr)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_archive_FUN_005804c0(CTVBat *this_ptr)

{
  if (g_CTVBatClassVersion < 3) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
  }
  else {
    core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  }
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->home_pos,"@homePos" + 1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(&this_ptr->model,"modelName");
  if (1 < g_CTVBatClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->speed,"speed");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->max_distance,"maxDistance");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->max_height,"maxHeight");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->rot_speed,"rotSpeed");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->move_speed,"moveSpeed");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->follow_orders,"followOrders");
  }
  if (g_CTVBatClassVersion < 4) {
    this_ptr->state = 0;
    if (g_CTVBatClassVersion < 5) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->state,"state");
    if (g_CTVBatClassVersion < 5) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->periodic_sound,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040b8e0
            (&this_ptr->periodic_sound_timer_min,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040b8e0
            (&this_ptr->periodic_sound_timer_max,"periodicSoundTimerMax");
  return;
}
