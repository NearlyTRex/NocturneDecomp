// Name: core_sound.cpp_resetTrainSounds_FUN_0057c4e0
// Address: 0057c4e0
// Address Range: [[0057c4e0, 0057c563]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_resetTrainSounds_FUN_0057c4e0(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_resetTrainSounds_FUN_0057c4e0(void)

{
  if ((int *)&stack0x00000000 == &g_INT_02c83374) {
    g_INT_02c83364 = -1;
    return;
  }
  g_CVector3f_02c83354.x = -(g_CDemonSetPtr->active_fog).scroll.x;
  g_CVector3f_02c83354.y = -(g_CDemonSetPtr->active_fog).scroll.y;
  g_CVector3f_02c83354.z = -(g_CDemonSetPtr->active_fog).scroll.z;
  g_INT_02c83364 = -1;
  return;
}
