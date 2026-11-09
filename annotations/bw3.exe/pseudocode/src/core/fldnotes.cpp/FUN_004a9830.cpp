// Name: core_fldnotes.cpp_FUN_004a9830
// Address: 004a9830
// Address Range: [[004a9830, 004a98a6]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a9830(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a9830(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x10)) {
    do {
      pvVar1 = realloc
                         (*(void **)(param_1 + 0x3c),(*(int *)(param_1 + 0x38) + 1) * 0x144);
      *(void **)(param_1 + 0x3c) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
        _DAT_01d71de4 = 0x67d;
        core_main_c_FUN_004e4330("Out of memory");
      }
      core_fldnotes_cpp_FUN_004a8cb0(*(int *)(param_1 + 0x38) * 0x144 + *(int *)(param_1 + 0x3c));
      iVar2 = *(int *)(param_1 + 0x38) + 1;
      *(int *)(param_1 + 0x38) = iVar2;
    } while (iVar2 <= *(int *)(param_1 + 0x10));
  }
  return;
}
