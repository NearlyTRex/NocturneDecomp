// Name: core_fldnotes.cpp_FUN_004a5310
// Address: 004a5310
// Address Range: [[004a5310, 004a5422]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a5310(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a5343) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a5310(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  SNotesSection *pSVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    pSVar3 = SNotesSection_ARRAY_01cab9f4;
    do {
      iVar1 = core_fldnotes_cpp_FUN_004a35e0(pSVar3,param_2);
      if (iVar1 != 0) goto LAB_004a5348;
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar2 < _DAT_01cab9f0);
  }
  iVar1 = 0;
LAB_004a5348:
  if (iVar1 != 0) {
    switch(*(uint *)(iVar1 + 0x140)) {
    case 0:
      *(uint *)(iVar1 + 0x140) = 1;
      DAT_00616014 = 1;
      return;
    case 1:
    case 3:
    case 4:
    case 6:
      goto switchD_004a535a_caseD_1;
    case 2:
      *(uint *)(iVar1 + 0x140) = 3;
      DAT_00616014 = 1;
      return;
    case 5:
      *(uint *)(iVar1 + 0x140) = 6;
      DAT_00616014 = 1;
      return;
    default:
      _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
      _DAT_01d046a4 = 0xa0d;
      core_main_c_FUN_004e4500
                ("Field note %s has invalid type %d",iVar1,*(uint *)(iVar1 + 0x140));
switchD_004a535a_caseD_1:
      DAT_00616014 = 1;
      return;
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
            (g_CEditorToolsPtr,"CFieldNotes::enableEntry - entry '%s' not found");
  DAT_00616014 = 1;
  return;
}
