// Name: core_netgame.cpp_FUN_00503bf0
// Address: 00503bf0
// Address Range: [[00503bf0, 00503c32]]
// Convention: unknown
// Signature: int core_netgame_cpp_FUN_00503bf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_netgame_cpp_FUN_00503bf0(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = 0;
  if (0 < _DAT_01dc5c80) {
    iVar1 = 0;
    do {
      if (in_stack_00000004 == *(int *)(iVar1 + 0x1dc5c84)) {
        return iVar2;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01dc5c80 * 0x74);
  }
  return -1;
}
