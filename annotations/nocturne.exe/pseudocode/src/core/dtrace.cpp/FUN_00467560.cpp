// Name: FUN_00467560
// Address: 00467560
// Address Range: [[00467560, 004675d9]]
// Convention: unknown
// Signature: void FUN_00467560(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467560(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = (int *)shape_memdbg_cpp_malloc_FUN_00564c18(iVar3 * 0x38 + 4);
  piVar2 = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 1;
    *piVar1 = iVar3;
  }
  *(int **)(param_1 + 8) = piVar2;
  iVar3 = shape_memdbg_cpp_malloc_FUN_00564c18(*(uint *)(param_1 + 4));
  *(int *)(param_1 + 0xc) = iVar3;
  if ((*(int *)(param_1 + 8) != 0) && (iVar3 != 0)) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\dtrace.cpp";
  _DAT_01cc4804 = 0xf9;
  FUN_004c8440("CDemonRaytrace::allocTriList - Out of memory!");
  return;
}
