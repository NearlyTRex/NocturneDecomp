// Name: crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0056fa80
// Address: 0056fa80
// Address Range: [[0056fa80, 0056fb97]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_DrainConsoleInputWithBuffering_FUN_0056fa80(HANDLE hConsoleInput)

#include "nocturne.h"

int __watcallStack DrainConsoleInputWithBuffering(HANDLE hConsoleInput)

{
  BOOL BVar1;
  int iVar2;
  _INPUT_RECORD local_28;
  DWORD local_14;
  
  if (g_INT_005c204c != 0) {
    if ((uint)g_INT_005c204c < 2) {
      g_INT_02de5d58 = g_INT_02de5d58 + -1;
      if (g_INT_02de5d54 == 0) {
        g_INT_005c204c = 2;
        return 0;
      }
      if (g_INT_02de5d58 != 0) {
        return g_INT_02de5d54;
      }
      g_INT_005c204c = 0;
      return g_INT_02de5d54;
    }
    if (g_INT_005c204c == 2) {
      g_INT_005c204c = (uint)(g_INT_02de5d58 != 0);
      return g_INT_02de5d50;
    }
  }
  do {
    BVar1 = ReadConsoleInputA(hConsoleInput,&local_28,1,&local_14);
    if (BVar1 == 0) {
      return -1;
    }
    iVar2 = FUN_00571440(&local_28);
  } while (iVar2 == 0);
  g_INT_02de5d54 = (int)(byte)local_28.Event.MouseEvent.dwControlKeyState._2_1_;
  if (((local_28.Event.KeyEvent.dwControlKeyState._1_1_ & 1) == 0) && (g_INT_02de5d54 != 0)) {
    if (local_28.Event.KeyEvent.wRepeatCount - 1 != 0) {
      g_INT_005c204c = 1;
    }
  }
  else {
    g_INT_02de5d54 = 0;
    g_INT_02de5d50 = (int)local_28.Event.KeyEvent.wVirtualScanCode;
    g_INT_005c204c = 2;
  }
  g_INT_02de5d58 = local_28.Event.KeyEvent.wRepeatCount - 1;
  return g_INT_02de5d54;
}
