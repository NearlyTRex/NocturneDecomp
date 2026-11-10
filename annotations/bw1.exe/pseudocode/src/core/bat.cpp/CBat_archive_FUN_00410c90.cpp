// Name: core_bat.cpp_CBat_archive_FUN_00410c90
// Address: 00410c90
// Address Range: [[00410c90, 00410d7d]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_archive_FUN_00410c90(CBat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bat_cpp_CBat_archive_FUN_00410c90(CBat *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->course_filename,"courseFilename");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->param,"param");
  if (g_CBatClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->speed,"speed");
    this_ptr->course_speed = this_ptr->speed * (float)_DAT_005d3649;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->speed,"flapSpeedMult");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->course_speed,"courseSpeed");
  }
  if (1 < g_CBatClassVersion) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(&this_ptr->model,"modelName")
    ;
  }
  if (g_CBatClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->periodic_sound,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040b5f0
            (&this_ptr->periodic_sound_timer_min,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040b5f0
            (&this_ptr->periodic_sound_timer_max,"periodicSoundTimerMax");
  return;
}
