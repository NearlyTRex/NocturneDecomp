// Name: wincore_winvideo.cpp_playMovie_FUN_00591190
// Address: 00591190
// Address Range: [[00591190, 0059152f]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winvideo_cpp_playMovie_FUN_00591190(char *directory_path,char *movie_filename)

#include "nocturne.h"

int __cdecl wincore_winvideo_cpp_playMovie_FUN_00591190(char *directory_path,char *movie_filename)

{
  byte *pbVar1;
  byte bVar2;
  _FILE *file_handle;
  MCIERROR MVar3;
  byte *pbVar4;
  HANDLE hThread;
  int iVar5;
  bool bVar6;
  char *lpstrCommand;
  HWND pHVar7;
  char local_1f8 [260];
  byte local_f4;
  byte local_f3 [127];
  char local_74 [80];
  tagRECT local_24;
  tagRECT local_14;
  
  _sprintf(local_74,"%s\\%s");
  file_handle = _fopen(local_74,"rb");
  if (file_handle == (_FILE *)0x0) {
    return 0;
  }
  _fclose(file_handle);
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  pHVar7 = g_HWND_02664628;
  if (g_INT_02665a50 != 0) {
    wincore_winvideo_cpp_closeMovie_FUN_00590e40(g_HWND_02664628);
  }
  _sprintf(local_1f8,"open \"%s\" alias mov style child parent %d");
  MVar3 = mciSendStringA(local_1f8,(LPSTR)0x0,0,(HWND)0x0);
  if (MVar3 == 0) {
    g_INT_02665a50 = 1;
    MVar3 = mciSendStringA("status mov window handle",local_1f8,0x104,(HWND)0x0);
    if (MVar3 == 0) {
      g_INT_02665a48 = atoi(local_1f8);
    }
    else {
      mciGetErrorStringA(MVar3,local_1f8,0x104);
      MessageBoxA(pHVar7,local_1f8,(LPCSTR)0x0,0x30);
    }
    if ((g_INT_02665a58 == 0) && (g_INT_02665a50 != 0)) {
      GetClientRect(pHVar7,&local_14);
      mciSendStringA("where mov source",(LPSTR)&local_f4,0x80,(HWND)0x0);
      SetRectEmpty(&local_24);
      pbVar4 = &local_f4;
      while (local_f4 == 0x20) {
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        local_f4 = *pbVar1;
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
        local_24.right = local_24.right * 10 + (*pbVar4 - 0x30);
      }
      for (; *pbVar4 == 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; (bVar2 = *pbVar4, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar4 = pbVar4 + 1) {
        local_24.bottom = local_24.bottom * 10 + (bVar2 - 0x30);
      }
      if ((400 < local_14.right) || (300 < local_14.bottom)) {
        local_24.right = local_24.right * 2;
        local_24.bottom = local_24.bottom * 2;
      }
      MoveWindow((HWND)g_INT_02665a48,local_14.right / 2 - local_24.right / 2,
                 local_14.bottom / 2 - local_24.bottom / 2,local_24.right,local_24.bottom,1);
    }
  }
  else {
    MessageBoxA(pHVar7,"Unable to open .AVI!",(LPCSTR)0x0,0x30);
    g_INT_02665a50 = 0;
  }
  bVar6 = g_INT_02665a4c == 0;
  g_INT_02665a4c = (int)bVar6;
  if (bVar6) {
    pHVar7 = g_HWND_02664628;
    if (g_INT_02665a58 == 0) {
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
  mciSendStringA(lpstrCommand,(LPSTR)0x0,0,pHVar7);
  hThread = GetCurrentProcess();
  SetThreadPriority(hThread,-0xf);
  while (((wincore_winrun_cpp_processWindowMessages_FUN_0058f270(), g_INT_02665a4c != 0 &&
          (iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_0058eb40(), iVar5 == 0)) &&
         (g_INT_02665a50 != 0))) {
    Sleep(0x14);
  }
  SetThreadPriority(hThread,1);
  wincore_winvideo_cpp_closeMovie_FUN_00590e40(g_HWND_02664628);
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  return 1;
}
