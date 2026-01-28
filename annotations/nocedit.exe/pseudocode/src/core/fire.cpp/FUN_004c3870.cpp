// Name: core_fire.cpp_FUN_004c3870
// Address: 004c3870
// Address Range: [[004c3870, 004c38bd]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004c3870(void)

#include "nocturne.h"

void core_fire_cpp_FUN_004c3870(void)

{
  int iVar1;
  
  iVar1 = g_GlobalDeltaTimeInt >> 0x1f;
  DAT_02d13564 = DAT_02d13564 +
                 ((int)((g_GlobalDeltaTimeInt + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0)) >> 8) &
                 0xff;
  DAT_02d13560 = DAT_02d13560 +
                 ((int)((g_GlobalDeltaTimeInt + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7) &
                 0x7f;
  return;
}
