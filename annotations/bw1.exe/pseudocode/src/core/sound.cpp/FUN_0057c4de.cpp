// Name: core_sound.cpp_FUN_0057c4de
// Address: 0057c4de
// Address Range: [[0057c4de, 0057c563]]
// Convention: unknown
// Signature: void core_sound_cpp_FUN_0057c4de(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sound_cpp_FUN_0057c4de(void)

{
  if (&stack0x00000000 == &DAT_02c83374) {
    _DAT_02c83364 = 0xffffffff;
    return;
  }
  _DAT_02c83354 = -(g_CDemonSetPtr->active_fog).scroll.x;
  _DAT_02c83358 = -(g_CDemonSetPtr->active_fog).scroll.y;
  _DAT_02c8335c = -(g_CDemonSetPtr->active_fog).scroll.z;
  _DAT_02c83364 = 0xffffffff;
  return;
}
