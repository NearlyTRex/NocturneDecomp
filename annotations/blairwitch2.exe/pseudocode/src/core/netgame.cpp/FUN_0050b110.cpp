// Name: core_netgame.cpp_FUN_0050b110
// Address: 0050b110
// Address Range: [[0050b110, 0050b152]]
// Convention: unknown
// Signature: int core_netgame_cpp_FUN_0050b110(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_netgame_cpp_FUN_0050b110(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = 0;
  if (0 < _DAT_01d54640) {
    iVar1 = 0;
    do {
      if (in_stack_00000004 == *(int *)(iVar1 + 0x1d54644)) {
        return iVar2;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d54640 * 0x74);
  }
  return -1;
}
