// Name: wincore_winrun.cpp_mainWindowProc_FUN_005b27d0
// Address: 005b27d0
// Address Range: [[005b27d0, 005b2ce0]]
// Convention: __stdcall
// Signature: LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_005b27d0(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_005b27d0(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  LRESULT LVar2;
  HANDLE hThread;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (hWnd != g_MainWindowHandle) goto LAB_005b285e;
  iVar5 = 0;
  if (0 < g_INT_02c9c7e8) {
    iVar4 = 0;
    do {
      iVar1 = (**(code **)(iVar4 + 0x2c9c7ec))(hWnd,message,wParam,lParam);
      if (iVar1 != 0) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < g_INT_02c9c7e8);
  }
  iVar5 = g_WindowActive;
  if (message < 0x105) {
    if (message < 0x20) {
      if (1 < message) {
        if (message < 3) {
          PostQuitMessage(0);
          g_InputDisabled = 1;
        }
        else if (0xe < message) {
          if (message < 0x10) {
            wincore_wddvmem_cpp_stubFunction_FUN_005ad3d0();
          }
          else if (message == 0x1c) {
            g_INT_006260ec = g_WindowActive;
            g_WindowActive = wParam;
            if (iVar5 != wParam) {
              hThread = GetCurrentProcess();
              iVar5 = g_WindowActive;
              if (g_WindowActive == 0) {
                wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005ad270();
                SetThreadPriority(hThread,-0xf);
                g_INT_02c9be74 = iVar5;
              }
              else {
                SetThreadPriority(hThread,1);
                wincore_wddvmem_cpp_videoRestore_FUN_005ad2c0();
                if (g_INT_006260ec != -1) {
                  engine_2d_c_clearInputAndWait_FUN_004032b0();
                  g_INT_02c9be74 = 1;
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
    uVar3 = lParam >> 0x10 & g_InputKeyMask;
    g_FLOAT_02c9c7e0 = 0.0;
    g_KeyboardState[uVar3] = '\x01';
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
              g_MouseX = lParam & 0xffff;
              g_MouseY = uVar3;
              g_FLOAT_02c9c7e4 = 0.0;
              return 0;
            }
          }
        }
        else {
          if (message < 0x202) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 1;
            g_FLOAT_02c9c7e4 = 0.0;
            g_KeyboardState[0x200] = '\x01';
            return 0;
          }
          if (message < 0x203) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_INT_ARRAY_02c9be80[0x200] = 1;
            g_FLOAT_02c9c7e4 = 0.0;
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
            return 0;
          }
          if (message == 0x204) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_KeyboardState[0x201] = '\x01';
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 2;
            g_FLOAT_02c9c7e4 = 0.0;
            return 0;
          }
        }
      }
      else {
        if (message < 0x206) {
          g_MouseX = lParam & 0xffff;
          g_MouseY = uVar3;
          g_FLOAT_02c9c7e4 = 0.0;
          g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfd;
          g_INT_ARRAY_02c9be80[0x201] = 1;
          return 0;
        }
        if (message < 0x30f) {
          if (0x206 < message) {
            if (message < 0x208) {
              g_MouseX = lParam & 0xffff;
              g_MouseY = uVar3;
              g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 4;
              g_FLOAT_02c9c7e4 = 0.0;
              g_KeyboardState[0x20c] = '\x01';
              return 0;
            }
            if (message == 0x208) {
              g_MouseX = lParam & 0xffff;
              g_MouseY = uVar3;
              g_INT_ARRAY_02c9be80[0x20c] = 1;
              g_FLOAT_02c9c7e4 = 0.0;
              g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfb;
              return 0;
            }
          }
        }
        else {
          if (0x30f < message) {
            if (message < 0x311) goto LAB_005b285e;
            if (0x311 < message) {
              if (message == 0x3b9) {
                wincore_winvideo_cpp_closeMovie_FUN_005b4980(g_MainWindowHandle);
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
    g_INT_ARRAY_02c9be80[lParam >> 0x10 & g_InputKeyMask] = 1;
    g_FLOAT_02c9c7e0 = 0.0;
  }
LAB_005b285e:
  LVar2 = DefWindowProcA(hWnd,message,wParam,lParam);
  return LVar2;
}
