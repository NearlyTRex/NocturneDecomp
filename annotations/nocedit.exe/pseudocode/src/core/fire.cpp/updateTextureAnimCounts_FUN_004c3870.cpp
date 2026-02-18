// Name: core_fire.cpp_updateTextureAnimCounts_FUN_004c3870
// Address: 004c3870
// Address Range: [[004c3870, 004c38bd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_004c3870(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_004c3870(void)

{
  int iVar1;
  
  iVar1 = g_GlobalDeltaTimeInt >> 0x1f;
  g_TextureAnimCounter1 =
       g_TextureAnimCounter1 +
       ((int)((g_GlobalDeltaTimeInt + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0)) >> 8) & 0xff;
  g_TextureAnimCounter2 =
       g_TextureAnimCounter2 +
       ((int)((g_GlobalDeltaTimeInt + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7) & 0x7f;
  return;
}
