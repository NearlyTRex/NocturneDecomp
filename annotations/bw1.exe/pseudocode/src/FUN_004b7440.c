// Name: FUN_004b7440
// Address: 004b7440
// Address Range: [[004b4360, 004b4362] [004b7440, 004b7469]]
// Convention: unknown
// Signature: undefined4 FUN_004b7440(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b7440(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = _DAT_01c9f1bc;
  while( true ) {
    if (iVar1 == 1) {
      return 1;
    }
    if (0x72f < iVar2 + 0x5c) break;
    iVar1 = *(int *)(&DAT_01c9f218 + iVar2);
    iVar2 = iVar2 + 0x5c;
  }
  return 0;
}
