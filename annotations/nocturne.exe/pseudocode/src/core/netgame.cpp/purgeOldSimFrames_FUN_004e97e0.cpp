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
  if (0 < g_INT_01d09c00) {
    iVar2 = 0;
    src = g_SSimFrame_ARRAY_01d09c04 + 1;
    do {
      while (*(int *)((int)g_SSimFrame_ARRAY_01d09c04[0].player_input + iVar2 + -0xc) < min_sequence
            ) {
        g_INT_01d09c00 = g_INT_01d09c00 + -1;
        memmove
                  ((void *)((int)g_SSimFrame_ARRAY_01d09c04[0].player_input + iVar2 + -0xc),src,
                   (g_INT_01d09c00 - iVar1) * 100);
        if (g_INT_01d09c00 <= iVar1) {
          return;
        }
      }
      src = src + 1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 100;
    } while (iVar1 < g_INT_01d09c00);
  }
  return;
}
