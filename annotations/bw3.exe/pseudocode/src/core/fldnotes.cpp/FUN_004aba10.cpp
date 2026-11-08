// Name: FUN_004aba10
// Address: 004aba10
// Address Range: [[004aba10, 004abb22]]
// Convention: unknown
// Signature: void FUN_004aba10(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004aba43) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aba10(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01d0d210) {
    iVar3 = 0x1d0d214;
    do {
      iVar1 = FUN_004a9c30(iVar3,param_2);
      if (iVar1 != 0) goto LAB_004aba48;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2e4;
    } while (iVar2 < _DAT_01d0d210);
  }
  iVar1 = 0;
LAB_004aba48:
  if (iVar1 != 0) {
    switch(*(uint *)(iVar1 + 0x140)) {
    case 0:
      *(uint *)(iVar1 + 0x140) = 1;
      DAT_005fe374 = 1;
      return;
    case 1:
    case 3:
    case 4:
    case 6:
      goto switchD_004aba5a_caseD_1;
    case 2:
      *(uint *)(iVar1 + 0x140) = 3;
      DAT_005fe374 = 1;
      return;
    case 5:
      *(uint *)(iVar1 + 0x140) = 6;
      DAT_005fe374 = 1;
      return;
    default:
      _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
      _DAT_01d71de4 = 0xa7f;
      FUN_004e4330("Field note %s has invalid type %d",iVar1,*(uint *)(iVar1 + 0x140));
switchD_004aba5a_caseD_1:
      DAT_005fe374 = 1;
      return;
    }
  }
  FUN_0047cf40(0x01C5B0E4,"CFieldNotes::enableEntry - entry '%s' not found",param_2);
  DAT_005fe374 = 1;
  return;
}
