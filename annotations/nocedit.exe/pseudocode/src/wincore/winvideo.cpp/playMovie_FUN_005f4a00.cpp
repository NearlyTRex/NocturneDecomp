// Name: wincore_winvideo.cpp_playMovie_FUN_005f4a00
// Address: 005f4a00
// Address Range: [[005f4a00, 005f4dbf]]
// Convention: __cdecl
// Signature: int wincore_winvideo.cpp_playMovie_FUN_005f4a00(char * directory_path, char * movie_filename)

#include "nocturne.h"

int __cdecl wincore_winvideo_cpp_playMovie_FUN_005f4a00(char *directory_path,char *movie_filename)

{
  byte *pbVar1;
  byte bVar2;
  FILE *file_ptr;
  MCIERROR MVar3;
  byte *pbVar4;
  HANDLE hThread;
  int iVar5;
  BADSPACEBASE *in_ESP;
  bool bVar6;
  char *lpstrCommand;
  HWND pHVar7;
  char local_1f8 [260];
  byte bStack_f4;
  byte abStack_f3 [127];
  char local_74 [80];
  tagRECT tStack_24;
  tagRECT tStack_14;
  
  crt_stdio_c_sprintf_FUN_005fdbd0(local_74,"%s\\%s",directory_path,movie_filename);
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_74,(char *)0x0,"rb","..\\wincore\\winvideo.cpp",0x12e);
  if (file_ptr == (FILE *)0x0) {
    return 0;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\wincore\\winvideo.cpp",0x132);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  pHVar7 = g_MainWindowHandle;
  if (g_MoviePlaying != 0) {
    wincore_winvideo_cpp_closeMovie_FUN_005f46b0(g_MainWindowHandle);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_1f8,"open \"%s\" alias mov style child parent %d",local_74,pHVar7);
  MVar3 = (*mciSendStringA)(local_1f8,(LPSTR)0x0,0,(HWND)0x0);
  if (MVar3 == 0) {
    g_MoviePlaying = 1;
    MVar3 = (*mciSendStringA)("status mov window handle",local_1f8,0x104,(HWND)0x0);
    if (MVar3 == 0) {
      g_MovieWindowHandle = (HWND)crt_stdlib_c_atoi_FUN_005ffef0(local_1f8);
    }
    else {
      (*mciGetErrorStringA)(MVar3,local_1f8,0x104);
      (*MessageBoxA)(pHVar7,local_1f8,(LPCSTR)0x0,0x30);
    }
    if ((g_FullscreenMovie == 0) && (g_MoviePlaying != 0)) {
      (*GetClientRect)(pHVar7,&tStack_14);
      (*mciSendStringA)("where mov source",(LPSTR)&bStack_f4,0x80,(HWND)0x0);
      (*SetRectEmpty)(&tStack_24);
      pbVar4 = &bStack_f4;
      while (bStack_f4 == 0x20) {
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bStack_f4 = *pbVar1;
      }
      for (; *pbVar4 != 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; *pbVar4 == 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; *pbVar4 != 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; *pbVar4 == 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; (0x2f < *pbVar4 && (*pbVar4 < 0x3a)); pbVar4 = pbVar4 + 1) {
        tStack_24.right = tStack_24.right * 10 + (*pbVar4 - 0x30);
      }
      for (; *pbVar4 == 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; (bVar2 = *pbVar4, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar4 = pbVar4 + 1) {
        tStack_24.bottom = tStack_24.bottom * 10 + (bVar2 - 0x30);
      }
      if ((400 < tStack_14.right) || (300 < tStack_14.bottom)) {
        tStack_24.right = tStack_24.right * 2;
        tStack_24.bottom = tStack_24.bottom * 2;
      }
      (*MoveWindow)(g_MovieWindowHandle,tStack_14.right / 2 - tStack_24.right / 2,
                    tStack_14.bottom / 2 - tStack_24.bottom / 2,tStack_24.right,tStack_24.bottom,1);
    }
  }
  else {
    (*MessageBoxA)(pHVar7,"Unable to open .AVI!",(LPCSTR)0x0,0x30);
    g_MoviePlaying = 0;
  }
  bVar6 = g_MovieHandle == 0;
  g_MovieHandle = (DWORD)bVar6;
  if (bVar6) {
    pHVar7 = g_MainWindowHandle;
    if (g_FullscreenMovie == 0) {
      lpstrCommand = "play mov window notify";
    }
    else {
      lpstrCommand = "play mov fullscreen notify";
    }
  }
  else {
    pHVar7 = (HWND)0x0;
    lpstrCommand = "pause mov";
  }
  (*mciSendStringA)(lpstrCommand,(LPSTR)0x0,0,pHVar7);
  hThread = (*GetCurrentProcess)();
  (*SetThreadPriority)(hThread,-0xf);
  while (((wincore_winrun_cpp_processWindowMessages_FUN_005f35e0(), g_MovieHandle != 0 &&
          (iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar5 == 0)) &&
         (g_MoviePlaying != 0))) {
    (*Sleep)(0x14);
  }
  (*SetThreadPriority)(hThread,1);
  wincore_winvideo_cpp_closeMovie_FUN_005f46b0(g_MainWindowHandle);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return 1;
}
