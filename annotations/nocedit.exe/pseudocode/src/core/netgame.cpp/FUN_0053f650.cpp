// Name: core_netgame.cpp_FUN_0053f650
// Address: 0053f650
// Address Range: [[0053f650, 0053f6c0]]
// Convention: unknown
// Signature: void core_netgame_cpp_FUN_0053f650(void)

#include "nocturne.h"

void core_netgame_cpp_FUN_0053f650(void)

{
  int iVar1;
  int iVar2;
  uint *src;
  int in_stack_00000004;
  
  iVar1 = 0;
  if (0 < g_SimFrameCount) {
    iVar2 = 0;
    src = &DAT_02f9c128;
    do {
      while (*(int *)((int)&g_SimFrameHistory + iVar2) < in_stack_00000004) {
        g_SimFrameCount = g_SimFrameCount + -1;
        crt_string_c_memmove_FUN_005fe5e0
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
