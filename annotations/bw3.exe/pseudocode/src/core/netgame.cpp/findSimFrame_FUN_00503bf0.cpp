// Name: core_netgame.cpp_findSimFrame_FUN_00503bf0
// Address: 00503bf0
// Address Range: [[00503bf0, 00503c32]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_findSimFrame_FUN_00503bf0(int sequence_number)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_findSimFrame_FUN_00503bf0(int sequence_number)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01dc5c80) {
    iVar1 = 0;
    do {
      if (sequence_number == *(int *)(iVar1 + 0x1dc5c84)) {
        return iVar2;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01dc5c80 * 0x74);
  }
  return -1;
}
