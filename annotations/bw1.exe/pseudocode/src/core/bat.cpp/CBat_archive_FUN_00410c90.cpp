// Name: core_bat.cpp_CBat_archive_FUN_00410c90
// Address: 00410c90
// Address Range: [[00410c90, 00410d7d]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_archive_FUN_00410c90(CBat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bat_cpp_CBat_archive_FUN_00410c90(CBat *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x158,"courseFilename");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x304,"param");
  if (g_CBatClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x30c,"speed");
    *(float *)&this_ptr->field_0x308 = *(float *)&this_ptr->field_0x30c * (float)_DAT_005d3649;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x30c,"flapSpeedMult");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x308,"courseSpeed");
  }
  if (1 < g_CBatClassVersion) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
              (&this_ptr->field_0x188,"modelName");
  }
  if (g_CBatClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x314,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x378,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x37c,"periodicSoundTimerMax");
  return;
}
