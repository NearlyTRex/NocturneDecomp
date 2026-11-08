// Name: FUN_005cb810
// Address: 005cb810
// Address Range: [[005cb810, 005cb927]]
// Convention: unknown
// Signature: uint FUN_005cb810(HANDLE param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005cb810(HANDLE param_1)

{
  BOOL BVar1;
  int iVar2;
  _INPUT_RECORD local_28;
  DWORD local_14;
  
  if (DAT_00626a68 != 0) {
    if (DAT_00626a68 < 2) {
      _DAT_02c9ff88 = _DAT_02c9ff88 + -1;
      if (_DAT_02c9ff84 == 0) {
        DAT_00626a68 = 2;
        return 0;
      }
      if (_DAT_02c9ff88 != 0) {
        return _DAT_02c9ff84;
      }
      DAT_00626a68 = 0;
      return _DAT_02c9ff84;
    }
    if (DAT_00626a68 == 2) {
      DAT_00626a68 = (uint)(_DAT_02c9ff88 != 0);
      return _DAT_02c9ff80;
    }
  }
  do {
    BVar1 = ReadConsoleInputA(param_1,&local_28,1,&local_14);
    if (BVar1 == 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_005cd020(&local_28);
  } while (iVar2 == 0);
  _DAT_02c9ff84 = (uint)(byte)local_28.Event.MouseEvent.dwControlKeyState._2_1_;
  if (((local_28.Event.KeyEvent.dwControlKeyState._1_1_ & 1) == 0) && (_DAT_02c9ff84 != 0)) {
    if (local_28.Event.KeyEvent.wRepeatCount - 1 != 0) {
      DAT_00626a68 = 1;
    }
  }
  else {
    _DAT_02c9ff84 = 0;
    _DAT_02c9ff80 = (uint)local_28.Event.KeyEvent.wVirtualScanCode;
    DAT_00626a68 = 2;
  }
  _DAT_02c9ff88 = local_28.Event.KeyEvent.wRepeatCount - 1;
  return _DAT_02c9ff84;
}
