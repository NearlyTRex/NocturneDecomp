// Name: core_fldnotes.cpp_CFieldNotes_enableEntry_FUN_004bdd00
// Address: 004bdd00
// Address Range: [[004bdd00, 004bde12]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004bdd00(CFieldNotes *this_ptr,char *entry_name)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bdd33) */

void __cdecl core_fldnotes_cpp_CFieldNotes_enableEntry_FUN_004bdd00(CFieldNotes *this_ptr,char *entry_name)

{
  SNotesEntry *pSVar1;
  int iVar2;
  SNotesSection *this_ptr_00;
  
  iVar2 = 0;
  if (0 < g_INT_01cc4470) {
    this_ptr_00 = SNotesSection_ARRAY_01cc4474;
    do {
      pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(this_ptr_00,entry_name);
      if (pSVar1 != (SNotesEntry *)0x0) goto LAB_004bdd38;
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < g_INT_01cc4470);
  }
  pSVar1 = (SNotesEntry *)0x0;
LAB_004bdd38:
  if (pSVar1 != (SNotesEntry *)0x0) {
    switch(pSVar1->kind) {
    case 0:
      pSVar1->kind = 1;
      g_INT_0061d2e4 = 1;
      return;
    case 1:
    case 3:
    case 4:
    case 6:
      goto switchD_004bdd4a_caseD_1;
    case 2:
      pSVar1->kind = 3;
      g_INT_0061d2e4 = 1;
      return;
    case 5:
      pSVar1->kind = 6;
      g_INT_0061d2e4 = 1;
      return;
    default:
      g_CHAR_PTR_01d1d400 = "..\\core\\fldnotes.cpp";
      g_INT_01d1d404 = 0xa72;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Field note %s has invalid type %d");
switchD_004bdd4a_caseD_1:
      g_INT_0061d2e4 = 1;
      return;
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
            (g_CEditorToolsPtr,"CFieldNotes::enableEntry - entry '%s' not found");
  g_INT_0061d2e4 = 1;
  return;
}
