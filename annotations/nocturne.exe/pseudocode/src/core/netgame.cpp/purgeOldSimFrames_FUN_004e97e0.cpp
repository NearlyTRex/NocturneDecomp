// Name: core_netgame.cpp_purgeOldSimFrames_FUN_004e97e0
// Address: 004e97e0
// Address Range: [[004e97e0, 004e9850]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_004e97e0(int min_sequence)

#include "nocturne.h"

void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_004e97e0(int min_sequence)

{
  int iVar1;
  int iVar2;
  SSimFrame *src;
  
  iVar1 = 0;
  if (0 < g_SimFrameCount) {
    iVar2 = 0;
    src = g_SimFrameHistory + 1;
    do {
      while (*(int *)((int)g_SimFrameHistory[0].player_input + iVar2 + -0xc) < min_sequence) {
        g_SimFrameCount = g_SimFrameCount + -1;
        memmove
                  ((void *)((int)g_SimFrameHistory[0].player_input + iVar2 + -0xc),src,
                   (g_SimFrameCount - iVar1) * 100);
        if (g_SimFrameCount <= iVar1) {
          return;
        }
      }
      src = src + 1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 100;
    } while (iVar1 < g_SimFrameCount);
  }
  return;
}
