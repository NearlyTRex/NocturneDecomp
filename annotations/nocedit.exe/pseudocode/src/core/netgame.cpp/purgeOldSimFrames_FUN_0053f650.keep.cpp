// Name: core_netgame.cpp_purgeOldSimFrames_FUN_0053f650
// Address: 0053f650
// MANUAL RECONSTRUCTION
// Address Range: [[0053f650, 0053f6c0]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_0053f650(int min_sequence)

#include "nocturne.h"

void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_0053f650(int min_sequence)

{
  int iVar1;

  iVar1 = 0;
  if (0 < g_SimFrameCount) {
    do {
      while (g_SimFrameHistory[iVar1].sequence_number < min_sequence) {
        g_SimFrameCount = g_SimFrameCount + -1;
        memmove(&g_SimFrameHistory[iVar1],&g_SimFrameHistory[iVar1 + 1],
                (g_SimFrameCount - iVar1) * sizeof(*g_SimFrameHistory));
        if (g_SimFrameCount <= iVar1) {
          return;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < g_SimFrameCount);
  }
  return;
}
