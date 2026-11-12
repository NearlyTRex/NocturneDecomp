// Name: core_fldnotes.cpp_CFieldNotes_completeTask_FUN_004bdfa0
// Address: 004bdfa0
// Address Range: [[004bdfa0, 004be0a8]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_completeTask_FUN_004bdfa0(CFieldNotes *this_ptr,char *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bdfd3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_completeTask_FUN_004bdfa0(CFieldNotes *this_ptr,char *param_2)

{
  int iVar1;
  int iVar2;
  SNotesSection *this_ptr_00;
  
  iVar2 = 0;
  if (0 < _DAT_01cc4470) {
    this_ptr_00 = SNotesSection_ARRAY_01cc4474;
    do {
      iVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(this_ptr_00,param_2);
      if (iVar1 != 0) goto LAB_004bdfd8;
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01cc4470);
  }
  iVar1 = 0;
LAB_004bdfd8:
  if (iVar1 != 0) {
    switch(*(uint *)(iVar1 + 0x140)) {
    case 0:
    case 1:
      shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                (g_CEditorToolsPtr,"CFieldNotes::completeTask - entry '%s' was not a task");
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
      core_main_c_FUN_005030e0
                ("Field note %s has invalid type %d",iVar1,*(uint *)(iVar1 + 0x140));
switchD_004bdfea_caseD_4:
      DAT_0061d2e4 = 1;
      return;
    }
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
            (g_CEditorToolsPtr,"CFieldNotes::completeTask - entry '%s' not found");
  DAT_0061d2e4 = 1;
  return;
}
