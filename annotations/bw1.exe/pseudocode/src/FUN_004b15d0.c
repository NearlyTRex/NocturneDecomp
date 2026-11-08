// Name: FUN_004b15d0
// Address: 004b15d0
// Address Range: [[004b15d0, 004b161d]]
// Convention: unknown
// Signature: void FUN_004b15d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b15d0(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c43530 >> 0x1f;
  _DAT_01c57e18 =
       _DAT_01c57e18 + ((int)((_DAT_01c43530 + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0)) >> 8) &
       0xff;
  _DAT_01c57e14 =
       _DAT_01c57e14 + ((int)((_DAT_01c43530 + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7) & 0x7f
  ;
  return;
}
