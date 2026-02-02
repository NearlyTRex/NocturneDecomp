// Name: core_tvbat.cpp_CTVBat_archive_FUN_005e40c0
// Address: 005e40c0
// Address Range: [[005e40c0, 005e4208]]
// Convention: __cdecl
// Signature: void __cdecl core_tvbat_cpp_CTVBat_archive_FUN_005e40c0(CTVBat *this_ptr)

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_archive_FUN_005e40c0(CTVBat *this_ptr)

{
  if (g_CTVBatClassVersion < 3) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c1c0((CDemonActor *)this_ptr);
  }
  else {
    core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  }
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->home_pos,"homePos");
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0xc),"modelName");
  if (1 < g_CTVBatClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->speed,"speed");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->max_distance,"maxDistance");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->max_height,"maxHeight");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->rot_speed,"rotSpeed");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->move_speed,"moveSpeed");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->follow_orders,"followOrders");
  }
  if (g_CTVBatClassVersion < 4) {
    this_ptr->state = 0;
    if (g_CTVBatClassVersion < 5) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->state,"state");
    if (g_CTVBatClassVersion < 5) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->unk5,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040b770
            (&this_ptr->periodic_sound_timer_min,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040b770
            (&this_ptr->periodic_sound_timer_max,"periodicSoundTimerMax");
  return;
}
