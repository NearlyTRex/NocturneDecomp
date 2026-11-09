// Name: core_fire.cpp_updateTextureAnimCounts_FUN_0049c620
// Address: 0049c620
// Address Range: [[0049c620, 0049c66d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_0049c620(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_updateTextureAnimCounts_FUN_0049c620(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c5fad0 >> 0x1f;
  _DAT_01c743f8 =
       _DAT_01c743f8 + ((int)((_DAT_01c5fad0 + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0)) >> 8) &
       0xff;
  _DAT_01c743f4 =
       _DAT_01c743f4 + ((int)((_DAT_01c5fad0 + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7) & 0x7f
  ;
  return;
}
