// Name: wincore_winrun.cpp_mainWindowProc_FUN_00558d90
// Address: 00558d90
// Address Range: [[00558d90, 005591ba]]
// Convention: __stdcall
// Signature: LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_00558d90(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

#include "nocturne.h"

LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_00558d90(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  LRESULT LVar2;
  HANDLE hThread;
  uint uVar3;
  
  iVar1 = g_WindowActive;
  if (hWnd != g_MainWindowHandle) {
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
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            return 0;
          }
        }
        else {
          if (message < 0x202) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 1;
            g_KeyboardState[0x200] = '\x01';
            return 0;
          }
          if (message < 0x203) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_MessageFlags[0x200] = 1;
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
            return 0;
          }
          if (message == 0x204) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_KeyboardState[0x201] = '\x01';
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 2;
            return 0;
          }
        }
      }
      else {
        if (message < 0x206) {
          g_MouseX = lParam & 0xffff;
          g_MouseY = uVar3;
          g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfd;
          g_MessageFlags[0x201] = 1;
          return 0;
        }
        if (message < 0x30f) {
          if (0x206 < message) {
            if (message < 0x208) {
              g_MouseX = lParam & 0xffff;
              g_MouseY = uVar3;
              g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 4;
              g_KeyboardState[0x20c] = '\x01';
              return 0;
            }
            if (message == 0x208) {
              g_MouseX = lParam & 0xffff;
              g_MouseY = uVar3;
              g_MessageFlags[0x20c] = 1;
              g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfb;
              return 0;
            }
          }
        }
        else {
          if (0x30f < message) {
            if (message < 0x311) goto LAB_00558ddf;
            if (0x311 < message) {
              if (message == 0x3b9) {
                wincore_winvideo_cpp_closeMovie_FUN_0055a1c0(g_MainWindowHandle);
              }
              goto LAB_00558ddf;
            }
            if (g_MainWindowHandle == wParam) goto LAB_00558ddf;
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
        g_InputDisabled = 1;
      }
      else if (0xe < message) {
        if (message < 0x10) {
          wincore_wddvmem_cpp_stubFunction_FUN_00553ca0();
        }
        else if (message == 0x1c) {
          INT_005c1668 = g_WindowActive;
          g_WindowActive = wParam;
          if (iVar1 != wParam) {
            hThread = GetCurrentProcess();
            if (g_WindowActive == 0) {
              wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_00553b70();
              SetThreadPriority(hThread,-0xf);
              g_FocusRegained = 0;
            }
            else {
              SetThreadPriority(hThread,1);
              wincore_wddvmem_cpp_videoRestore_FUN_00553ba0();
              if (INT_005c1668 != -1) {
                engine_2d_c_clearInputAndWait_FUN_00403f50();
                g_FocusRegained = 1;
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
      uVar3 = lParam >> 0x10 & g_InputKeyMask;
      g_KeyboardState[uVar3] = '\x01';
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
  g_MessageFlags[lParam >> 0x10 & g_InputKeyMask] = 1;
LAB_00558ddf:
  LVar2 = DefWindowProcA(hWnd,message,wParam,lParam);
  return LVar2;
}
