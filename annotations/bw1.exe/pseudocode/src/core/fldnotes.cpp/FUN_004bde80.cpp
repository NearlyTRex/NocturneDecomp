// Name: core_fldnotes.cpp_FUN_004bde80
// Address: 004bde80
// Address Range: [[004bde80, 004bdf82]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bde80(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bdeb7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004bde80(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SNotesSection *pSVar4;
  
  iVar3 = 0;
  if (0 < _DAT_01cc4470) {
    pSVar4 = SNotesSection_ARRAY_01cc4474;
    do {
      iVar1 = core_fldnotes_cpp_FUN_004bbfd0(pSVar4,param_2);
      if (iVar1 != 0) goto LAB_004bdebc;
      iVar3 = iVar3 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar3 < _DAT_01cc4470);
  }
  iVar1 = 0;
LAB_004bdebc:
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_004943a0(g_CEditorToolsPtr,"CFieldNotes::turnToEntry - entry '%s' not found",param_2);
    return;
  }
  if (DAT_0061d2e4 != 0) {
    core_fldnotes_cpp_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar3 = 0;
    core_fldnotes_cpp_FUN_004bb1c0(&g_STextViewInstance);
    DAT_0061d2e4 = 0;
    DAT_01cc4270 = 0;
    if (0 < _DAT_01cc4470) {
      pSVar4 = SNotesSection_ARRAY_01cc4474;
      do {
        iVar2 = core_fldnotes_cpp_FUN_004bc130(pSVar4,&g_STextViewInstance);
        if (iVar2 == 0) break;
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < _DAT_01cc4470);
    }
  }
  _DAT_01cc7b90 = *(uint *)(iVar1 + 0x144);
  return;
}
