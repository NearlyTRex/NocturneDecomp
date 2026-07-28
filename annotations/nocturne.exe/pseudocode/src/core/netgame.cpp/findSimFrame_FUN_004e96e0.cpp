// Name: core_netgame.cpp_findSimFrame_FUN_004e96e0
// Address: 004e96e0
// Address Range: [[004e96e0, 004e9722]]
// Convention: unknown
// Signature: int core_netgame_cpp_findSimFrame_FUN_004e96e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_netgame_cpp_findSimFrame_FUN_004e96e0(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = 0;
  if (0 < _DAT_01d09c00) {
    iVar1 = 0;
    do {
      if (in_stack_00000004 == *(int *)(iVar1 + 0x1d09c04)) {
        return iVar2;
      }
      iVar1 = iVar1 + 100;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d09c00 * 100);
  }
  return -1;
}
