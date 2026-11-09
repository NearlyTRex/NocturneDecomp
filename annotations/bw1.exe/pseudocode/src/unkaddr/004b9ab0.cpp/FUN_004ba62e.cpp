// Name: unkaddr_004b9ab0.cpp_FUN_004ba62e
// Address: 004ba62e
// Address Range: [[004ba62e, 004ba6a7]]
// Convention: unknown
// Signature: undefined4 unkaddr_004b9ab0_cpp_FUN_004ba62e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkaddr_004b9ab0_cpp_FUN_004ba62e(void)

{
  int iVar1;
  SNotesSection *pSVar2;
  int iVar3;
  
  core_fldnotes_cpp_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
  iVar3 = 0;
  core_fldnotes_cpp_FUN_004bb1c0(&g_STextViewInstance);
  DAT_0061d2e4 = 0;
  DAT_01cc4270 = 0;
  if (0 < _DAT_01cc4470) {
    pSVar2 = SNotesSection_ARRAY_01cc4474;
    do {
      iVar1 = core_fldnotes_cpp_FUN_004bc130(pSVar2,&g_STextViewInstance);
      if (iVar1 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar3 < _DAT_01cc4470);
  }
  return 1;
}
