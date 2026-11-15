// Name: core_netgame.cpp_findSimFrame_FUN_0050b110
// Address: 0050b110
// Address Range: [[0050b110, 0050b152]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_findSimFrame_FUN_0050b110(int sequence_number)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_findSimFrame_FUN_0050b110(int sequence_number)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01d54640) {
    iVar1 = 0;
    do {
      if (sequence_number == *(int *)(iVar1 + 0x1d54644)) {
        return iVar2;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d54640 * 0x74);
  }
  return -1;
}
