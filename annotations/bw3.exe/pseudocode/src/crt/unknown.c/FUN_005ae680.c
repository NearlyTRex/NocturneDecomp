// Name: crt_unknown.c_FUN_005ae680
// Address: 005ae680
// Address Range: [[005ae680, 005ae797]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005ae680(HANDLE param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005ae680(HANDLE param_1)

{
  BOOL BVar1;
  int iVar2;
  _INPUT_RECORD local_28;
  DWORD local_14;
  
  if (DAT_00607e0c != 0) {
    if (DAT_00607e0c < 2) {
      _DAT_02d261d8 = _DAT_02d261d8 + -1;
      if (_DAT_02d261d4 == 0) {
        DAT_00607e0c = 2;
        return 0;
      }
      if (_DAT_02d261d8 != 0) {
        return _DAT_02d261d4;
      }
      DAT_00607e0c = 0;
      return _DAT_02d261d4;
    }
    if (DAT_00607e0c == 2) {
      DAT_00607e0c = (uint)(_DAT_02d261d8 != 0);
      return _DAT_02d261d0;
    }
  }
  do {
    BVar1 = ReadConsoleInputA(param_1,&local_28,1,&local_14);
    if (BVar1 == 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_005afdb0(&local_28);
  } while (iVar2 == 0);
  _DAT_02d261d4 = (uint)(byte)local_28.Event.MouseEvent.dwControlKeyState._2_1_;
  if (((local_28.Event.KeyEvent.dwControlKeyState._1_1_ & 1) == 0) && (_DAT_02d261d4 != 0)) {
    if (local_28.Event.KeyEvent.wRepeatCount - 1 != 0) {
      DAT_00607e0c = 1;
    }
  }
  else {
    _DAT_02d261d4 = 0;
    _DAT_02d261d0 = (uint)local_28.Event.KeyEvent.wVirtualScanCode;
    DAT_00607e0c = 2;
  }
  _DAT_02d261d8 = local_28.Event.KeyEvent.wRepeatCount - 1;
  return _DAT_02d261d4;
}
