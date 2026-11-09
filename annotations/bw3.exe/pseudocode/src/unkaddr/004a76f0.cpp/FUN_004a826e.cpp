// Name: unkaddr_004a76f0.cpp_FUN_004a826e
// Address: 004a826e
// Address Range: [[004a826e, 004a82e7]]
// Convention: unknown
// Signature: undefined4 unkaddr_004a76f0_cpp_FUN_004a826e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkaddr_004a76f0_cpp_FUN_004a826e(void)

{
  int iVar1;
  SNotesSection *pSVar2;
  int iVar3;
  
  core_fldnotes_cpp_FUN_004a8eb0(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
  iVar3 = 0;
  core_fldnotes_cpp_FUN_004a8e00(&g_STextViewInstance);
  DAT_005fe374 = 0;
  DAT_01d0d010 = 0;
  if (0 < _DAT_01d0d210) {
    pSVar2 = SNotesSection_ARRAY_01d0d214;
    do {
      iVar1 = core_fldnotes_cpp_FUN_004a9d90(pSVar2,&g_STextViewInstance);
      if (iVar1 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar3 < _DAT_01d0d210);
  }
  return 1;
}
