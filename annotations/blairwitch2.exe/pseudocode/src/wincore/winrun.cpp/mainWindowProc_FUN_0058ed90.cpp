// Name: wincore_winrun.cpp_mainWindowProc_FUN_0058ed90
// Address: 0058ed90
// Address Range: [[0058ed90, 0058f261]]
// Convention: __stdcall
// Signature: LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_0058ed90(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

#include "nocturne.h"

LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_0058ed90(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  LRESULT LVar2;
  HANDLE hThread;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (hWnd != g_MainWindowHandle) goto LAB_0058ee1e;
  iVar4 = 0;
  if (0 < g_INT_02664fa8) {
    iVar5 = 0;
    do {
      iVar1 = (**(code **)(iVar5 + 0x2664fac))(hWnd,message,wParam,lParam);
      if (iVar1 != 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < g_INT_02664fa8);
  }
  iVar4 = g_WindowActive;
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
            g_FLOAT_02664fa4 = 0.0;
            return 0;
          }
        }
        else {
          if (message < 0x202) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 1;
            g_FLOAT_02664fa4 = 0.0;
            g_KeyboardState[0x200] = '\x01';
            return 0;
          }
          if (message < 0x203) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
            g_FLOAT_02664fa4 = 0.0;
            g_MessageFlags[0x200] = 1;
            return 0;
          }
          if (message == 0x204) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_KeyboardState[0x201] = '\x01';
            g_FLOAT_02664fa4 = 0.0;
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 2;
            return 0;
          }
        }
      }
      else {
        if (message < 0x206) {
          g_MouseX = lParam & 0xffff;
          g_MouseY = uVar3;
          g_MessageFlags[0x201] = 1;
          g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfd;
          g_FLOAT_02664fa4 = 0.0;
          return 0;
        }
        if (message < 0x30f) {
          if (0x206 < message) {
            if (message < 0x208) {
              g_MouseX = lParam & 0xffff;
              g_MouseY = uVar3;
              g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 4;
              g_FLOAT_02664fa4 = 0.0;
              g_KeyboardState[0x20c] = '\x01';
              return 0;
            }
            if (message == 0x208) {
              g_MouseX = lParam & 0xffff;
              g_MouseY = uVar3;
              g_MessageFlags[0x20c] = 1;
              g_FLOAT_02664fa4 = 0.0;
              g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfb;
              return 0;
            }
          }
        }
        else {
          if (0x30f < message) {
            if (message < 0x311) goto LAB_0058ee1e;
            if (0x311 < message) {
              if (message == 0x3b9) {
                wincore_winvideo_cpp_closeMovie_FUN_00590e40(g_MainWindowHandle);
              }
              goto LAB_0058ee1e;
            }
            if (hWnd == (HWND)wParam) goto LAB_0058ee1e;
          }
          wincore_wddvmem_cpp_stubFunction_FUN_005898e0();
        }
      }
    }
    goto LAB_0058ee1e;
  }
  if (message < 0x20) {
    if (1 < message) {
      if (message < 3) {
        PostQuitMessage(0);
        g_InputDisabled = 1;
      }
      else if (0xe < message) {
        if (message < 0x10) {
          wincore_wddvmem_cpp_stubFunction_FUN_005898e0();
        }
        else if (message == 0x1c) {
          g_INT_0061e994 = g_WindowActive;
          g_WindowActive = wParam;
          if (iVar4 != wParam) {
            hThread = GetCurrentProcess();
            iVar4 = g_WindowActive;
            if (g_WindowActive == 0) {
              wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005897b0();
              SetThreadPriority(hThread,-0xf);
              g_INT_02664634 = iVar4;
            }
            else {
              SetThreadPriority(hThread,1);
              wincore_wddvmem_cpp_videoRestore_FUN_005897e0();
              if (g_INT_0061e994 != -1) {
                engine_2d_c_clearInputAndWait_FUN_004032b0();
                g_INT_02664634 = 1;
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
      uVar3 = lParam >> 0x10 & g_InputKeyMask;
      g_FLOAT_02664fa0 = 0.0;
      g_KeyboardState[uVar3] = '\x01';
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
  g_MessageFlags[lParam >> 0x10 & g_InputKeyMask] = 1;
  g_FLOAT_02664fa0 = 0.0;
LAB_0058ee1e:
  LVar2 = DefWindowProcA(hWnd,message,wParam,lParam);
  return LVar2;
}
