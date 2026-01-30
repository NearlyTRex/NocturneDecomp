// Name: core_netgame.cpp_FUN_0053f550
// Address: 0053f550
// Address Range: [[0053f550, 0053f592]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_FUN_0053f550(void)

#include "nocturne.h"

int __cdecl core_netgame_cpp_FUN_0053f550(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = 0;
  if (0 < g_SimFrameCount) {
    iVar1 = 0;
    do {
      if (in_stack_00000004 == *(int *)((int)&g_SimFrameHistory + iVar1)) {
        return iVar2;
      }
      iVar1 = iVar1 + 100;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_SimFrameCount * 100);
  }
  return -1;
}
