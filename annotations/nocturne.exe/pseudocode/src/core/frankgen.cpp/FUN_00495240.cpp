// Name: FUN_00495240
// Address: 00495240
// Address Range: [[00495240, 004952a3]]
// Convention: unknown
// Signature: int FUN_00495240(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00495240(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar2) {
      _DAT_01cc4800 = "..\\core\\frankgen.cpp";
      _DAT_01cc4804 = 0x1cf;
      FUN_004c8440("CFrankenstienMachine::findLeader - no leader found!");
      return 0;
    }
    iVar1 = FUN_0040d890(*(uint *)(iVar3 + 0x14cd70 + 0x01E57284),_DAT_01c7133c);
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar1;
}
