// Name: core_bat.cpp_CBat_archive_FUN_00411110
// Address: 00411110
// Address Range: [[00411110, 004111fd]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_archive_FUN_00411110(CBat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bat_cpp_CBat_archive_FUN_00411110(CBat *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->course_filename,"courseFilename");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->param,"param");
  if (g_CBatClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->speed,"speed");
    this_ptr->course_speed = this_ptr->speed * (float)_DAT_005cb6de;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->speed,"flapSpeedMult");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->course_speed,"courseSpeed");
  }
  if (1 < g_CBatClassVersion) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(&this_ptr->model,"modelName")
    ;
  }
  if (g_CBatClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->periodic_sound,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040b8e0
            (&this_ptr->periodic_sound_timer_min,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040b8e0
            (&this_ptr->periodic_sound_timer_max,"periodicSoundTimerMax");
  return;
}
