// Name: core_flashlit.cpp_findSectionForPage_FUN_004a8080
// Address: 004a8080
// Address Range: [[004a8080, 004a80cd]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_findSectionForPage_FUN_004a8080(int page)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_findSectionForPage_FUN_004a8080(int page)

{
  SNotesSection *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < g_INT_01d0d210) {
    pSVar1 = SNotesSection_ARRAY_01d0d214;
    do {
      if ((pSVar1->first_page <= page) && (page < pSVar1->first_page + pSVar1->page_count)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_INT_01d0d210);
  }
  return -1;
}
