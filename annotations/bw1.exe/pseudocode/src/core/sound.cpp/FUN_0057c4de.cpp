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
  _DAT_02c83354 = -*(float *)&g_CDemonSetPtr->field_0x15ac70;
  _DAT_02c83358 = -*(float *)&g_CDemonSetPtr->field_0x15ac74;
  _DAT_02c8335c = -*(float *)&g_CDemonSetPtr->field_0x15ac78;
  _DAT_02c83364 = 0xffffffff;
  return;
}
