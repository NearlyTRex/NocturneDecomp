// Name: core_sound.cpp_resetTrainSounds_FUN_0052d710
// Address: 0052d710
// Address Range: [[0052d710, 0052d779]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_resetTrainSounds_FUN_0052d710(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_resetTrainSounds_FUN_0052d710(void)

{
  if ((float *)&stack0x00000000 == &g_FLOAT_02dc9d50) {
    g_INT_02dc9d54 = -1;
    return;
  }
  g_CVector3f_02dc9d44.x = -(g_CDemonSetPtr->active_fog).scroll.x;
  g_CVector3f_02dc9d44.y = -(g_CDemonSetPtr->active_fog).scroll.y;
  g_CVector3f_02dc9d44.z = -(g_CDemonSetPtr->active_fog).scroll.z;
  g_INT_02dc9d54 = -1;
  return;
}
