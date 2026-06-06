// Name: core_fire.cpp_updateTextureAnimCounts_FUN_004c3870
// Address: 004c3870
// MANUAL RECONSTRUCTION
// Address Range: [[004c3870, 004c38bd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_004c3870(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_004c3870(void)

{
  g_TextureAnimCounter1 = (g_TextureAnimCounter1 + g_GlobalDeltaTimeInt / 0x100) & 0xff;
  g_TextureAnimCounter2 = (g_TextureAnimCounter2 + g_GlobalDeltaTimeInt / 0x80) & 0x7f;
  return;
}
