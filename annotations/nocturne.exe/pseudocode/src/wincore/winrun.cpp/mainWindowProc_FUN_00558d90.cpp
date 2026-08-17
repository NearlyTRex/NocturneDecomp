// Name: wincore_winrun.cpp_mainWindowProc_FUN_00558d90
// Address: 00558d90
// Address Range: [[00558d90, 005591ba]]
// Convention: __stdcall
// Signature: LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_00558d90(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_00558d90(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

{
  WPARAM WVar1;
  LRESULT LVar2;
  HANDLE hThread;
  uint uVar3;
  
  WVar1 = DAT_005c1660;
  if (hWnd != g_HWND_02de2098) {
    LVar2 = DefWindowProcA(hWnd,message,wParam,lParam);
    return LVar2;
  }
  if (0x111 < message) {
    if (message < 0x113) {
      if ((0xf13f < wParam) && ((wParam < 0xf141 || (wParam == 0xf170)))) {
        return 0;
      }
    }
    else {
      uVar3 = (uint)lParam >> 0x10;
      if (message < 0x205) {
        if (message < 0x201) {
          if (message == 0x200) {
            _DAT_01bd1d8c = lParam & 0xffff;
            _DAT_01bd1d90 = uVar3;
            return 0;
          }
        }
        else {
          if (message < 0x202) {
            _DAT_01bd1d8c = lParam & 0xffff;
            _DAT_01bd1d90 = uVar3;
            DAT_01bd1d94 = DAT_01bd1d94 | 1;
            DAT_01c02798 = 1;
            return 0;
          }
          if (message < 0x203) {
            _DAT_01bd1d8c = lParam & 0xffff;
            _DAT_01bd1d90 = uVar3;
            _DAT_02de28b0 = 1;
            DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
            return 0;
          }
          if (message == 0x204) {
            _DAT_01bd1d8c = lParam & 0xffff;
            _DAT_01bd1d90 = uVar3;
            DAT_01c02799 = 1;
            DAT_01bd1d94 = DAT_01bd1d94 | 2;
            return 0;
          }
        }
      }
      else {
        if (message < 0x206) {
          _DAT_01bd1d8c = lParam & 0xffff;
          _DAT_01bd1d90 = uVar3;
          DAT_01bd1d94 = DAT_01bd1d94 & 0xfd;
          _DAT_02de28b4 = 1;
          return 0;
        }
        if (message < 0x30f) {
          if (0x206 < message) {
            if (message < 0x208) {
              _DAT_01bd1d8c = lParam & 0xffff;
              _DAT_01bd1d90 = uVar3;
              DAT_01bd1d94 = DAT_01bd1d94 | 4;
              DAT_01c027a4 = 1;
              return 0;
            }
            if (message == 0x208) {
              _DAT_01bd1d8c = lParam & 0xffff;
              _DAT_01bd1d90 = uVar3;
              _DAT_02de28e0 = 1;
              DAT_01bd1d94 = DAT_01bd1d94 & 0xfb;
              return 0;
            }
          }
        }
        else {
          if (0x30f < message) {
            if (message < 0x311) goto LAB_00558ddf;
            if (0x311 < message) {
              if (message == 0x3b9) {
                wincore_winvideo_cpp_closeMovie_FUN_0055a1c0(g_HWND_02de2098);
              }
              goto LAB_00558ddf;
            }
            if (g_HWND_02de2098 == wParam) goto LAB_00558ddf;
          }
          wincore_wddvmem_cpp_stubFunction_FUN_00553ca0();
        }
      }
    }
    goto LAB_00558ddf;
  }
  if (message < 0x20) {
    if (1 < message) {
      if (message < 3) {
        PostQuitMessage(0);
        _DAT_02de20a0 = 1;
      }
      else if (0xe < message) {
        if (message < 0x10) {
          wincore_wddvmem_cpp_stubFunction_FUN_00553ca0();
        }
        else if (message == 0x1c) {
          INT_005c1668 = DAT_005c1660;
          DAT_005c1660 = wParam;
          if (WVar1 != wParam) {
            hThread = GetCurrentProcess();
            if (DAT_005c1660 == 0) {
              wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_00553b70();
              SetThreadPriority(hThread,-0xf);
              _DAT_02de20a4 = 0;
            }
            else {
              SetThreadPriority(hThread,1);
              wincore_wddvmem_cpp_videoRestore_FUN_00553ba0();
              if (INT_005c1668 != -1) {
                engine_2d_c_clearInputAndWait_FUN_00403f50();
                _DAT_02de20a4 = 1;
              }
            }
          }
        }
      }
    }
    goto LAB_00558ddf;
  }
  if (message < 0x21) {
    SetCursor((HCURSOR)0x0);
    return 1;
  }
  if (message < 0x102) {
    if (message < 0x100) goto LAB_00558ddf;
    if (message < 0x101) {
LAB_00558ede:
      uVar3 = lParam >> 0x10 & INT_005b7630;
      (&DAT_01c02598)[uVar3] = 1;
      if (uVar3 == 0x3e) {
        return 0;
      }
      goto LAB_00558ddf;
    }
  }
  else {
    if (message < 0x103) {
      if ((wParam & 0xff) != 0) {
        wincore_winrun_cpp_enqueueInput_FUN_00558ba0(wParam & 0xff);
      }
      goto LAB_00558ddf;
    }
    if (message < 0x104) goto LAB_00558ddf;
    if (message < 0x105) goto LAB_00558ede;
    if (message != 0x105) goto LAB_00558ddf;
  }
  *(uint *)((lParam >> 0x10 & INT_005b7630) * 4 + 0x2de20b0) = 1;
LAB_00558ddf:
  LVar2 = DefWindowProcA(hWnd,message,wParam,lParam);
  return LVar2;
}
