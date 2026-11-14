// Name: core_zombie.cpp_FUN_005bf0e0
// Address: 005bf0e0
// Address Range: [[005bf0e0, 005bf115]]
// Convention: unknown
// Signature: int * core_zombie_cpp_FUN_005bf0e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * core_zombie_cpp_FUN_005bf0e0(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  piVar1 = (int *)&DAT_02c9eb38;
  iVar2 = 0;
  if (0 < _DAT_02c9eb34) {
    do {
      if ((in_stack_00000004 == *piVar1) && (piVar1 != in_stack_00000008)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_02c9eb34);
  }
  return (int *)0x0;
}
