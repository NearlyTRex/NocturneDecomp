// Name: core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004aba10
// Address: 004aba10
// Address Range: [[004aba10, 004abb22]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004aba10(CFieldNotes *this_ptr,char *entry_name)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004aba43) */

void __cdecl core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004aba10(CFieldNotes *this_ptr,char *entry_name)

{
  SNotesEntry *pSVar1;
  int iVar2;
  SNotesSection *this_ptr_00;
  
  iVar2 = 0;
  if (0 < g_INT_01d0d210) {
    this_ptr_00 = SNotesSection_ARRAY_01d0d214;
    do {
      pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a9c30(this_ptr_00,entry_name);
      if (pSVar1 != (SNotesEntry *)0x0) goto LAB_004aba48;
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < g_INT_01d0d210);
  }
  pSVar1 = (SNotesEntry *)0x0;
LAB_004aba48:
  if (pSVar1 != (SNotesEntry *)0x0) {
    switch(pSVar1->kind) {
    case 0:
      pSVar1->kind = 1;
      g_INT_005fe374 = 1;
      return;
    case 1:
    case 3:
    case 4:
    case 6:
      goto switchD_004aba5a_caseD_1;
    case 2:
      pSVar1->kind = 3;
      g_INT_005fe374 = 1;
      return;
    case 5:
      pSVar1->kind = 6;
      g_INT_005fe374 = 1;
      return;
    default:
      g_CurrentFilename = "..\\core\\fldnotes.cpp";
      g_CurrentLineNumber = 2687;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Field note %s has invalid type %d");
switchD_004aba5a_caseD_1:
      g_INT_005fe374 = 1;
      return;
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
            (g_CEditorToolsPtr,"CFieldNotes::enableEntry - entry '%s' not found");
  g_INT_005fe374 = 1;
  return;
}
