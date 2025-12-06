// Name: wincore_winvideo.cpp_openMovie_FUN_005f4700
// Address: 005f4700
// Address Range: [[005f4700, 005f4983]]
// Convention: __cdecl
// Signature: void wincore_winvideo.cpp_openMovie_FUN_005f4700(HWND parent_window, char * movie_filename)

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_openMovie_FUN_005f4700(HWND parent_window,char *movie_filename)

{
  byte *pbVar1;
  MCIERROR MVar2;
  byte *pbVar3;
  BADSPACEBASE *in_ESP;
  uint in_stack_0000000c;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_00000064;
  int in_stack_00000068;
  CHAR aCStack_1ac [4];
  CHAR aCStack_198 [4];
  uint uStack_194;
  CHAR aCStack_174 [8];
  uint uStack_16c;
  CHAR aCStack_50 [28];
  byte bStack_34;
  byte abStack_33 [35];
  
  if (g_MoviePlaying != 0) {
    wincore_winvideo_cpp_closeMovie_FUN_005f46b0(parent_window);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffe50,"open \"%s\" alias mov style child parent %d",in_stack_0000000c,parent_window);
  MVar2 = (*mciSendStringA)(aCStack_1ac,(LPSTR)0x0,0,(HWND)0x0);
  if (MVar2 != 0) {
    builtin_memcpy(aCStack_1ac,"sI_",4);
    (*MessageBoxA)(parent_window,"Unable to open .AVI!",(LPCSTR)0x0,0x30);
    g_MoviePlaying = 0;
    return;
  }
  g_MoviePlaying = 1;
  builtin_memcpy(aCStack_1ac,"zG_",4);
  MVar2 = (*mciSendStringA)("status mov window handle",aCStack_198,0x104,(HWND)0x0);
  if (MVar2 == 0) {
    g_MovieWindowHandle = (HWND)crt_stdlib_c_atoi_FUN_005ffef0(&stack0xfffffe7c);
  }
  else {
    uStack_194 = 0x5f47be;
    (*mciGetErrorStringA)(MVar2,&stack0xfffffe7c,0x104);
    (*MessageBoxA)(parent_window,aCStack_174,(LPCSTR)0x0,0x30);
  }
  if ((g_FullscreenMovie == 0) && (g_MoviePlaying != 0)) {
    uStack_16c = 0x5f47e1;
    (*GetClientRect)(parent_window,(LPRECT)&stack0x00000034);
    (*mciSendStringA)("where mov source",aCStack_50,0x80,(HWND)0x0);
    (*SetRectEmpty)((LPRECT)&stack0x00000044);
    pbVar3 = &bStack_34;
    while (bStack_34 == 0x20) {
      pbVar1 = pbVar3 + 1;
      pbVar3 = pbVar3 + 1;
      bStack_34 = *pbVar1;
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
      in_stack_00000054 = in_stack_00000054 * 10 + (*pbVar3 - 0x30);
    }
    for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; (0x2f < *pbVar3 && (*pbVar3 < 0x3a)); pbVar3 = pbVar3 + 1) {
      in_stack_00000058 = in_stack_00000058 * 10 + (*pbVar3 - 0x30);
    }
    if ((400 < in_stack_00000064) || (300 < in_stack_00000068)) {
      in_stack_00000054 = in_stack_00000054 * 2;
      in_stack_00000058 = in_stack_00000058 * 2;
    }
    (*MoveWindow)(g_MovieWindowHandle,in_stack_00000064 / 2 - in_stack_00000054 / 2,
                  in_stack_00000068 / 2 - in_stack_00000058 / 2,in_stack_00000054,in_stack_00000058,
                  1);
    return;
  }
  return;
}
