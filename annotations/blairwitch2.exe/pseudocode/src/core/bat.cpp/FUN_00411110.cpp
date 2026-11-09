// Name: core_bat.cpp_FUN_00411110
// Address: 00411110
// Address Range: [[00411110, 004111fd]]
// Convention: unknown
// Signature: void core_bat_cpp_FUN_00411110(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bat_cpp_FUN_00411110(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 1),"courseFilename");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x1ac,"param");
  if (g_CBatClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x1b4,"speed");
    *(float *)&param_1[1].field_0x1b0 = *(float *)&param_1[1].field_0x1b4 * (float)_DAT_005cb6de;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x1b4,"flapSpeedMult");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x1b0,"courseSpeed");
  }
  if (1 < g_CBatClassVersion) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
              (&param_1[1].field_0x30,"modelName");
  }
  if (g_CBatClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1bc,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x220,"periodicSoundTimerMin")
  ;
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x224,"periodicSoundTimerMax")
  ;
  return;
}
