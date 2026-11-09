// Name: core_fldnotes.cpp_FUN_004a5490
// Address: 004a5490
// Address Range: [[004a5490, 004a5594]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a5490(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a54c7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a5490(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SNotesSection *pSVar4;
  
  iVar3 = 0;
  if (0 < _DAT_01cab9f0) {
    pSVar4 = SNotesSection_ARRAY_01cab9f4;
    do {
      iVar1 = core_fldnotes_cpp_FUN_004a35e0(pSVar4,param_2);
      if (iVar1 != 0) goto LAB_004a54cc;
      iVar3 = iVar3 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar3 < _DAT_01cab9f0);
  }
  iVar1 = 0;
LAB_004a54cc:
  if (iVar1 == 0) {
    shape_edittool_cpp_FUN_0047be40(g_CEditorToolsPtr,"CFieldNotes::turnToEntry - entry '%s' not found",param_2);
    return;
  }
  if (DAT_00616014 != 0) {
    core_fldnotes_cpp_FUN_004a2890(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar3 = 0;
    core_fldnotes_cpp_FUN_004a27e0(&g_STextViewInstance);
    DAT_01cab7f0 = 0;
    if (0 < _DAT_01cab9f0) {
      pSVar4 = SNotesSection_ARRAY_01cab9f4;
      do {
        iVar2 = core_fldnotes_cpp_FUN_004a3740(pSVar4,&g_STextViewInstance);
        if (iVar2 == 0) goto LAB_004a554b;
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < _DAT_01cab9f0);
    }
    DAT_00616014 = 0;
  }
LAB_004a554b:
  _DAT_01caf110 = *(uint *)(iVar1 + 0x144);
  return;
}
