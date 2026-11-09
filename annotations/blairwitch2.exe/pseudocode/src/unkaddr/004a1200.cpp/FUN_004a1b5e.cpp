// Name: unkaddr_004a1200.cpp_FUN_004a1b5e
// Address: 004a1b5e
// Address Range: [[004a1b5e, 004a1bad]]
// Convention: unknown
// Signature: int unkaddr_004a1200_cpp_FUN_004a1b5e(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int unkaddr_004a1200_cpp_FUN_004a1b5e(int param_1)

{
  SNotesSection *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    pSVar1 = SNotesSection_ARRAY_01cab9f4;
    do {
      if ((*(int *)&pSVar1->field_0x140 <= param_1) &&
         (param_1 < *(int *)&pSVar1->field_0x140 + *(int *)&pSVar1->field_0x144)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_01cab9f0);
  }
  return -1;
}
