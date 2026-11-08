// Name: FUN_004abcb0
// Address: 004abcb0
// Address Range: [[004abcb0, 004abdb8]]
// Convention: unknown
// Signature: void FUN_004abcb0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004abce3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004abcb0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01d0d210) {
    iVar3 = 0x1d0d214;
    do {
      iVar1 = FUN_004a9c30(iVar3,param_2);
      if (iVar1 != 0) goto LAB_004abce8;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2e4;
    } while (iVar2 < _DAT_01d0d210);
  }
  iVar1 = 0;
LAB_004abce8:
  if (iVar1 != 0) {
    switch(*(uint *)(iVar1 + 0x140)) {
    case 0:
    case 1:
      FUN_0047cf40(0x01C5B0E4,"CFieldNotes::completeTask - entry '%s' was not a task",param_2);
      DAT_005fe374 = 1;
      return;
    case 2:
    case 3:
      *(uint *)(iVar1 + 0x140) = 4;
      DAT_005fe374 = 1;
      return;
    case 4:
      goto switchD_004abcfa_caseD_4;
    default:
      _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
      _DAT_01d71de4 = 0xab4;
      FUN_004e4330("Field note %s has invalid type %d",iVar1,*(uint *)(iVar1 + 0x140));
switchD_004abcfa_caseD_4:
      DAT_005fe374 = 1;
      return;
    }
  }
  FUN_0047cf40(0x01C5B0E4,"CFieldNotes::completeTask - entry '%s' not found",param_2);
  DAT_005fe374 = 1;
  return;
}
