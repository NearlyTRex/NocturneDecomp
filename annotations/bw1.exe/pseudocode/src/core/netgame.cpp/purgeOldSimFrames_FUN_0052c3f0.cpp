// Name: core_netgame.cpp_purgeOldSimFrames_FUN_0052c3f0
// Address: 0052c3f0
// Address Range: [[0052c3f0, 0052c460]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_0052c3f0(int min_sequence)

#include "nocturne.h"

void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_0052c3f0(int min_sequence)

{
  int iVar1;
  int iVar2;
  SSimFrame *src;
  
  iVar1 = 0;
  if (0 < g_INT_01d715a8) {
    iVar2 = 0;
    src = g_SSimFrame_ARRAY_01d715ac + 1;
    do {
      while (*(int *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar2 + -0xc) < min_sequence
            ) {
        g_INT_01d715a8 = g_INT_01d715a8 + -1;
        memmove
                  ((void *)((int)g_SSimFrame_ARRAY_01d715ac[0].player_input + iVar2 + -0xc),src,
                   (g_INT_01d715a8 - iVar1) * 0x6c);
        if (g_INT_01d715a8 <= iVar1) {
          return;
        }
      }
      src = src + 1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x6c;
    } while (iVar1 < g_INT_01d715a8);
  }
  return;
}
