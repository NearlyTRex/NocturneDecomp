// Name: core_sound.cpp_FUN_00559aae
// Address: 00559aae
// Address Range: [[00559aae, 00559b33]]
// Convention: unknown
// Signature: void core_sound_cpp_FUN_00559aae(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sound_cpp_FUN_00559aae(void)

{
  if (&stack0x00000000 == &DAT_0264bba4) {
    _DAT_0264bb94 = 0xffffffff;
    return;
  }
  _DAT_0264bb84 = -*(float *)&g_CDemonSetPtr->field_0x15ac70;
  _DAT_0264bb88 = -*(float *)&g_CDemonSetPtr->field_0x15ac74;
  _DAT_0264bb8c = -*(float *)&g_CDemonSetPtr->field_0x15ac78;
  _DAT_0264bb94 = 0xffffffff;
  return;
}
