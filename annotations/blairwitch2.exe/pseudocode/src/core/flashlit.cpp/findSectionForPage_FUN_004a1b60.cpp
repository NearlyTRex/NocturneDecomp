// Name: core_flashlit.cpp_findSectionForPage_FUN_004a1b60
// Address: 004a1b60
// Address Range: [[004a1b60, 004a1bad]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_findSectionForPage_FUN_004a1b60(int page)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_findSectionForPage_FUN_004a1b60(int page)

{
  SNotesSection *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < g_INT_01cab9f0) {
    pSVar1 = SNotesSection_ARRAY_01cab9f4;
    do {
      if ((pSVar1->first_page <= page) && (page < pSVar1->first_page + pSVar1->page_count)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_INT_01cab9f0);
  }
  return -1;
}
