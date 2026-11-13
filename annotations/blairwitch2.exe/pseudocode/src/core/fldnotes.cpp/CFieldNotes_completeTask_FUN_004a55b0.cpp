// Name: core_fldnotes.cpp_CFieldNotes_completeTask_FUN_004a55b0
// Address: 004a55b0
// Address Range: [[004a55b0, 004a56b8]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_completeTask_FUN_004a55b0(CFieldNotes *this_ptr,char *entry_name)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a55e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_completeTask_FUN_004a55b0(CFieldNotes *this_ptr,char *entry_name)

{
  SNotesEntry *pSVar1;
  int iVar2;
  SNotesSection *this_ptr_00;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    this_ptr_00 = SNotesSection_ARRAY_01cab9f4;
    do {
      pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0(this_ptr_00,entry_name);
      if (pSVar1 != (SNotesEntry *)0x0) goto LAB_004a55e8;
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01cab9f0);
  }
  pSVar1 = (SNotesEntry *)0x0;
LAB_004a55e8:
  if (pSVar1 != (SNotesEntry *)0x0) {
    switch(pSVar1->kind) {
    case 0:
    case 1:
      shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
                (g_CEditorToolsPtr,"CFieldNotes::completeTask - entry '%s' was not a task");
      DAT_00616014 = 1;
      return;
    case 2:
    case 3:
      pSVar1->kind = 4;
      DAT_00616014 = 1;
      return;
    case 4:
      goto switchD_004a55fa_caseD_4;
    default:
      _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
      _DAT_01d046a4 = 0xa42;
      core_main_c_FUN_004e4500("Field note %s has invalid type %d",pSVar1,pSVar1->kind);
switchD_004a55fa_caseD_4:
      DAT_00616014 = 1;
      return;
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
            (g_CEditorToolsPtr,"CFieldNotes::completeTask - entry '%s' not found");
  DAT_00616014 = 1;
  return;
}
