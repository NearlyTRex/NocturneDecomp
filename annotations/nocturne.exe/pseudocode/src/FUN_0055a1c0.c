// Name: FUN_0055a1c0
// Address: 0055a1c0
// Address Range: [[0055a1c0, 0055a203]]
// Convention: unknown
// Signature: void FUN_0055a1c0(HWND param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a1c0(HWND param_1)

{
  if (_DAT_02de3124 == 0) {
    return;
  }
  mciSendStringA("close mov",(LPSTR)0x0,0,(HWND)0x0);
  _DAT_02de3120 = 0;
  _DAT_02de3124 = 0;
  InvalidateRect(param_1,(RECT *)0x0,1);
  UpdateWindow(param_1);
  return;
}
