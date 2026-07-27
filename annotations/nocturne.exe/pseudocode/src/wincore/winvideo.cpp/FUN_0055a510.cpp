// Name: wincore_winvideo.cpp_FUN_0055a510
// Address: 0055a510
// Address Range: [[0055a510, 0055a8af]]
// Convention: unknown
// Signature: undefined4 wincore_winvideo_cpp_FUN_0055a510(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wincore_winvideo_cpp_FUN_0055a510(uint param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  MCIERROR MVar4;
  byte *pbVar5;
  HANDLE hThread;
  bool bVar6;
  char *lpstrCommand;
  HWND pHVar7;
  CHAR local_1f8 [260];
  byte local_f4;
  byte local_f3 [127];
  byte local_74 [80];
  tagRECT local_24;
  tagRECT local_14;
  
  _sprintf(local_74,"%s\\%s",param_1,param_2);
  iVar3 = _fopen(local_74,"rb");
  if (iVar3 == 0) {
    return 0;
  }
  _fclose(iVar3);
  engine_special_cpp_clearScreen_FUN_0052ee70();
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  pHVar7 = _DAT_02de2098;
  if (_DAT_02de3124 != 0) {
    wincore_winvideo_cpp_closeMovie_FUN_0055a1c0(_DAT_02de2098);
  }
  _sprintf(local_1f8,"open \"%s\" alias mov style child parent %d",local_74,pHVar7);
  MVar4 = mciSendStringA(local_1f8,(LPSTR)0x0,0,(HWND)0x0);
  if (MVar4 == 0) {
    _DAT_02de3124 = 1;
    MVar4 = mciSendStringA("status mov window handle",local_1f8,0x104,(HWND)0x0);
    if (MVar4 == 0) {
      _DAT_02de311c = (HWND)atoi(local_1f8);
    }
    else {
      mciGetErrorStringA(MVar4,local_1f8,0x104);
      MessageBoxA(pHVar7,local_1f8,(LPCSTR)0x0,0x30);
    }
    if ((_DAT_02de312c == 0) && (_DAT_02de3124 != 0)) {
      GetClientRect(pHVar7,&local_14);
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
      MoveWindow(_DAT_02de311c,local_14.right / 2 - local_24.right / 2,
                 local_14.bottom / 2 - local_24.bottom / 2,local_24.right,local_24.bottom,1);
    }
  }
  else {
    MessageBoxA(pHVar7,"Unable to open .AVI!",(LPCSTR)0x0,0x30);
    _DAT_02de3124 = 0;
  }
  bVar6 = _DAT_02de3120 == 0;
  _DAT_02de3120 = (uint)bVar6;
  if (bVar6) {
    pHVar7 = _DAT_02de2098;
    if (_DAT_02de312c == 0) {
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
  while (((wincore_winrun_cpp_processWindowMessages_FUN_005591c0(), _DAT_02de3120 != 0 &&
          (iVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(), iVar3 == 0)) &&
         (_DAT_02de3124 != 0))) {
    Sleep(0x14);
  }
  SetThreadPriority(hThread,1);
  wincore_winvideo_cpp_closeMovie_FUN_0055a1c0(_DAT_02de2098);
  engine_special_cpp_clearScreen_FUN_0052ee70();
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  return 1;
}
