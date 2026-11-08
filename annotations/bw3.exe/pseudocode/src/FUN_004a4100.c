// Name: FUN_004a4100
// Address: 004a4100
// Address Range: [[004a0cc0, 004a0cc2] [004a4100, 004a4129]]
// Convention: unknown
// Signature: undefined4 FUN_004a4100(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a4100(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = _DAT_01cbb9bc;
  while( true ) {
    if (iVar1 == 1) {
      return 1;
    }
    if (0x72f < iVar2 + 0x5c) break;
    iVar1 = *(int *)(&DAT_01cbba18 + iVar2);
    iVar2 = iVar2 + 0x5c;
  }
  return 0;
}
