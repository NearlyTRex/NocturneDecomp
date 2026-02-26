// Name: core_netgame.cpp_purgeOldSimFrames_FUN_0053f650
// Address: 0053f650
// Address Range: [[0053f650, 0053f6c0]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_0053f650(int min_sequence)

#include "nocturne.h"

void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_0053f650(int min_sequence)

{
  int iVar1;
  int iVar2;
  uint *src;
  
  iVar1 = 0;
  if (0 < g_SimFrameCount) {
    iVar2 = 0;
    src = &DAT_02f9c128;
    do {
      while (*(int *)((int)&g_SimFrameHistory + iVar2) < min_sequence) {
        g_SimFrameCount = g_SimFrameCount + -1;
        memmove
                  ((void *)((int)&g_SimFrameHistory + iVar2),src,(g_SimFrameCount - iVar1) * 100);
        if (g_SimFrameCount <= iVar1) {
          return;
        }
      }
      src = src + 0x19;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 100;
    } while (iVar1 < g_SimFrameCount);
  }
  return;
}
