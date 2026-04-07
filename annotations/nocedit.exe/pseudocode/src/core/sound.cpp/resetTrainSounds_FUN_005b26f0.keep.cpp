// Name: core_sound.cpp_resetTrainSounds_FUN_005b26f0
// Address: 005b26f0
// MANUAL RECONSTRUCTION
// Address Range: [[005b26f0, 005b2759]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_resetTrainSounds_FUN_005b26f0(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_resetTrainSounds_FUN_005b26f0(void)

{
  g_TrainVelocityVector.x = -(g_CDemonSetPtr->active_fog).scroll.x;
  g_TrainVelocityVector.y = -(g_CDemonSetPtr->active_fog).scroll.y;
  g_TrainVelocityVector.z = -(g_CDemonSetPtr->active_fog).scroll.z;
  g_TrainLastCameraIndex = -1;
  return;
}
