// Name: unkaddr_004b9ab0.cpp_FUN_004ba440
// Address: 004ba440
// Address Range: [[004ba440, 004ba48d]]
// Convention: unknown
// Signature: int unkaddr_004b9ab0_cpp_FUN_004ba440(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int unkaddr_004b9ab0_cpp_FUN_004ba440(int param_1)

{
  SNotesSection *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01cc4470) {
    pSVar1 = SNotesSection_ARRAY_01cc4474;
    do {
      if ((pSVar1->first_page <= param_1) && (param_1 < pSVar1->first_page + pSVar1->page_count)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_01cc4470);
  }
  return -1;
}
