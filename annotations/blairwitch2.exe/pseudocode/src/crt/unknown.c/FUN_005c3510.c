// Name: crt_unknown.c_FUN_005c3510
// Address: 005c3510
// Address Range: [[005c3510, 005c3627]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005c3510(HANDLE param_1)

#include "nocturne.h"

uint FUN_005c3510(HANDLE param_1)

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
    BVar1 = ReadConsoleInputA(param_1,&local_28,1,&local_14);
    if (BVar1 == 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_005c4d20(&local_28);
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
