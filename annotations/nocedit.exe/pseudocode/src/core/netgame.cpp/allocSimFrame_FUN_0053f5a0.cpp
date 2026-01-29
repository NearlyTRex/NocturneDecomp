// Name: core_netgame.cpp_allocSimFrame_FUN_0053f5a0
// Address: 0053f5a0
// Address Range: [[0053f5a0, 0053f64b]]
// Convention: unknown
// Signature: int * core_netgame_cpp_allocSimFrame_FUN_0053f5a0(void)

#include "nocturne.h"

int * core_netgame_cpp_allocSimFrame_FUN_0053f5a0(void)

{
  int iVar1;
  int iVar2;
  int *dest;
  int in_stack_00000004;
  
  iVar2 = 0;
  if (0 < g_SimFrameCount) {
    iVar1 = 0;
    do {
      if (in_stack_00000004 == *(int *)((int)&g_SimFrameHistory + iVar1)) {
        if (-1 < iVar2) {
          return (int *)((int)&g_SimFrameHistory + iVar1);
        }
        break;
      }
      iVar1 = iVar1 + 100;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_SimFrameCount * 100);
  }
  if (0x1ff < g_SimFrameCount) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 299;
    core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
  }
  dest = &g_SimFrameHistory + g_SimFrameCount * 0x19;
  g_SimFrameCount = g_SimFrameCount + 1;
  memset(dest,0,100);
  *dest = in_stack_00000004;
  return dest;
}
