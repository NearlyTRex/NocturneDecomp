// Name: wincore_winrun.cpp_FUN_005b27d0
// Address: 005b27d0
// Address Range: [[005b27d0, 005b2ce0]]
// Convention: __stdcall
// Signature: LRESULT __stdcall wincore_winrun_cpp_FUN_005b27d0(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT __stdcall wincore_winrun_cpp_FUN_005b27d0(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  LRESULT LVar2;
  HANDLE hThread;
  uint uVar3;
  int iVar4;
  int iVar5;
  WPARAM WVar6;
  
  if (hWnd != _DAT_02c9be68) goto LAB_005b285e;
  iVar5 = 0;
  if (0 < _DAT_02c9c7e8) {
    iVar4 = 0;
    do {
      iVar1 = (**(code **)(iVar4 + 0x2c9c7ec))(hWnd,message,wParam,lParam);
      if (iVar1 != 0) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < _DAT_02c9c7e8);
  }
  WVar6 = DAT_006260e4;
  if (message < 0x105) {
    if (message < 0x20) {
      if (1 < message) {
        if (message < 3) {
          PostQuitMessage(0);
          _DAT_02c9be70 = 1;
        }
        else if (0xe < message) {
          if (message < 0x10) {
            wincore_wddvmem_cpp_stubFunction_FUN_005ad3d0();
          }
          else if (message == 0x1c) {
            DAT_006260ec = DAT_006260e4;
            DAT_006260e4 = wParam;
            if (WVar6 != wParam) {
              hThread = GetCurrentProcess();
              WVar6 = DAT_006260e4;
              if (DAT_006260e4 == 0) {
                wincore_wddvmem_cpp_FUN_005ad270();
                SetThreadPriority(hThread,-0xf);
                _DAT_02c9be74 = WVar6;
              }
              else {
                SetThreadPriority(hThread,1);
                wincore_wddvmem_cpp_videoRestore_FUN_005ad2c0();
                if (DAT_006260ec != 0xffffffff) {
                  engine_2d_c_clearInputAndWait_FUN_004032b0();
                  _DAT_02c9be74 = 1;
                }
              }
            }
          }
        }
      }
      goto LAB_005b285e;
    }
    if (message < 0x21) {
      SetCursor((HCURSOR)0x0);
      return 1;
    }
    if (message < 0x101) {
      if (message < 0x7e) goto LAB_005b285e;
      if (message < 0x7f) {
        return 0;
      }
      if (message != 0x100) goto LAB_005b285e;
    }
    else {
      if (message < 0x102) goto LAB_005b29a5;
      if (message < 0x103) {
        if ((wParam & 0xff) != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_005b25b0(wParam & 0xff);
        }
        goto LAB_005b285e;
      }
      if (message != 0x104) goto LAB_005b285e;
    }
    uVar3 = lParam >> 0x10 & DAT_0061b4ac;
    _DAT_02c9c7e0 = 0;
    (&DAT_01c50950)[uVar3] = 1;
    if (uVar3 == 0x3e) {
      return 0;
    }
  }
  else {
    if (0x105 < message) {
      uVar3 = (uint)lParam >> 0x10;
      if (message < 0x205) {
        if (message < 0x201) {
          if (0x111 < message) {
            if (message < 0x113) {
              if ((0xf13f < wParam) && ((wParam < 0xf141 || (wParam == 0xf170)))) {
                return 0;
              }
            }
            else if (message == 0x200) {
              _DAT_01c4353c = lParam & 0xffff;
              _DAT_01c43540 = uVar3;
              _DAT_02c9c7e4 = 0;
              return 0;
            }
          }
        }
        else {
          if (message < 0x202) {
            _DAT_01c4353c = lParam & 0xffff;
            _DAT_01c43540 = uVar3;
            DAT_01c43544 = DAT_01c43544 | 1;
            _DAT_02c9c7e4 = 0;
            DAT_01c50b50 = 1;
            return 0;
          }
          if (message < 0x203) {
            _DAT_01c4353c = lParam & 0xffff;
            _DAT_01c43540 = uVar3;
            _DAT_02c9c680 = 1;
            _DAT_02c9c7e4 = 0;
            DAT_01c43544 = DAT_01c43544 & 0xfe;
            return 0;
          }
          if (message == 0x204) {
            _DAT_01c4353c = lParam & 0xffff;
            _DAT_01c43540 = uVar3;
            DAT_01c50b51 = 1;
            DAT_01c43544 = DAT_01c43544 | 2;
            _DAT_02c9c7e4 = 0;
            return 0;
          }
        }
      }
      else {
        if (message < 0x206) {
          _DAT_01c4353c = lParam & 0xffff;
          _DAT_01c43540 = uVar3;
          _DAT_02c9c7e4 = 0;
          DAT_01c43544 = DAT_01c43544 & 0xfd;
          _DAT_02c9c684 = 1;
          return 0;
        }
        if (message < 0x30f) {
          if (0x206 < message) {
            if (message < 0x208) {
              _DAT_01c4353c = lParam & 0xffff;
              _DAT_01c43540 = uVar3;
              DAT_01c43544 = DAT_01c43544 | 4;
              _DAT_02c9c7e4 = 0;
              DAT_01c50b5c = 1;
              return 0;
            }
            if (message == 0x208) {
              _DAT_01c4353c = lParam & 0xffff;
              _DAT_01c43540 = uVar3;
              _DAT_02c9c6b0 = 1;
              _DAT_02c9c7e4 = 0;
              DAT_01c43544 = DAT_01c43544 & 0xfb;
              return 0;
            }
          }
        }
        else {
          if (0x30f < message) {
            if (message < 0x311) goto LAB_005b285e;
            if (0x311 < message) {
              if (message == 0x3b9) {
                wincore_winvideo_cpp_closeMovie_FUN_005b4980(_DAT_02c9be68);
                _DAT_02c9c7fc = wParam;
                _DAT_02c9c800 = lParam;
                _DAT_02c9c7f8 = 1;
              }
              goto LAB_005b285e;
            }
            if (hWnd == (HWND)wParam) goto LAB_005b285e;
          }
          wincore_wddvmem_cpp_stubFunction_FUN_005ad3d0();
        }
      }
      goto LAB_005b285e;
    }
LAB_005b29a5:
    *(uint *)((lParam >> 0x10 & DAT_0061b4ac) * 4 + 0x2c9be80) = 1;
    _DAT_02c9c7e0 = 0;
  }
LAB_005b285e:
  LVar2 = DefWindowProcA(hWnd,message,wParam,lParam);
  return LVar2;
}
