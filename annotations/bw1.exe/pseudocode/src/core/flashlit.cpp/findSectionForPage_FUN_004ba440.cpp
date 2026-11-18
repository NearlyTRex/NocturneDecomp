// Name: core_flashlit.cpp_findSectionForPage_FUN_004ba440
// Address: 004ba440
// Address Range: [[004ba440, 004ba48d]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_findSectionForPage_FUN_004ba440(int page)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_findSectionForPage_FUN_004ba440(int page)

{
  SNotesSection *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < g_INT_01cc4470) {
    pSVar1 = SNotesSection_ARRAY_01cc4474;
    do {
      if ((pSVar1->first_page <= page) && (page < pSVar1->first_page + pSVar1->page_count)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_INT_01cc4470);
  }
  return -1;
}
