// Name: wincore_winrun.cpp_FUN_00580a50
// Address: 00580a50
// Address Range: [[00580a50, 00580f60]]
// Convention: __stdcall
// Signature: LRESULT __stdcall wincore_winrun_cpp_FUN_00580a50(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT __stdcall wincore_winrun_cpp_FUN_00580a50(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  LRESULT LVar2;
  HANDLE hThread;
  uint uVar3;
  int iVar4;
  int iVar5;
  WPARAM WVar6;
  
  if (hWnd != _DAT_02d21b78) goto LAB_00580ade;
  iVar5 = 0;
  if (0 < _DAT_02d224f8) {
    iVar4 = 0;
    do {
      iVar1 = (**(code **)(iVar4 + 0x2d224fc))(hWnd,message,wParam,lParam);
      if (iVar1 != 0) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < _DAT_02d224f8);
  }
  WVar6 = DAT_00607288;
  if (message < 0x105) {
    if (message < 0x20) {
      if (1 < message) {
        if (message < 3) {
          PostQuitMessage(0);
          _DAT_02d21b80 = 1;
        }
        else if (0xe < message) {
          if (message < 0x10) {
            wincore_wddvmem_cpp_stubFunction_FUN_0057ac80();
          }
          else if (message == 0x1c) {
            DAT_00607290 = DAT_00607288;
            DAT_00607288 = wParam;
            if (WVar6 != wParam) {
              hThread = GetCurrentProcess();
              WVar6 = DAT_00607288;
              if (DAT_00607288 == 0) {
                wincore_wddvmem_cpp_FUN_0057ab20();
                SetThreadPriority(hThread,-0xf);
                _DAT_02d21b84 = WVar6;
              }
              else {
                SetThreadPriority(hThread,1);
                wincore_wddvmem_cpp_videoRestore_FUN_0057ab70();
                if (DAT_00607290 != 0xffffffff) {
                  engine_2d_c_clearInputAndWait_FUN_004032b0();
                  _DAT_02d21b84 = 1;
                }
              }
            }
          }
        }
      }
      goto LAB_00580ade;
    }
    if (message < 0x21) {
      SetCursor((HCURSOR)0x0);
      return 1;
    }
    if (message < 0x101) {
      if (message < 0x7e) goto LAB_00580ade;
      if (message < 0x7f) {
        return 0;
      }
      if (message != 0x100) goto LAB_00580ade;
    }
    else {
      if (message < 0x102) goto LAB_00580c25;
      if (message < 0x103) {
        if ((wParam & 0xff) != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_00580830(wParam & 0xff);
        }
        goto LAB_00580ade;
      }
      if (message != 0x104) goto LAB_00580ade;
    }
    uVar3 = lParam >> 0x10 & DAT_005fba2c;
    _DAT_02d224f0 = 0;
    (&DAT_01c6cef0)[uVar3] = 1;
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
              _DAT_01c5fadc = lParam & 0xffff;
              _DAT_01c5fae0 = uVar3;
              _DAT_02d224f4 = 0;
              return 0;
            }
          }
        }
        else {
          if (message < 0x202) {
            _DAT_01c5fadc = lParam & 0xffff;
            _DAT_01c5fae0 = uVar3;
            DAT_01c5fae4 = DAT_01c5fae4 | 1;
            _DAT_02d224f4 = 0;
            DAT_01c6d0f0 = 1;
            return 0;
          }
          if (message < 0x203) {
            _DAT_01c5fadc = lParam & 0xffff;
            _DAT_01c5fae0 = uVar3;
            _DAT_02d22390 = 1;
            _DAT_02d224f4 = 0;
            DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
            return 0;
          }
          if (message == 0x204) {
            _DAT_01c5fadc = lParam & 0xffff;
            _DAT_01c5fae0 = uVar3;
            DAT_01c6d0f1 = 1;
            DAT_01c5fae4 = DAT_01c5fae4 | 2;
            _DAT_02d224f4 = 0;
            return 0;
          }
        }
      }
      else {
        if (message < 0x206) {
          _DAT_01c5fadc = lParam & 0xffff;
          _DAT_01c5fae0 = uVar3;
          _DAT_02d224f4 = 0;
          DAT_01c5fae4 = DAT_01c5fae4 & 0xfd;
          _DAT_02d22394 = 1;
          return 0;
        }
        if (message < 0x30f) {
          if (0x206 < message) {
            if (message < 0x208) {
              _DAT_01c5fadc = lParam & 0xffff;
              _DAT_01c5fae0 = uVar3;
              DAT_01c5fae4 = DAT_01c5fae4 | 4;
              _DAT_02d224f4 = 0;
              DAT_01c6d0fc = 1;
              return 0;
            }
            if (message == 0x208) {
              _DAT_01c5fadc = lParam & 0xffff;
              _DAT_01c5fae0 = uVar3;
              _DAT_02d223c0 = 1;
              _DAT_02d224f4 = 0;
              DAT_01c5fae4 = DAT_01c5fae4 & 0xfb;
              return 0;
            }
          }
        }
        else {
          if (0x30f < message) {
            if (message < 0x311) goto LAB_00580ade;
            if (0x311 < message) {
              if (message == 0x3b9) {
                wincore_winvideo_cpp_closeMovie_FUN_00582b60(_DAT_02d21b78);
                _DAT_02d2250c = wParam;
                _DAT_02d22510 = lParam;
                _DAT_02d22508 = 1;
              }
              goto LAB_00580ade;
            }
            if (hWnd == (HWND)wParam) goto LAB_00580ade;
          }
          wincore_wddvmem_cpp_stubFunction_FUN_0057ac80();
        }
      }
      goto LAB_00580ade;
    }
LAB_00580c25:
    *(uint *)((lParam >> 0x10 & DAT_005fba2c) * 4 + 0x2d21b90) = 1;
    _DAT_02d224f0 = 0;
  }
LAB_00580ade:
  LVar2 = DefWindowProcA(hWnd,message,wParam,lParam);
  return LVar2;
}
