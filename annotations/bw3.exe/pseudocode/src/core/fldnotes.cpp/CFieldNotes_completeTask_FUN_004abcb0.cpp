// Name: core_fldnotes.cpp_CFieldNotes_completeTask_FUN_004abcb0
// Address: 004abcb0
// Address Range: [[004abcb0, 004abdb8]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_completeTask_FUN_004abcb0(CFieldNotes *this_ptr,char *entry_name)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004abce3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_completeTask_FUN_004abcb0(CFieldNotes *this_ptr,char *entry_name)

{
  SNotesEntry *pSVar1;
  int iVar2;
  SNotesSection *this_ptr_00;
  
  iVar2 = 0;
  if (0 < _DAT_01d0d210) {
    this_ptr_00 = SNotesSection_ARRAY_01d0d214;
    do {
      pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a9c30(this_ptr_00,entry_name);
      if (pSVar1 != (SNotesEntry *)0x0) goto LAB_004abce8;
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01d0d210);
  }
  pSVar1 = (SNotesEntry *)0x0;
LAB_004abce8:
  if (pSVar1 != (SNotesEntry *)0x0) {
    switch(pSVar1->kind) {
    case 0:
    case 1:
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"CFieldNotes::completeTask - entry '%s' was not a task");
      DAT_005fe374 = 1;
      return;
    case 2:
    case 3:
      pSVar1->kind = 4;
      DAT_005fe374 = 1;
      return;
    case 4:
      goto switchD_004abcfa_caseD_4;
    default:
      _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
      _DAT_01d71de4 = 0xab4;
      core_main_c_FUN_004e4330("Field note %s has invalid type %d",pSVar1,pSVar1->kind);
switchD_004abcfa_caseD_4:
      DAT_005fe374 = 1;
      return;
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
            (g_CEditorToolsPtr,"CFieldNotes::completeTask - entry '%s' not found");
  DAT_005fe374 = 1;
  return;
}
