// Name: core_sound.cpp_resetTrainSounds_FUN_005b26f0
// Address: 005b26f0
// Address Range: [[005b26f0, 005b2759]]
// Convention: __cdecl
// Signature: void core_sound.cpp_resetTrainSounds_FUN_005b26f0(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_resetTrainSounds_FUN_005b26f0(void)

{
  if ((float *)&stack0x00000000 == &g_TrainNoiseCooldown) {
    g_TrainLastCameraIndex = -1;
    return;
  }
  g_TrainVelocityVector.x = -*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0);
  g_TrainVelocityVector.y = -*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc4);
  g_TrainVelocityVector.z = -*(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc8);
  g_TrainLastCameraIndex = -1;
  return;
}
