// Name: FUN_00590e40
// Address: 00590e40
// Address Range: [[00590e40, 00590e83]]
// Convention: unknown
// Signature: void FUN_00590e40(HWND param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00590e40(HWND param_1)

{
  if (_DAT_02665a50 == 0) {
    return;
  }
  mciSendStringA("close mov",(LPSTR)0x0,0,(HWND)0x0);
  _DAT_02665a4c = 0;
  _DAT_02665a50 = 0;
  InvalidateRect(param_1,(RECT *)0x0,1);
  UpdateWindow(param_1);
  return;
}
