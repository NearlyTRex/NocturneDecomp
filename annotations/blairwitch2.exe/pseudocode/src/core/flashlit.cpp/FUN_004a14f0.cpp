// Name: core_flashlit.cpp_FUN_004a14f0
// Address: 004a14f0
// Address Range: [[004a14f0, 004a153e]]
// Convention: unknown
// Signature: SNotesEntry * core_flashlit_cpp_FUN_004a14f0(char *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SNotesEntry * core_flashlit_cpp_FUN_004a14f0(char *param_1,int *param_2)

{
  SNotesEntry *pSVar1;
  int iVar2;
  SNotesSection *this_ptr;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    this_ptr = SNotesSection_ARRAY_01cab9f4;
    do {
      pSVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0(this_ptr,param_1);
      if (pSVar1 != (SNotesEntry *)0x0) {
        if (param_2 != (int *)0x0) {
          *param_2 = iVar2;
        }
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      this_ptr = this_ptr + 1;
    } while (iVar2 < _DAT_01cab9f0);
  }
  return (SNotesEntry *)0x0;
}
