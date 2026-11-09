// Name: unkaddr_004a76f0.cpp_FUN_004a8080
// Address: 004a8080
// Address Range: [[004a8080, 004a80cd]]
// Convention: unknown
// Signature: int unkaddr_004a76f0_cpp_FUN_004a8080(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int unkaddr_004a76f0_cpp_FUN_004a8080(int param_1)

{
  SNotesSection *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01d0d210) {
    pSVar1 = SNotesSection_ARRAY_01d0d214;
    do {
      if ((*(int *)&pSVar1->field_0x140 <= param_1) &&
         (param_1 < *(int *)&pSVar1->field_0x140 + *(int *)&pSVar1->field_0x144)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < _DAT_01d0d210);
  }
  return -1;
}
