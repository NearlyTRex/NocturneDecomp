// Name: core_asgaya.cpp_FUN_005a1e60
// Address: 005a1e60
// Address Range: [[005a1e60, 005a1e95]]
// Convention: unknown
// Signature: int * core_asgaya_cpp_FUN_005a1e60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * core_asgaya_cpp_FUN_005a1e60(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  piVar1 = (int *)&DAT_02d24d84;
  iVar2 = 0;
  if (0 < _DAT_02d24d80) {
    do {
      if ((in_stack_00000004 == *piVar1) && (piVar1 != in_stack_00000008)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_02d24d80);
  }
  return (int *)0x0;
}
