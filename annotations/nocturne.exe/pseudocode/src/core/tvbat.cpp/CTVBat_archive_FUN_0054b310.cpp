// Name: core_tvbat.cpp_CTVBat_archive_FUN_0054b310
// Address: 0054b310
// Address Range: [[0054b310, 0054b458]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_archive_FUN_0054b310(CTVBat *this_ptr)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_archive_FUN_0054b310(CTVBat *this_ptr)

{
  if (INT_005c1174 < 3) {
    core_actor_cpp_CDemonActor_archive_FUN_0040d2d0((CDemonActor *)this_ptr);
  }
  else {
    core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  }
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->home_pos,"homePos");
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  if (1 < INT_005c1174) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->speed,"speed");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->max_distance,"maxDistance");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->max_height,"maxHeight");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->rot_speed,"rotSpeed");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->move_speed,"moveSpeed");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->follow_orders,"followOrders");
  }
  if (INT_005c1174 < 4) {
    this_ptr->state = 0;
    if (INT_005c1174 < 5) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->state,"state");
    if (INT_005c1174 < 5) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->periodic_sound,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&this_ptr->periodic_sound_timer_min,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&this_ptr->periodic_sound_timer_max,"periodicSoundTimerMax");
  return;
}
