// Name: FUN_004bdfa0
// Address: 004bdfa0
// Address Range: [[004bdfa0, 004be0a8]]
// Convention: unknown
// Signature: void FUN_004bdfa0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bdfd3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bdfa0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cc4470) {
    iVar3 = 0x1cc4474;
    do {
      iVar1 = FUN_004bbfd0(iVar3,param_2);
      if (iVar1 != 0) goto LAB_004bdfd8;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2e4;
    } while (iVar2 < _DAT_01cc4470);
  }
  iVar1 = 0;
LAB_004bdfd8:
  if (iVar1 != 0) {
    switch(*(uint *)(iVar1 + 0x140)) {
    case 0:
    case 1:
      FUN_004943a0(0x01C3EB54,"CFieldNotes::completeTask - entry '%s' was not a task",param_2);
      DAT_0061d2e4 = 1;
      return;
    case 2:
    case 3:
      *(uint *)(iVar1 + 0x140) = 4;
      DAT_0061d2e4 = 1;
      return;
    case 4:
      goto switchD_004bdfea_caseD_4;
    default:
      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
      _DAT_01d1d404 = 0xaa7;
      FUN_005030e0("Field note %s has invalid type %d",iVar1,*(uint *)(iVar1 + 0x140));
switchD_004bdfea_caseD_4:
      DAT_0061d2e4 = 1;
      return;
    }
  }
  FUN_004943a0(0x01C3EB54,"CFieldNotes::completeTask - entry '%s' not found",param_2);
  DAT_0061d2e4 = 1;
  return;
}
