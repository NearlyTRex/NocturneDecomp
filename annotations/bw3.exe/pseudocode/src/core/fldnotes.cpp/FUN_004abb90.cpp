// Name: core_fldnotes.cpp_FUN_004abb90
// Address: 004abb90
// Address Range: [[004abb90, 004abc92]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004abb90(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004abbc7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004abb90(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SNotesSection *pSVar4;
  
  iVar3 = 0;
  if (0 < _DAT_01d0d210) {
    pSVar4 = SNotesSection_ARRAY_01d0d214;
    do {
      iVar1 = core_fldnotes_cpp_FUN_004a9c30(pSVar4,param_2);
      if (iVar1 != 0) goto LAB_004abbcc;
      iVar3 = iVar3 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar3 < _DAT_01d0d210);
  }
  iVar1 = 0;
LAB_004abbcc:
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"CFieldNotes::turnToEntry - entry '%s' not found");
    return;
  }
  if (DAT_005fe374 != 0) {
    core_fldnotes_cpp_FUN_004a8eb0(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar3 = 0;
    core_fldnotes_cpp_FUN_004a8e00(&g_STextViewInstance);
    DAT_005fe374 = 0;
    DAT_01d0d010 = 0;
    if (0 < _DAT_01d0d210) {
      pSVar4 = SNotesSection_ARRAY_01d0d214;
      do {
        iVar2 = core_fldnotes_cpp_FUN_004a9d90(pSVar4,&g_STextViewInstance);
        if (iVar2 == 0) break;
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < _DAT_01d0d210);
    }
  }
  _DAT_01d19ba8 = *(uint *)(iVar1 + 0x144);
  return;
}
