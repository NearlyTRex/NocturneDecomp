// Name: core_netgame.cpp_findSimFrame_FUN_0052c2de
// Address: 0052c2de
// Address Range: [[0052c2de, 0052c324]]
// Convention: unknown
// Signature: int core_netgame_cpp_findSimFrame_FUN_0052c2de(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_netgame_cpp_findSimFrame_FUN_0052c2de(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01d715a8) {
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x1d715ac)) {
        return iVar2;
      }
      iVar1 = iVar1 + 0x6c;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d715a8 * 0x6c);
  }
  return -1;
}
