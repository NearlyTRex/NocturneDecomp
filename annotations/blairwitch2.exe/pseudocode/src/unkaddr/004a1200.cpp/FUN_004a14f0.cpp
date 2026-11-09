// Name: unkaddr_004a1200.cpp_FUN_004a14f0
// Address: 004a14f0
// Address Range: [[004a14f0, 004a153e]]
// Convention: unknown
// Signature: int unkaddr_004a1200_cpp_FUN_004a14f0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int unkaddr_004a1200_cpp_FUN_004a14f0(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  SNotesSection *pSVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    pSVar3 = SNotesSection_ARRAY_01cab9f4;
    do {
      iVar1 = core_fldnotes_cpp_FUN_004a35e0(pSVar3,param_1);
      if (iVar1 != 0) {
        if (param_2 != (int *)0x0) {
          *param_2 = iVar2;
        }
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar2 < _DAT_01cab9f0);
  }
  return 0;
}
