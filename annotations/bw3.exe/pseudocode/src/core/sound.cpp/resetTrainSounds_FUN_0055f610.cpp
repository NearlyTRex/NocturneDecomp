// Name: core_sound.cpp_resetTrainSounds_FUN_0055f610
// Address: 0055f610
// Address Range: [[0055f610, 0055f693]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_resetTrainSounds_FUN_0055f610(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_resetTrainSounds_FUN_0055f610(void)

{
  if (&stack0x00000000 == g_CSpawnerClassInfo.class_name + 4) {
    g_INT_02cf5f84 = -1;
    return;
  }
  g_CVector3f_02cf5f74.x = -(g_CDemonSetPtr->active_fog).scroll.x;
  g_CVector3f_02cf5f74.y = -(g_CDemonSetPtr->active_fog).scroll.y;
  g_CVector3f_02cf5f74.z = -(g_CDemonSetPtr->active_fog).scroll.z;
  g_INT_02cf5f84 = -1;
  return;
}
