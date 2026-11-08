// Name: FUN_004bdd00
// Address: 004bdd00
// Address Range: [[004bdd00, 004bde12]]
// Convention: unknown
// Signature: void FUN_004bdd00(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bdd33) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bdd00(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cc4470) {
    iVar3 = 0x1cc4474;
    do {
      iVar1 = FUN_004bbfd0(iVar3,param_2);
      if (iVar1 != 0) goto LAB_004bdd38;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2e4;
    } while (iVar2 < _DAT_01cc4470);
  }
  iVar1 = 0;
LAB_004bdd38:
  if (iVar1 != 0) {
    switch(*(uint *)(iVar1 + 0x140)) {
    case 0:
      *(uint *)(iVar1 + 0x140) = 1;
      DAT_0061d2e4 = 1;
      return;
    case 1:
    case 3:
    case 4:
    case 6:
      goto switchD_004bdd4a_caseD_1;
    case 2:
      *(uint *)(iVar1 + 0x140) = 3;
      DAT_0061d2e4 = 1;
      return;
    case 5:
      *(uint *)(iVar1 + 0x140) = 6;
      DAT_0061d2e4 = 1;
      return;
    default:
      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
      _DAT_01d1d404 = 0xa72;
      FUN_005030e0("Field note %s has invalid type %d",iVar1,*(uint *)(iVar1 + 0x140));
switchD_004bdd4a_caseD_1:
      DAT_0061d2e4 = 1;
      return;
    }
  }
  FUN_004943a0(0x01C3EB54,"CFieldNotes::enableEntry - entry '%s' not found",param_2);
  DAT_0061d2e4 = 1;
  return;
}
