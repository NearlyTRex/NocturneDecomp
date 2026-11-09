// Name: unkaddr_004a1200.cpp_FUN_004a1dcc
// Address: 004a1dcc
// Address Range: [[004a1dcc, 004a1e52]]
// Convention: unknown
// Signature: void unkaddr_004a1200_cpp_FUN_004a1dcc(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkaddr_004a1200_cpp_FUN_004a1dcc(void)

{
  int iVar1;
  SNotesSection *pSVar2;
  int iVar3;
  
  if (DAT_00616014 == 0) {
    return;
  }
  core_fldnotes_cpp_FUN_004a2890(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
  iVar3 = 0;
  core_fldnotes_cpp_FUN_004a27e0(&g_STextViewInstance);
  DAT_01cab7f0 = 0;
  if (0 < _DAT_01cab9f0) {
    pSVar2 = SNotesSection_ARRAY_01cab9f4;
    do {
      iVar1 = core_fldnotes_cpp_FUN_004a3740(pSVar2,&g_STextViewInstance);
      if (iVar1 == 0) {
        return;
      }
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar3 < _DAT_01cab9f0);
  }
  DAT_00616014 = 0;
  return;
}
