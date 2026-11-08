// Name: FUN_00498c30
// Address: 00498c30
// Address Range: [[00498c30, 00498c7d]]
// Convention: unknown
// Signature: void FUN_00498c30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00498c30(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c2a370 >> 0x1f;
  _DAT_01c3ec58 =
       _DAT_01c3ec58 + ((int)((_DAT_01c2a370 + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0)) >> 8) &
       0xff;
  _DAT_01c3ec54 =
       _DAT_01c3ec54 + ((int)((_DAT_01c2a370 + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7) & 0x7f
  ;
  return;
}
