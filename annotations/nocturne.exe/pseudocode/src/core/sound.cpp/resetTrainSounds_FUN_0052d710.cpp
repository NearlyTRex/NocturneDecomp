// Name: core_sound.cpp_resetTrainSounds_FUN_0052d710
// Address: 0052d710
// Address Range: [[0052d710, 0052d779]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_resetTrainSounds_FUN_0052d710(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_resetTrainSounds_FUN_0052d710(void)

{
  if ((float *)&stack0x00000000 == &g_TrainNoiseCooldown) {
    g_TrainLastCameraIndex = -1;
    return;
  }
  g_TrainVelocityVector.x = -(g_CDemonSetPtr->active_fog).scroll.x;
  g_TrainVelocityVector.y = -(g_CDemonSetPtr->active_fog).scroll.y;
  g_TrainVelocityVector.z = -(g_CDemonSetPtr->active_fog).scroll.z;
  g_TrainLastCameraIndex = -1;
  return;
}
