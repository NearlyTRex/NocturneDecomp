// Name: FUN_0055a4a0
// Address: 0055a4a0
// Address Range: [[0055a4a0, 0055a508]]
// Convention: unknown
// Signature: void FUN_0055a4a0(HWND param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a4a0(HWND param_1,uint param_2)

{
  bool bVar1;
  char *lpstrCommand;
  
  bVar1 = _DAT_02de3120 == 0;
  _DAT_02de3120 = (uint)bVar1;
  if (param_2 == 0) {
    _DAT_02de3120 = param_2;
  }
  else if (bVar1) {
    if (_DAT_02de312c == 0) {
      mciSendStringA("play mov window notify",(LPSTR)0x0,0,param_1);
      return;
    }
    lpstrCommand = "play mov fullscreen notify";
    goto LAB_0055a4da;
  }
  param_1 = (HWND)0x0;
  lpstrCommand = "pause mov";
LAB_0055a4da:
  mciSendStringA(lpstrCommand,(LPSTR)0x0,0,param_1);
  return;
}
