// Name: crt_unknown.c_FUN_005cb810
// Address: 005cb810
// Address Range: [[005cb810, 005cb927]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005cb810(HANDLE param_1)

#include "nocturne.h"

uint FUN_005cb810(HANDLE param_1)

{
  BOOL BVar1;
  int iVar2;
  _INPUT_RECORD local_28;
  DWORD local_14;
  
  if (g_INT_00626a68 != 0) {
    if ((uint)g_INT_00626a68 < 2) {
      g_INT_02c9ff88 = g_INT_02c9ff88 + -1;
      if (g_INT_02c9ff84 == 0) {
        g_INT_00626a68 = 2;
        return 0;
      }
      if (g_INT_02c9ff88 != 0) {
        return g_INT_02c9ff84;
      }
      g_INT_00626a68 = 0;
      return g_INT_02c9ff84;
    }
    if (g_INT_00626a68 == 2) {
      g_INT_00626a68 = (uint)(g_INT_02c9ff88 != 0);
      return g_INT_02c9ff80;
    }
  }
  do {
    BVar1 = ReadConsoleInputA(param_1,&local_28,1,&local_14);
    if (BVar1 == 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_005cd020(&local_28);
  } while (iVar2 == 0);
  g_INT_02c9ff84 = (int)(byte)local_28.Event.MouseEvent.dwControlKeyState._2_1_;
  if (((local_28.Event.KeyEvent.dwControlKeyState._1_1_ & 1) == 0) && (g_INT_02c9ff84 != 0)) {
    if (local_28.Event.KeyEvent.wRepeatCount - 1 != 0) {
      g_INT_00626a68 = 1;
    }
  }
  else {
    g_INT_02c9ff84 = 0;
    g_INT_02c9ff80 = (int)local_28.Event.KeyEvent.wVirtualScanCode;
    g_INT_00626a68 = 2;
  }
  g_INT_02c9ff88 = local_28.Event.KeyEvent.wRepeatCount - 1;
  return g_INT_02c9ff84;
}
