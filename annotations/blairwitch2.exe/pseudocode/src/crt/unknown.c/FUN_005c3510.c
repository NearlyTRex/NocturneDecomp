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
  
  if (g_INT_0061f6e8 != 0) {
    if ((uint)g_INT_0061f6e8 < 2) {
      g_INT_02681098 = g_INT_02681098 + -1;
      if (g_INT_02681094 == 0) {
        g_INT_0061f6e8 = 2;
        return 0;
      }
      if (g_INT_02681098 != 0) {
        return g_INT_02681094;
      }
      g_INT_0061f6e8 = 0;
      return g_INT_02681094;
    }
    if (g_INT_0061f6e8 == 2) {
      g_INT_0061f6e8 = (uint)(g_INT_02681098 != 0);
      return g_INT_02681090;
    }
  }
  do {
    BVar1 = ReadConsoleInputA(param_1,&local_28,1,&local_14);
    if (BVar1 == 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_005c4d20(&local_28);
  } while (iVar2 == 0);
  g_INT_02681094 = (int)(byte)local_28.Event.MouseEvent.dwControlKeyState._2_1_;
  if (((local_28.Event.KeyEvent.dwControlKeyState._1_1_ & 1) == 0) && (g_INT_02681094 != 0)) {
    if (local_28.Event.KeyEvent.wRepeatCount - 1 != 0) {
      g_INT_0061f6e8 = 1;
    }
  }
  else {
    g_INT_02681094 = 0;
    g_INT_02681090 = (int)local_28.Event.KeyEvent.wVirtualScanCode;
    g_INT_0061f6e8 = 2;
  }
  g_INT_02681098 = local_28.Event.KeyEvent.wRepeatCount - 1;
  return g_INT_02681094;
}
