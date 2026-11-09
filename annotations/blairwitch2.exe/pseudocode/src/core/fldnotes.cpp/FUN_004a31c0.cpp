// Name: core_fldnotes.cpp_FUN_004a31c0
// Address: 004a31c0
// Address Range: [[004a31c0, 004a3236]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a31c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a31c0(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x10)) {
    do {
      pvVar1 = realloc
                         (*(void **)(param_1 + 0x3c),(*(int *)(param_1 + 0x38) + 1) * 0x144);
      *(void **)(param_1 + 0x3c) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
        _DAT_01d046a4 = 0x62d;
        core_main_c_FUN_004e4500("Out of memory");
      }
      core_fldnotes_cpp_FUN_004a2690(*(int *)(param_1 + 0x38) * 0x144 + *(int *)(param_1 + 0x3c));
      iVar2 = *(int *)(param_1 + 0x38) + 1;
      *(int *)(param_1 + 0x38) = iVar2;
    } while (iVar2 <= *(int *)(param_1 + 0x10));
  }
  return;
}
