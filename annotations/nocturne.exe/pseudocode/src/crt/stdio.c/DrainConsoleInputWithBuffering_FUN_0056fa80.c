// Name: crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0056fa80
// Address: 0056fa80
// Address Range: [[0056fa80, 0056fb97]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_DrainConsoleInputWithBuffering_FUN_0056fa80(HANDLE hConsoleInput)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __watcallStack DrainConsoleInputWithBuffering(HANDLE hConsoleInput)

{
  BOOL BVar1;
  int iVar2;
  _INPUT_RECORD local_28;
  DWORD local_14;
  
  if (DAT_005c204c != 0) {
    if (DAT_005c204c < 2) {
      _DAT_02de5d58 = _DAT_02de5d58 + -1;
      if (_DAT_02de5d54 == 0) {
        DAT_005c204c = 2;
        return 0;
      }
      if (_DAT_02de5d58 != 0) {
        return _DAT_02de5d54;
      }
      DAT_005c204c = 0;
      return _DAT_02de5d54;
    }
    if (DAT_005c204c == 2) {
      DAT_005c204c = (uint)(_DAT_02de5d58 != 0);
      return _DAT_02de5d50;
    }
  }
  do {
    BVar1 = ReadConsoleInputA(hConsoleInput,&local_28,1,&local_14);
    if (BVar1 == 0) {
      return -1;
    }
    iVar2 = FUN_00571440(&local_28);
  } while (iVar2 == 0);
  _DAT_02de5d54 = (uint)(byte)local_28.Event.MouseEvent.dwControlKeyState._2_1_;
  if (((local_28.Event.KeyEvent.dwControlKeyState._1_1_ & 1) == 0) && (_DAT_02de5d54 != 0)) {
    if (local_28.Event.KeyEvent.wRepeatCount - 1 != 0) {
      DAT_005c204c = 1;
    }
  }
  else {
    _DAT_02de5d54 = 0;
    _DAT_02de5d50 = (uint)local_28.Event.KeyEvent.wVirtualScanCode;
    DAT_005c204c = 2;
  }
  _DAT_02de5d58 = local_28.Event.KeyEvent.wRepeatCount - 1;
  return _DAT_02de5d54;
}
