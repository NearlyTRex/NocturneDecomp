// Name: core_netgame.cpp_FUN_00503bee
// Address: 00503bee
// Address Range: [[00503bee, 00503c32]]
// Convention: unknown
// Signature: int core_netgame_cpp_FUN_00503bee(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_netgame_cpp_FUN_00503bee(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01dc5c80) {
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x1dc5c84)) {
        return iVar2;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01dc5c80 * 0x74);
  }
  return -1;
}
