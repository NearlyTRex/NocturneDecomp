// Name: crt_unknown.c_FUN_005ae680
// Address: 005ae680
// Address Range: [[005ae680, 005ae797]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005ae680(HANDLE param_1)

#include "nocturne.h"

uint FUN_005ae680(HANDLE param_1)

{
  BOOL BVar1;
  int iVar2;
  _INPUT_RECORD local_28;
  DWORD local_14;
  
  if (g_INT_00607e0c != 0) {
    if ((uint)g_INT_00607e0c < 2) {
      g_INT_02d261d8 = g_INT_02d261d8 + -1;
      if (g_INT_02d261d4 == 0) {
        g_INT_00607e0c = 2;
        return 0;
      }
      if (g_INT_02d261d8 != 0) {
        return g_INT_02d261d4;
      }
      g_INT_00607e0c = 0;
      return g_INT_02d261d4;
    }
    if (g_INT_00607e0c == 2) {
      g_INT_00607e0c = (uint)(g_INT_02d261d8 != 0);
      return g_INT_02d261d0;
    }
  }
  do {
    BVar1 = ReadConsoleInputA(param_1,&local_28,1,&local_14);
    if (BVar1 == 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_005afdb0(&local_28);
  } while (iVar2 == 0);
  g_INT_02d261d4 = (int)(byte)local_28.Event.MouseEvent.dwControlKeyState._2_1_;
  if (((local_28.Event.KeyEvent.dwControlKeyState._1_1_ & 1) == 0) && (g_INT_02d261d4 != 0)) {
    if (local_28.Event.KeyEvent.wRepeatCount - 1 != 0) {
      g_INT_00607e0c = 1;
    }
  }
  else {
    g_INT_02d261d4 = 0;
    g_INT_02d261d0 = (int)local_28.Event.KeyEvent.wVirtualScanCode;
    g_INT_00607e0c = 2;
  }
  g_INT_02d261d8 = local_28.Event.KeyEvent.wRepeatCount - 1;
  return g_INT_02d261d4;
}
