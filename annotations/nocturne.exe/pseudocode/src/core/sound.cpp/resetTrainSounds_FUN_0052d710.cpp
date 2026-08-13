// Name: core_sound.cpp_resetTrainSounds_FUN_0052d710
// Address: 0052d710
// Address Range: [[0052d710, 0052d779]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_resetTrainSounds_FUN_0052d710(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_resetTrainSounds_FUN_0052d710(void)

{
  if (&stack0x00000000 == &DAT_02dc9d50) {
    _DAT_02dc9d54 = 0xffffffff;
    return;
  }
  _DAT_02dc9d44 = -(g_CDemonSet_PTR_005be368->active_fog).scroll.x;
  _DAT_02dc9d48 = -(g_CDemonSet_PTR_005be368->active_fog).scroll.y;
  _DAT_02dc9d4c = -(g_CDemonSet_PTR_005be368->active_fog).scroll.z;
  _DAT_02dc9d54 = 0xffffffff;
  return;
}
