// Name: wincore_winvideo.cpp_positionMovieWindow_FUN_0055a010
// Address: 0055a010
// Address Range: [[0055a010, 0055a1bb]]
// Convention: unknown
// Signature: void wincore_winvideo_cpp_positionMovieWindow_FUN_0055a010(HWND param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winvideo_cpp_positionMovieWindow_FUN_0055a010(HWND param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte local_a4;
  byte local_a3 [127];
  tagRECT local_24;
  tagRECT local_14;
  
  if (_DAT_02de3124 == 0) {
    return;
  }
  GetClientRect(param_1,&local_24);
  mciSendStringA("where mov source",(LPSTR)&local_a4,0x80,(HWND)0x0);
  SetRectEmpty(&local_14);
  pbVar3 = &local_a4;
  while (local_a4 == 0x20) {
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    local_a4 = *pbVar1;
  }
  for (; *pbVar3 != 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; *pbVar3 != 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; (0x2f < *pbVar3 && (*pbVar3 < 0x3a)); pbVar3 = pbVar3 + 1) {
    local_14.right = local_14.right * 10 + (*pbVar3 - 0x30);
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; (bVar2 = *pbVar3, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar3 = pbVar3 + 1) {
    local_14.bottom = local_14.bottom * 10 + (bVar2 - 0x30);
  }
  if ((400 < local_24.right) || (300 < local_24.bottom)) {
    local_14.right = local_14.right * 2;
    local_14.bottom = local_14.bottom * 2;
  }
  MoveWindow(_DAT_02de311c,local_24.right / 2 - local_14.right / 2,
             local_24.bottom / 2 - local_14.bottom / 2,local_14.right,local_14.bottom,1);
  return;
}
