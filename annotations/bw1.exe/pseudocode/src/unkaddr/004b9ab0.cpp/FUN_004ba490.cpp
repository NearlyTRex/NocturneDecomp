// Name: unkaddr_004b9ab0.cpp_FUN_004ba490
// Address: 004ba490
// Address Range: [[004ba490, 004ba53c]]
// Convention: unknown
// Signature: int unkaddr_004b9ab0_cpp_FUN_004ba490(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int unkaddr_004b9ab0_cpp_FUN_004ba490(int param_1,int param_2)

{
  SNotesSection *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  if (0 < _DAT_01cc4470) {
    pSVar1 = SNotesSection_ARRAY_01cc4474;
    iVar2 = 0;
    do {
      iVar4 = *(int *)&SNotesSection_ARRAY_01cc4474[iVar3].field_0x148;
      iVar5 = *(int *)((int)&CAlphaBitmap_ARRAY_01cc7ba8[0].width + iVar2) + iVar4;
      if ((_DAT_01cc7b90 < *(int *)&pSVar1->field_0x140) ||
         (*(int *)&pSVar1->field_0x140 + *(int *)&pSVar1->field_0x144 <= _DAT_01cc7b90)) {
        iVar4 = 0x246;
      }
      if ((((iVar4 <= param_1) &&
           (*(int *)&SNotesSection_ARRAY_01cc4474[iVar3].field_0x14c <= param_2)) &&
          (param_1 < iVar5)) &&
         (param_2 < *(int *)((int)&CAlphaBitmap_ARRAY_01cc7ba8[0].height + iVar2) +
                    *(int *)&SNotesSection_ARRAY_01cc4474[iVar3].field_0x14c)) {
        return iVar3;
      }
      pSVar1 = pSVar1 + 1;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < _DAT_01cc4470);
  }
  return -1;
}
