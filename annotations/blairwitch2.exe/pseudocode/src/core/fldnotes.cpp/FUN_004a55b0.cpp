// Name: FUN_004a55b0
// Address: 004a55b0
// Address Range: [[004a55b0, 004a56b8]]
// Convention: unknown
// Signature: void FUN_004a55b0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a55e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a55b0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    iVar3 = 0x1cab9f4;
    do {
      iVar1 = FUN_004a35e0(iVar3,param_2);
      if (iVar1 != 0) goto LAB_004a55e8;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2e4;
    } while (iVar2 < _DAT_01cab9f0);
  }
  iVar1 = 0;
LAB_004a55e8:
  if (iVar1 != 0) {
    switch(*(uint *)(iVar1 + 0x140)) {
    case 0:
    case 1:
      FUN_0047be40(0x01C25594,"CFieldNotes::completeTask - entry '%s' was not a task",param_2);
      DAT_00616014 = 1;
      return;
    case 2:
    case 3:
      *(uint *)(iVar1 + 0x140) = 4;
      DAT_00616014 = 1;
      return;
    case 4:
      goto switchD_004a55fa_caseD_4;
    default:
      _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
      _DAT_01d046a4 = 0xa42;
      FUN_004e4500("Field note %s has invalid type %d",iVar1,*(uint *)(iVar1 + 0x140));
switchD_004a55fa_caseD_4:
      DAT_00616014 = 1;
      return;
    }
  }
  FUN_0047be40(0x01C25594,"CFieldNotes::completeTask - entry '%s' not found",param_2);
  DAT_00616014 = 1;
  return;
}
