// Name: core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004bde80
// Address: 004bde80
// Address Range: [[004bde80, 004bdf82]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_turnToEntry_FUN_004bde80(CFieldNotes *this_ptr,char *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bdeb7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_turnToEntry_FUN_004bde80(CFieldNotes *this_ptr,char *param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  SNotesSection *pSVar4;
  
  iVar3 = 0;
  if (0 < _DAT_01cc4470) {
    pSVar4 = SNotesSection_ARRAY_01cc4474;
    do {
      iVar2 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(pSVar4,param_2);
      if (iVar2 != 0) goto LAB_004bdebc;
      iVar3 = iVar3 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar3 < _DAT_01cc4470);
  }
  iVar2 = 0;
LAB_004bdebc:
  if (iVar2 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
              (g_CEditorToolsPtr,"CFieldNotes::turnToEntry - entry '%s' not found");
    return;
  }
  if (DAT_0061d2e4 != 0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar3 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004bb1c0(&g_STextViewInstance);
    DAT_0061d2e4 = 0;
    DAT_01cc4270 = 0;
    if (0 < _DAT_01cc4470) {
      pSVar4 = SNotesSection_ARRAY_01cc4474;
      do {
        bVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004bc130(pSVar4,0x1cc7cd4);
        if (CONCAT31(extraout_var,bVar1) == 0) break;
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < _DAT_01cc4470);
    }
  }
  _DAT_01cc7b90 = *(uint *)(iVar2 + 0x144);
  return;
}
