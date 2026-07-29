// Name: core_netgame.cpp_findSimFrame_FUN_004e96e0
// Address: 004e96e0
// Address Range: [[004e96e0, 004e9722]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_findSimFrame_FUN_004e96e0(int sequence_number)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_findSimFrame_FUN_004e96e0(int sequence_number)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01d09c00) {
    iVar1 = 0;
    do {
      if (sequence_number == *(int *)(iVar1 + 0x1d09c04)) {
        return iVar2;
      }
      iVar1 = iVar1 + 100;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d09c00 * 100);
  }
  return -1;
}
