// Name: FUN_004ace60
// Address: 004ace60
// Address Range: [[004ace60, 004acec3]]
// Convention: unknown
// Signature: int FUN_004ace60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ace60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(0x01E661B8 + 0x14d164) <= iVar2) {
      _DAT_01d046a0 = "..\\core\\frankgen.cpp";
      _DAT_01d046a4 = 0x1cf;
      FUN_004e4500("CFrankenstienMachine::findLeader - no leader found!");
      return 0;
    }
    iVar1 = FUN_0040c8f0(*(uint *)(iVar3 + 0x14d168 + 0x01E661B8),_DAT_01cb061c);
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar1;
}
