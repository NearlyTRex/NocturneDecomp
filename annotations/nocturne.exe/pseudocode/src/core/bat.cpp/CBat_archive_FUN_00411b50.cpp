// Name: core_bat.cpp_CBat_archive_FUN_00411b50
// Address: 00411b50
// Address Range: [[00411b50, 00411c3d]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_archive_FUN_00411b50(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_archive_FUN_00411b50(CBat *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->course_filename,"courseFilename");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->param,"param");
  if (g_INT_005acf94 < 3) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->speed,"speed");
    this_ptr->course_speed = this_ptr->speed * (float)30;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->speed,"flapSpeedMult");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->course_speed,"courseSpeed");
  }
  if (1 < g_INT_005acf94) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName")
    ;
  }
  if (g_INT_005acf94 < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->periodic_sound,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&this_ptr->periodic_sound_timer_min,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&this_ptr->periodic_sound_timer_max,"periodicSoundTimerMax");
  return;
}
