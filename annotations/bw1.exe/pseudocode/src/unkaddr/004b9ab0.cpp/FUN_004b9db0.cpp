// Name: unkaddr_004b9ab0.cpp_FUN_004b9db0
// Address: 004b9db0
// Address Range: [[004b9db0, 004b9dfe]]
// Convention: unknown
// Signature: int unkaddr_004b9ab0_cpp_FUN_004b9db0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int unkaddr_004b9ab0_cpp_FUN_004b9db0(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  SNotesSection *pSVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cc4470) {
    pSVar3 = SNotesSection_ARRAY_01cc4474;
    do {
      iVar1 = core_fldnotes_cpp_FUN_004bbfd0(pSVar3,param_1);
      if (iVar1 != 0) {
        if (param_2 != (int *)0x0) {
          *param_2 = iVar2;
        }
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar2 < _DAT_01cc4470);
  }
  return 0;
}
