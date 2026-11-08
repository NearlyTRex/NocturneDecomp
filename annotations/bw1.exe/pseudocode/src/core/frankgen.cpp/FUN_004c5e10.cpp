// Name: FUN_004c5e10
// Address: 004c5e10
// Address Range: [[004c5e10, 004c5e73]]
// Convention: unknown
// Signature: int FUN_004c5e10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c5e10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(0x01E82168 + 0x14d164) <= iVar2) {
      _DAT_01d1d400 = "..\\core\\frankgen.cpp";
      _DAT_01d1d404 = 0x1cf;
      FUN_005030e0("CFrankenstienMachine::findLeader - no leader found!");
      return 0;
    }
    iVar1 = FUN_0040c600(*(uint *)(iVar3 + 0x14d168 + 0x01E82168),_DAT_01cc90ac);
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar1;
}
