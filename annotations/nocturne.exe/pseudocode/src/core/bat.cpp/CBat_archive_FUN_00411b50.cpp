// Name: core_bat.cpp_CBat_archive_FUN_00411b50
// Address: 00411b50
// Address Range: [[00411b50, 00411c3d]]
// Convention: unknown
// Signature: void core_bat_cpp_CBat_archive_FUN_00411b50(int param_1)

#include "nocturne.h"

void core_bat_cpp_CBat_archive_FUN_00411b50(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x150,"courseFilename");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2fc,"param");
  if (g_INT_005acf94 < 3) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x304,"speed");
    *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x304) * (float)30;
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x304,"flapSpeedMult");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x300,"courseSpeed");
  }
  if (1 < g_INT_005acf94) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x180,"modelName");
  }
  if (g_INT_005acf94 < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x30c,0);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x370,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x374,"periodicSoundTimerMax");
  return;
}
