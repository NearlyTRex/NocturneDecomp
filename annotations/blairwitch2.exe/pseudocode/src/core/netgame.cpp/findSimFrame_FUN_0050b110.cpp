// Name: core_netgame.cpp_findSimFrame_FUN_0050b110
// Address: 0050b110
// Address Range: [[0050b110, 0050b152]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_findSimFrame_FUN_0050b110(int sequence_number)

#include "nocturne.h"

int __cdecl core_netgame_cpp_findSimFrame_FUN_0050b110(int sequence_number)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < g_INT_01d54640) {
    iVar1 = 0;
    do {
      if (sequence_number ==
          *(int *)((int)g_SSimFrame_ARRAY_01d54644[0].player_input + iVar1 + -0xc)) {
        return iVar2;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_INT_01d54640 * 0x74);
  }
  return -1;
}
