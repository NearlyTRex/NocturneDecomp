// Name: wincore_winvideo.cpp_FUN_005b4cd0
// Address: 005b4cd0
// Address Range: [[005b4cd0, 005b507a]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winvideo_cpp_FUN_005b4cd0(char *directory_path,char *movie_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_winvideo_cpp_FUN_005b4cd0(char *directory_path,char *movie_filename)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  MCIERROR MVar4;
  byte *pbVar5;
  HANDLE hThread;
  int iVar6;
  bool bVar7;
  char *lpstrCommand;
  HWND pHVar8;
  CHAR local_1f8 [260];
  byte local_f4;
  byte local_f3 [127];
  byte local_74 [80];
  tagRECT local_24;
  tagRECT local_14;
  
  FUN_005bfb40(local_74,"%s\\%s",directory_path,movie_filename);
  iVar3 = _fopen(local_74,&DAT_005fa085);
  if (iVar3 == 0) {
    return 0;
  }
  _fclose(iVar3);
  engine_special_cpp_clearScreen_FUN_0057dc40();
  wincore_wddvmem_cpp_FUN_005acff0();
  pHVar8 = _DAT_02c9be68;
  if (_DAT_02c9d2a0 != 0) {
    wincore_winvideo_cpp_closeMovie_FUN_005b4980(_DAT_02c9be68);
  }
  FUN_005bfb40(local_1f8,"open \"%s\" alias mov style child parent %d",local_74,pHVar8);
  MVar4 = mciSendStringA(local_1f8,(LPSTR)0x0,0,(HWND)0x0);
  if (MVar4 == 0) {
    _DAT_02c9d2a0 = 1;
    MVar4 = mciSendStringA("status mov window handle",local_1f8,0x104,(HWND)0x0);
    if (MVar4 == 0) {
      _DAT_02c9d298 = (HWND)atoi(local_1f8);
    }
    else {
      mciGetErrorStringA(MVar4,local_1f8,0x104);
      MessageBoxA(pHVar8,local_1f8,(LPCSTR)0x0,0x30);
    }
    if ((_DAT_02c9d2a8 == 0) && (_DAT_02c9d2a0 != 0)) {
      GetClientRect(pHVar8,&local_14);
      mciSendStringA("where mov source",(LPSTR)&local_f4,0x80,(HWND)0x0);
      SetRectEmpty(&local_24);
      pbVar5 = &local_f4;
      while (local_f4 == 0x20) {
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
        local_f4 = *pbVar1;
      }
      for (; *pbVar5 != 0x20; pbVar5 = pbVar5 + 1) {
      }
      for (; *pbVar5 == 0x20; pbVar5 = pbVar5 + 1) {
      }
      for (; *pbVar5 != 0x20; pbVar5 = pbVar5 + 1) {
      }
      for (; *pbVar5 == 0x20; pbVar5 = pbVar5 + 1) {
      }
      for (; (0x2f < *pbVar5 && (*pbVar5 < 0x3a)); pbVar5 = pbVar5 + 1) {
        local_24.right = local_24.right * 10 + (*pbVar5 - 0x30);
      }
      for (; *pbVar5 == 0x20; pbVar5 = pbVar5 + 1) {
      }
      for (; (bVar2 = *pbVar5, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar5 = pbVar5 + 1) {
        local_24.bottom = local_24.bottom * 10 + (bVar2 - 0x30);
      }
      if ((400 < local_14.right) || (300 < local_14.bottom)) {
        local_24.right = local_24.right * 2;
        local_24.bottom = local_24.bottom * 2;
      }
      MoveWindow(_DAT_02c9d298,local_14.right / 2 - local_24.right / 2,
                 local_14.bottom / 2 - local_24.bottom / 2,local_24.right,local_24.bottom,1);
    }
  }
  else {
    MessageBoxA(pHVar8,"Unable to open .AVI!",(LPCSTR)0x0,0x30);
    _DAT_02c9d2a0 = 0;
  }
  bVar7 = _DAT_02c9d29c == 0;
  _DAT_02c9d29c = (uint)bVar7;
  if (bVar7) {
    pHVar8 = _DAT_02c9be68;
    if (_DAT_02c9d2a8 == 0) {
      lpstrCommand = "play mov window notify";
    }
    else {
      lpstrCommand = "play mov fullscreen notify";
    }
  }
  else {
    pHVar8 = (HWND)0x0;
    lpstrCommand = "pause mov";
  }
  mciSendStringA(lpstrCommand,(LPSTR)0x0,0,pHVar8);
  hThread = GetCurrentProcess();
  iVar3 = GetThreadPriority(hThread);
  SetThreadPriority(hThread,-0xf);
  while (((wincore_winrun_cpp_FUN_005b2cf0(), _DAT_02c9d29c != 0 &&
          (iVar6 = wincore_winrun_cpp_wasKeyPressed_FUN_005b2580(), iVar6 == 0)) &&
         (_DAT_02c9d2a0 != 0))) {
    Sleep(0x14);
  }
  SetThreadPriority(hThread,iVar3);
  wincore_winvideo_cpp_closeMovie_FUN_005b4980(_DAT_02c9be68);
  engine_special_cpp_clearScreen_FUN_0057dc40();
  wincore_wddvmem_cpp_FUN_005acff0();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  return 1;
}
