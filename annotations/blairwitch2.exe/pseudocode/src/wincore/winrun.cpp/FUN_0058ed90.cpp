// Name: wincore_winrun.cpp_FUN_0058ed90
// Address: 0058ed90
// Address Range: [[0058ed90, 0058f261]]
// Convention: __stdcall
// Signature: LRESULT __stdcall wincore_winrun_cpp_FUN_0058ed90(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT __stdcall wincore_winrun_cpp_FUN_0058ed90(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  LRESULT LVar2;
  HANDLE hThread;
  uint uVar3;
  int iVar4;
  int iVar5;
  WPARAM WVar6;
  
  if (hWnd != _DAT_02664628) goto LAB_0058ee1e;
  iVar4 = 0;
  if (0 < _DAT_02664fa8) {
    iVar5 = 0;
    do {
      iVar1 = (**(code **)(iVar5 + 0x2664fac))(hWnd,message,wParam,lParam);
      if (iVar1 != 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < _DAT_02664fa8);
  }
  WVar6 = DAT_0061e98c;
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
            _DAT_01c2a37c = lParam & 0xffff;
            _DAT_01c2a380 = uVar3;
            _DAT_02664fa4 = 0;
            return 0;
          }
        }
        else {
          if (message < 0x202) {
            _DAT_01c2a37c = lParam & 0xffff;
            _DAT_01c2a380 = uVar3;
            DAT_01c2a384 = DAT_01c2a384 | 1;
            _DAT_02664fa4 = 0;
            DAT_01c37990 = 1;
            return 0;
          }
          if (message < 0x203) {
            _DAT_01c2a37c = lParam & 0xffff;
            _DAT_01c2a380 = uVar3;
            DAT_01c2a384 = DAT_01c2a384 & 0xfe;
            _DAT_02664fa4 = 0;
            _DAT_02664e40 = 1;
            return 0;
          }
          if (message == 0x204) {
            _DAT_01c2a37c = lParam & 0xffff;
            _DAT_01c2a380 = uVar3;
            DAT_01c37991 = 1;
            _DAT_02664fa4 = 0;
            DAT_01c2a384 = DAT_01c2a384 | 2;
            return 0;
          }
        }
      }
      else {
        if (message < 0x206) {
          _DAT_01c2a37c = lParam & 0xffff;
          _DAT_01c2a380 = uVar3;
          _DAT_02664e44 = 1;
          DAT_01c2a384 = DAT_01c2a384 & 0xfd;
          _DAT_02664fa4 = 0;
          return 0;
        }
        if (message < 0x30f) {
          if (0x206 < message) {
            if (message < 0x208) {
              _DAT_01c2a37c = lParam & 0xffff;
              _DAT_01c2a380 = uVar3;
              DAT_01c2a384 = DAT_01c2a384 | 4;
              _DAT_02664fa4 = 0;
              DAT_01c3799c = 1;
              return 0;
            }
            if (message == 0x208) {
              _DAT_01c2a37c = lParam & 0xffff;
              _DAT_01c2a380 = uVar3;
              _DAT_02664e70 = 1;
              _DAT_02664fa4 = 0;
              DAT_01c2a384 = DAT_01c2a384 & 0xfb;
              return 0;
            }
          }
        }
        else {
          if (0x30f < message) {
            if (message < 0x311) goto LAB_0058ee1e;
            if (0x311 < message) {
              if (message == 0x3b9) {
                wincore_winvideo_cpp_closeMovie_FUN_00590e40(_DAT_02664628);
              }
              goto LAB_0058ee1e;
            }
            if (hWnd == (HWND)wParam) goto LAB_0058ee1e;
          }
          wincore_wddvmem_cpp_FUN_005898e0();
        }
      }
    }
    goto LAB_0058ee1e;
  }
  if (message < 0x20) {
    if (1 < message) {
      if (message < 3) {
        PostQuitMessage(0);
        _DAT_02664630 = 1;
      }
      else if (0xe < message) {
        if (message < 0x10) {
          wincore_wddvmem_cpp_FUN_005898e0();
        }
        else if (message == 0x1c) {
          DAT_0061e994 = DAT_0061e98c;
          DAT_0061e98c = wParam;
          if (WVar6 != wParam) {
            hThread = GetCurrentProcess();
            WVar6 = DAT_0061e98c;
            if (DAT_0061e98c == 0) {
              wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005897b0();
              SetThreadPriority(hThread,-0xf);
              _DAT_02664634 = WVar6;
            }
            else {
              SetThreadPriority(hThread,1);
              wincore_wddvmem_cpp_FUN_005897e0();
              if (DAT_0061e994 != 0xffffffff) {
                engine_2d_c_clearInputAndWait_FUN_004032b0();
                _DAT_02664634 = 1;
              }
            }
          }
        }
      }
    }
    goto LAB_0058ee1e;
  }
  if (message < 0x21) {
    SetCursor((HCURSOR)0x0);
    return 1;
  }
  if (message < 0x102) {
    if (message < 0x100) goto LAB_0058ee1e;
    if (message < 0x101) {
LAB_0058ef11:
      uVar3 = lParam >> 0x10 & DAT_006141cc;
      _DAT_02664fa0 = 0;
      (&DAT_01c37790)[uVar3] = 1;
      if (uVar3 == 0x3e) {
        return 0;
      }
      goto LAB_0058ee1e;
    }
  }
  else {
    if (message < 0x103) {
      if ((wParam & 0xff) != 0) {
        wincore_winrun_cpp_enqueueInput_FUN_0058eb70(wParam & 0xff);
      }
      goto LAB_0058ee1e;
    }
    if (message < 0x104) goto LAB_0058ee1e;
    if (message < 0x105) goto LAB_0058ef11;
    if (message != 0x105) goto LAB_0058ee1e;
  }
  *(uint *)((lParam >> 0x10 & DAT_006141cc) * 4 + 0x2664640) = 1;
  _DAT_02664fa0 = 0;
LAB_0058ee1e:
  LVar2 = DefWindowProcA(hWnd,message,wParam,lParam);
  return LVar2;
}
