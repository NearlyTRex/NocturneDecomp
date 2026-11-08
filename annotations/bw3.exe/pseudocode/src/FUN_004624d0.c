// Name: FUN_004624d0
// Address: 004624d0
// Address Range: [[004624d0, 004624fa]]
// Convention: unknown
// Signature: void FUN_004624d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004624d0(void)

{
  int iVar1;
  
  iVar1 = 0x1b4b84c;
  do {
    FUN_00460e10(iVar1);
    iVar1 = iVar1 + 0x398;
  } while (iVar1 != 0x1b8504c);
  _DAT_01b4b848 = 0;
  return;
}
