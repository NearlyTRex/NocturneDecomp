// Name: FUN_00454460
// Address: 00454460
// Address Range: [[00454460, 0045448a]]
// Convention: unknown
// Signature: void FUN_00454460(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454460(void)

{
  int iVar1;
  
  iVar1 = 0x1abb65c;
  do {
    FUN_00452f10(iVar1);
    iVar1 = iVar1 + 0x398;
  } while (iVar1 != 0x1af4e5c);
  _DAT_01abb658 = 0;
  return;
}
