// Name: core_netgame.cpp_findSimFrame_FUN_0052c2e0
// Address: 0052c2e0
// Address Range: [[0052c2e0, 0052c324]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_findSimFrame_FUN_0052c2e0(int sequence_number)

#include "nocturne.h"

int __cdecl core_netgame_cpp_findSimFrame_FUN_0052c2e0(int sequence_number)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < g_SimFrameCount) {
    iVar1 = 0;
    do {
      if (sequence_number ==
          *(int *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar1 + -0xc)) {
        return iVar2;
      }
      iVar1 = iVar1 + 0x6c;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_SimFrameCount * 0x6c);
  }
  return -1;
}
