// Name: core_zombie.cpp_FUN_0059a070
// Address: 0059a070
// Address Range: [[0059a070, 0059a0a5]]
// Convention: unknown
// Signature: int * core_zombie_cpp_FUN_0059a070(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * core_zombie_cpp_FUN_0059a070(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  piVar1 = (int *)&DAT_026672ac;
  iVar2 = 0;
  if (0 < _DAT_026672a8) {
    do {
      if ((in_stack_00000004 == *piVar1) && (piVar1 != in_stack_00000008)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < _DAT_026672a8);
  }
  return (int *)0x0;
}
