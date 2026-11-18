// Name: wincore_winrun.cpp_positionMovieWindow_FUN_005829b0
// Address: 005829b0
// Address Range: [[005829b0, 00582b5b]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_positionMovieWindow_FUN_005829b0(HWND parent_window)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_positionMovieWindow_FUN_005829b0(HWND parent_window)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte bStack_a4;
  byte abStack_a3 [127];
  tagRECT tStack_24;
  tagRECT tStack_14;
  
  if (g_MoviePlaying == 0) {
    return;
  }
  GetClientRect(parent_window,&tStack_24);
  mciSendStringA("where mov source",(LPSTR)&bStack_a4,0x80,(HWND)0x0);
  SetRectEmpty(&tStack_14);
  pbVar3 = &bStack_a4;
  while (bStack_a4 == 0x20) {
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    bStack_a4 = *pbVar1;
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
    tStack_14.right = tStack_14.right * 10 + (*pbVar3 - 0x30);
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; (bVar2 = *pbVar3, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar3 = pbVar3 + 1) {
    tStack_14.bottom = tStack_14.bottom * 10 + (bVar2 - 0x30);
  }
  if ((400 < tStack_24.right) || (300 < tStack_24.bottom)) {
    tStack_14.right = tStack_14.right * 2;
    tStack_14.bottom = tStack_14.bottom * 2;
  }
  MoveWindow((HWND)g_MovieWindowHandle,tStack_24.right / 2 - tStack_14.right / 2,
             tStack_24.bottom / 2 - tStack_14.bottom / 2,tStack_14.right,tStack_14.bottom,1);
  return;
}
