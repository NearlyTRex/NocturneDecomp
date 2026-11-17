// Name: core_fire.cpp_updateTextureAnimCounts_FUN_004b15d0
// Address: 004b15d0
// Address Range: [[004b15d0, 004b161d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_004b15d0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_004b15d0(void)

{
  int iVar1;
  
  iVar1 = g_INT_01c43530 >> 0x1f;
  g_INT_01c57e18 =
       g_INT_01c57e18 + ((int)((g_INT_01c43530 + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0)) >> 8) &
       0xff;
  g_INT_01c57e14 =
       g_INT_01c57e14 + ((int)((g_INT_01c43530 + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7) &
       0x7f;
  return;
}
