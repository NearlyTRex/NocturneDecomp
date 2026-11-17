// Name: core_sound.cpp_resetTrainSounds_FUN_00559ab0
// Address: 00559ab0
// Address Range: [[00559ab0, 00559b33]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_resetTrainSounds_FUN_00559ab0(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_resetTrainSounds_FUN_00559ab0(void)

{
  if ((int *)&stack0x00000000 == &g_INT_0264bba4) {
    g_INT_0264bb94 = -1;
    return;
  }
  g_CVector3f_0264bb84.x = -(g_CDemonSetPtr->active_fog).scroll.x;
  g_CVector3f_0264bb84.y = -(g_CDemonSetPtr->active_fog).scroll.y;
  g_CVector3f_0264bb84.z = -(g_CDemonSetPtr->active_fog).scroll.z;
  g_INT_0264bb94 = -1;
  return;
}
