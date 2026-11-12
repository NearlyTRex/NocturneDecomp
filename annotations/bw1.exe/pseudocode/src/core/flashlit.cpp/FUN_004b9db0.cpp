// Name: core_flashlit.cpp_FUN_004b9db0
// Address: 004b9db0
// Address Range: [[004b9db0, 004b9dfe]]
// Convention: unknown
// Signature: int core_flashlit_cpp_FUN_004b9db0(char *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_flashlit_cpp_FUN_004b9db0(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  SNotesSection *this_ptr;
  
  iVar2 = 0;
  if (0 < _DAT_01cc4470) {
    this_ptr = SNotesSection_ARRAY_01cc4474;
    do {
      iVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004bbfd0(this_ptr,param_1);
      if (iVar1 != 0) {
        if (param_2 != (int *)0x0) {
          *param_2 = iVar2;
        }
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      this_ptr = this_ptr + 1;
    } while (iVar2 < _DAT_01cc4470);
  }
  return 0;
}
