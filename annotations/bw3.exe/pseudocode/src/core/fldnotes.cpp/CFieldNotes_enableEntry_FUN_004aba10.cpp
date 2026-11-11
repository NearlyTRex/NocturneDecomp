// Name: core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004aba10
// Address: 004aba10
// Address Range: [[004aba10, 004abb22]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004aba10(CFieldNotes *this_ptr,char *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004aba43) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004aba10(CFieldNotes *this_ptr,char *param_2)

{
  int iVar1;
  int iVar2;
  SNotesSection *this_ptr_00;
  
  iVar2 = 0;
  if (0 < _DAT_01d0d210) {
    this_ptr_00 = SNotesSection_ARRAY_01d0d214;
    do {
      iVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a9c30(this_ptr_00,param_2);
      if (iVar1 != 0) goto LAB_004aba48;
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
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
      core_main_c_FUN_004e4330
                ("Field note %s has invalid type %d",iVar1,*(uint *)(iVar1 + 0x140));
switchD_004aba5a_caseD_1:
      DAT_005fe374 = 1;
      return;
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
            (g_CEditorToolsPtr,"CFieldNotes::enableEntry - entry '%s' not found");
  DAT_005fe374 = 1;
  return;
}
