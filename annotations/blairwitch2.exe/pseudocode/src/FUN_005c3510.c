// Name: FUN_005c3510
// Address: 005c3510
// Address Range: [[005c3510, 005c3627]]
// Convention: unknown
// Signature: uint FUN_005c3510(HANDLE param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c3510(HANDLE param_1)

{
  BOOL BVar1;
  int iVar2;
  _INPUT_RECORD local_28;
  DWORD local_14;
  
  if (DAT_0061f6e8 != 0) {
    if (DAT_0061f6e8 < 2) {
      _DAT_02681098 = _DAT_02681098 + -1;
      if (_DAT_02681094 == 0) {
        DAT_0061f6e8 = 2;
        return 0;
      }
      if (_DAT_02681098 != 0) {
        return _DAT_02681094;
      }
      DAT_0061f6e8 = 0;
      return _DAT_02681094;
    }
    if (DAT_0061f6e8 == 2) {
      DAT_0061f6e8 = (uint)(_DAT_02681098 != 0);
      return _DAT_02681090;
    }
  }
  do {
    BVar1 = ReadConsoleInputA(param_1,&local_28,1,&local_14);
    if (BVar1 == 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_005c4d20(&local_28);
  } while (iVar2 == 0);
  _DAT_02681094 = (uint)(byte)local_28.Event.MouseEvent.dwControlKeyState._2_1_;
  if (((local_28.Event.KeyEvent.dwControlKeyState._1_1_ & 1) == 0) && (_DAT_02681094 != 0)) {
    if (local_28.Event.KeyEvent.wRepeatCount - 1 != 0) {
      DAT_0061f6e8 = 1;
    }
  }
  else {
    _DAT_02681094 = 0;
    _DAT_02681090 = (uint)local_28.Event.KeyEvent.wVirtualScanCode;
    DAT_0061f6e8 = 2;
  }
  _DAT_02681098 = local_28.Event.KeyEvent.wRepeatCount - 1;
  return _DAT_02681094;
}
