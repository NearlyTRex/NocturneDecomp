// Name: wincore_winvideo.cpp_positionMovieWindow_FUN_005f4500
// Address: 005f4500
// Address Range: [[005f4500, 005f46ab]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_positionMovieWindow_FUN_005f4500(HWND parent_window)

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_positionMovieWindow_FUN_005f4500(HWND parent_window)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte bStack_a4;
  byte abStack_a3 [127];
  tagRECT local_24;
  tagRECT tStack_14;
  
  if (g_MoviePlaying == 0) {
    return;
  }
  (*g_GetClientRectFunc)(parent_window,&local_24);
  (*g_mciSendStringAFunc)("where mov source",(LPSTR)&bStack_a4,0x80,(HWND)0x0);
  (*g_SetRectEmptyFunc)(&tStack_14);
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
  if ((400 < local_24.right) || (300 < local_24.bottom)) {
    tStack_14.right = tStack_14.right * 2;
    tStack_14.bottom = tStack_14.bottom * 2;
  }
  (*g_MoveWindowFunc)(g_MovieWindowHandle,local_24.right / 2 - tStack_14.right / 2,
                      local_24.bottom / 2 - tStack_14.bottom / 2,tStack_14.right,tStack_14.bottom,1)
  ;
  return;
}
