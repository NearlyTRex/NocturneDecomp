// Name: FUN_00582b60
// Address: 00582b60
// Address Range: [[00582b60, 00582ba3]]
// Convention: unknown
// Signature: void FUN_00582b60(HWND param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00582b60(HWND param_1)

{
  if (_DAT_02d22fb0 == 0) {
    return;
  }
  mciSendStringA("close mov",(LPSTR)0x0,0,(HWND)0x0);
  _DAT_02d22fac = 0;
  _DAT_02d22fb0 = 0;
  InvalidateRect(param_1,(RECT *)0x0,1);
  UpdateWindow(param_1);
  return;
}
