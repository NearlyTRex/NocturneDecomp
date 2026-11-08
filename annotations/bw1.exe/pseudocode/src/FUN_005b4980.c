// Name: FUN_005b4980
// Address: 005b4980
// Address Range: [[005b4980, 005b49c3]]
// Convention: unknown
// Signature: void FUN_005b4980(HWND param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b4980(HWND param_1)

{
  if (_DAT_02c9d2a0 == 0) {
    return;
  }
  mciSendStringA("close mov",(LPSTR)0x0,0,(HWND)0x0);
  _DAT_02c9d29c = 0;
  _DAT_02c9d2a0 = 0;
  InvalidateRect(param_1,(RECT *)0x0,1);
  UpdateWindow(param_1);
  return;
}
