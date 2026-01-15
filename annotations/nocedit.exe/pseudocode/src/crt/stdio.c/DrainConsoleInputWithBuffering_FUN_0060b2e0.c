// Name: crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0
// Address: 0060b2e0
// Address Range: [[0060b2e0, 0060b3f7]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0(HANDLE hConsoleInput)

#include "nocturne.h"

int __watcallStack crt_stdio_c_DrainConsoleInputWithBuffering_FUN_0060b2e0(HANDLE hConsoleInput)

{
  BOOL BVar1;
  int iVar2;
  _INPUT_RECORD local_28;
  DWORD local_14;
  
  if (g_ConsoleInputState != 0) {
    if ((uint)g_ConsoleInputState < 2) {
      g_BufferedRepeatCount = g_BufferedRepeatCount + -1;
      if (g_BufferedVirtualKey == 0) {
        g_ConsoleInputState = 2;
        return 0;
      }
      if (g_BufferedRepeatCount != 0) {
        return g_BufferedVirtualKey;
      }
      g_ConsoleInputState = 0;
      return g_BufferedVirtualKey;
    }
    if (g_ConsoleInputState == 2) {
      g_ConsoleInputState = (uint)(g_BufferedRepeatCount != 0);
      return g_BufferedCharacter;
    }
  }
  do {
    BVar1 = (*PTR_ReadConsoleInputA_00611600)(hConsoleInput,&local_28,1,&local_14);
    if (BVar1 == 0) {
      return -1;
    }
    iVar2 = crt_stdio_c_IsRelevantKeyEvent_FUN_0060cd90(&local_28);
  } while (iVar2 == 0);
  g_BufferedVirtualKey = (int)(byte)local_28.Event.MouseEvent.dwControlKeyState._2_1_;
  if (((local_28.Event.KeyEvent.dwControlKeyState._1_1_ & 1) == 0) && (g_BufferedVirtualKey != 0)) {
    if (local_28.Event.KeyEvent.wRepeatCount - 1 != 0) {
      g_ConsoleInputState = 1;
    }
  }
  else {
    g_BufferedVirtualKey = 0;
    g_BufferedCharacter = (int)local_28.Event.KeyEvent.wVirtualScanCode;
    g_ConsoleInputState = 2;
  }
  g_BufferedRepeatCount = local_28.Event.KeyEvent.wRepeatCount - 1;
  return g_BufferedVirtualKey;
}
