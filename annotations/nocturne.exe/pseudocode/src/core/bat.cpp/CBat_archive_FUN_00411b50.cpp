// Name: core_bat.cpp_CBat_archive_FUN_00411b50
// Address: 00411b50
// Address Range: [[00411b50, 00411c3d]]
// Convention: unknown
// Signature: void core_bat_cpp_CBat_archive_FUN_00411b50(CDemonActor *param_1)

#include "nocturne.h"

void core_bat_cpp_CBat_archive_FUN_00411b50(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].actor_name,"courseFilename");
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[2].orient_matrix.m[2].z,"param");
  if (g_INT_005acf94 < 3) {
    core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].health,"speed");
    param_1[2].runtime_state = (int)((float)param_1[2].health * (float)30);
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].health,"flapSpeedMult");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)&param_1[2].runtime_state,"courseSpeed");
  }
  if (1 < g_INT_005acf94) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
              ((CKeyFramedModelInstance *)&param_1[1].orient.vec,"modelName");
  }
  if (g_INT_005acf94 < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)&param_1[2].direction_hint,(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[2].create_event + 0x58),"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[2].create_event + 0x5c),"periodicSoundTimerMax");
  return;
}
