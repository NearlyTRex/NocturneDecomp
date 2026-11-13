// Name: core_flashlit.cpp_FUN_004a1b60
// Address: 004a1b60
// Address Range: [[004a1b60, 004a1bad]]
// Convention: unknown
// Signature: int core_flashlit_cpp_FUN_004a1b60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_flashlit_cpp_FUN_004a1b60(void)

{
  SNotesSection *pSVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    pSVar1 = SNotesSection_ARRAY_01cab9f4;
    do {
      if ((pSVar1->first_page <= in_stack_00000004) &&
         (in_stack_00000004 < pSVar1->first_page + pSVar1->page_count)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_01cab9f0);
  }
  return -1;
}
