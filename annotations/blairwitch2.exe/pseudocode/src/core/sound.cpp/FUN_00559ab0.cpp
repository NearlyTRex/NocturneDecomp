// Name: core_sound.cpp_FUN_00559ab0
// Address: 00559ab0
// Address Range: [[00559ab0, 00559b33]]
// Convention: unknown
// Signature: void core_sound_cpp_FUN_00559ab0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_sound_cpp_FUN_00559ab0(void)

{
  if (&stack0x00000000 == &DAT_0264bba4) {
    _DAT_0264bb94 = 0xffffffff;
    return;
  }
  _DAT_0264bb84 = -(g_CDemonSetPtr->active_fog).scroll.x;
  _DAT_0264bb88 = -(g_CDemonSetPtr->active_fog).scroll.y;
  _DAT_0264bb8c = -(g_CDemonSetPtr->active_fog).scroll.z;
  _DAT_0264bb94 = 0xffffffff;
  return;
}
