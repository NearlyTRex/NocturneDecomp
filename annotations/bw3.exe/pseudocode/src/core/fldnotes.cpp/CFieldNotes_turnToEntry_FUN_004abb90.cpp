// Name: core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004abb90
// Address: 004abb90
// Address Range: [[004abb90, 004abc92]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_turnToEntry_FUN_004abb90(CFieldNotes *this_ptr,char *entry_name)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004abbc7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_turnToEntry_FUN_004abb90(CFieldNotes *this_ptr,char *entry_name)

{
  SNotesEntry *pSVar1;
  int iVar2;
  int iVar3;
  SNotesSection *pSVar4;
  
  iVar3 = 0;
  if (0 < _DAT_01d0d210) {
    pSVar4 = SNotesSection_ARRAY_01d0d214;
    do {
      pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a9c30(pSVar4,entry_name);
      if (pSVar1 != (SNotesEntry *)0x0) goto LAB_004abbcc;
      iVar3 = iVar3 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar3 < _DAT_01d0d210);
  }
  pSVar1 = (SNotesEntry *)0x0;
LAB_004abbcc:
  if (pSVar1 == (SNotesEntry *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"CFieldNotes::turnToEntry - entry '%s' not found");
    return;
  }
  if (DAT_005fe374 != 0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar3 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004a8e00(&g_STextViewInstance);
    DAT_005fe374 = 0;
    DAT_01d0d010 = 0;
    if (0 < _DAT_01d0d210) {
      pSVar4 = SNotesSection_ARRAY_01d0d214;
      do {
        iVar2 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a9d90(pSVar4,&g_STextViewInstance);
        if (iVar2 == 0) break;
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < _DAT_01d0d210);
    }
  }
  _DAT_01d19ba8 = pSVar1->page;
  return;
}
