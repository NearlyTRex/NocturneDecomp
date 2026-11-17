// Name: core_fire.cpp_updateTextureAnimCounts_FUN_00486d40
// Address: 00486d40
// Address Range: [[00486d40, 00486d8d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_00486d40(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_00486d40(void)

{
  int iVar1;
  
  iVar1 = g_INT_01bd1d80 >> 0x1f;
  g_INT_01c094b8 =
       g_INT_01c094b8 + ((int)((g_INT_01bd1d80 + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0)) >> 8) &
       0xff;
  g_INT_01c094b4 =
       g_INT_01c094b4 + ((int)((g_INT_01bd1d80 + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7) &
       0x7f;
  return;
}
