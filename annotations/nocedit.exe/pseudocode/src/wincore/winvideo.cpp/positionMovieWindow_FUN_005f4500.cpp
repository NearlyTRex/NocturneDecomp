// Name: wincore_winvideo.cpp_positionMovieWindow_FUN_005f4500
// Address: 005f4500
// Address Range: [[005f4500, 005f46ab]]
// Convention: __cdecl
// Signature: void wincore_winvideo.cpp_positionMovieWindow_FUN_005f4500(HWND parent_window)

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_positionMovieWindow_FUN_005f4500(HWND parent_window)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000020;
  byte bStack_7c;
  byte abStack_7b [87];
  tagRECT local_24 [2];
  
  if (g_MoviePlaying == 0) {
    return;
  }
  (*GetClientRect)(parent_window,local_24);
  (*mciSendStringA)("where mov source",&stack0xffffff68,0x80,(HWND)0x0);
  (*SetRectEmpty)((LPRECT)&stack0x0000000c);
  pbVar3 = &bStack_7c;
  while (bStack_7c == 0x20) {
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    bStack_7c = *pbVar1;
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
    in_stack_0000001c = in_stack_0000001c * 10 + (*pbVar3 - 0x30);
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; (bVar2 = *pbVar3, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar3 = pbVar3 + 1) {
    in_stack_00000020 = in_stack_00000020 * 10 + (bVar2 - 0x30);
  }
  if ((400 < in_stack_0000000c) || (300 < in_stack_00000010)) {
    in_stack_0000001c = in_stack_0000001c * 2;
    in_stack_00000020 = in_stack_00000020 * 2;
  }
  (*MoveWindow)(g_MovieWindowHandle,in_stack_0000000c / 2 - in_stack_0000001c / 2,
                in_stack_00000010 / 2 - in_stack_00000020 / 2,in_stack_0000001c,in_stack_00000020,1)
  ;
  return;
}
