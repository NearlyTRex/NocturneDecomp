// Name: core_flashlit.cpp_hitTestSectionTab_FUN_004a1bb0
// Address: 004a1bb0
// Address Range: [[004a1bb0, 004a1c5c]]
// Convention: __cdecl
// Signature: int __cdecl core_flashlit_cpp_hitTestSectionTab_FUN_004a1bb0(int x,int y)

#include "nocturne.h"

int __cdecl core_flashlit_cpp_hitTestSectionTab_FUN_004a1bb0(int x,int y)

{
  SNotesSection *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  if (0 < g_INT_01cab9f0) {
    pSVar1 = SNotesSection_ARRAY_01cab9f4;
    iVar2 = 0;
    do {
      iVar4 = SNotesSection_ARRAY_01cab9f4[iVar3].tab_x;
      iVar5 = *(int *)((int)&CAlphaBitmap_ARRAY_01caf128[0].width + iVar2) + iVar4;
      if ((g_INT_01caf110 < pSVar1->first_page) ||
         (pSVar1->first_page + pSVar1->page_count <= g_INT_01caf110)) {
        iVar4 = 0x246;
      }
      if ((((iVar4 <= x) && (SNotesSection_ARRAY_01cab9f4[iVar3].tab_y <= y)) && (x < iVar5)) &&
         (y < *(int *)((int)&CAlphaBitmap_ARRAY_01caf128[0].height + iVar2) +
              SNotesSection_ARRAY_01cab9f4[iVar3].tab_y)) {
        return iVar3;
      }
      pSVar1 = pSVar1 + 1;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < g_INT_01cab9f0);
  }
  return -1;
}
