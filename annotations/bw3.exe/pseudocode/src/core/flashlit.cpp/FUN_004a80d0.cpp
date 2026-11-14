// Name: core_flashlit.cpp_FUN_004a80d0
// Address: 004a80d0
// Address Range: [[004a80d0, 004a817c]]
// Convention: unknown
// Signature: int core_flashlit_cpp_FUN_004a80d0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_flashlit_cpp_FUN_004a80d0(int param_1,int param_2)

{
  SNotesSection *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  if (0 < _DAT_01d0d210) {
    pSVar1 = SNotesSection_ARRAY_01d0d214;
    iVar2 = 0;
    do {
      iVar4 = SNotesSection_ARRAY_01d0d214[iVar3].tab_x;
      iVar5 = *(int *)((int)&CAlphaBitmap_ARRAY_01d19bc0[0].width + iVar2) + iVar4;
      if ((_DAT_01d19ba8 < pSVar1->first_page) ||
         (pSVar1->first_page + pSVar1->page_count <= _DAT_01d19ba8)) {
        iVar4 = 0x246;
      }
      if ((((iVar4 <= param_1) && (SNotesSection_ARRAY_01d0d214[iVar3].tab_y <= param_2)) &&
          (param_1 < iVar5)) &&
         (param_2 < *(int *)((int)&CAlphaBitmap_ARRAY_01d19bc0[0].height + iVar2) +
                    SNotesSection_ARRAY_01d0d214[iVar3].tab_y)) {
        return iVar3;
      }
      pSVar1 = pSVar1 + 1;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < _DAT_01d0d210);
  }
  return -1;
}
