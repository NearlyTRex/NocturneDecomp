// Name: wincore_winrun.cpp_mainWindowProc_FUN_005f3150
// Address: 005f3150
// Address Range: [[005f3150, 005f35d9]]
// Convention: __stdcall
// Signature: LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_005f3150(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

#include "nocturne.h"

LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_005f3150(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  LRESULT LVar2;
  HANDLE hThread;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (hWnd != g_MainWindowHandle) goto LAB_005f31de;
  iVar4 = 0;
  if (0 < g_NumWindowMessageHandlers) {
    iVar5 = 0;
    do {
      iVar1 = (**(code **)((int)g_WindowMessageHandlers + iVar5))(hWnd,message,wParam,lParam);
      if (iVar1 != 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < g_NumWindowMessageHandlers);
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
            return 0;
          }
        }
        else {
          if (message < 0x202) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 1;
            g_LeftMousePressed = 1;
            return 0;
          }
          if (message < 0x203) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_LeftMouseReleased = 1;
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
            return 0;
          }
          if (message == 0x204) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_RightMousePressed = 1;
            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 2;
            return 0;
          }
        }
      }
      else {
        if (message < 0x206) {
          g_MouseX = lParam & 0xffff;
          g_MouseY = uVar3;
          g_RightMouseReleased = 1;
          g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfd;
          return 0;
        }
        if (message < 0x30f) {
          if (0x206 < message) {
            if (message < 0x208) {
              g_MouseX = lParam & 0xffff;
              g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 4;
              g_MouseY = uVar3;
              g_MiddleMousePressed = 1;
              return 0;
            }
            if (message == 0x208) {
              g_MouseX = lParam & 0xffff;
              g_MouseY = uVar3;
              g_MiddleMouseReleased = 1;
              g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfb;
              return 0;
            }
          }
        }
        else {
          if (0x30f < message) {
            if (message < 0x311) goto LAB_005f31de;
            if (0x311 < message) {
              if (message == 0x3b9) {
                wincore_winvideo_cpp_closeMovie_FUN_005f46b0(g_MainWindowHandle);
              }
              goto LAB_005f31de;
            }
            if (hWnd == wParam) goto LAB_005f31de;
          }
          wincore_wddvmem_cpp_stubFunction_FUN_005edd80();
        }
      }
    }
    goto LAB_005f31de;
  }
  if (message < 0x20) {
    if (1 < message) {
      if (message < 3) {
        (*g_PostQuitMessageFunc)(0);
        g_InputDisabled = 1;
      }
      else if (0xe < message) {
        if (message < 0x10) {
          wincore_wddvmem_cpp_stubFunction_FUN_005edd80();
        }
        else if (message == 0x1c) {
          g_PreviousActiveState = g_WindowActive;
          g_WindowActive = wParam;
          if (iVar4 != wParam) {
            hThread = (*g_GetCurrentProcessFunc)();
            iVar4 = g_WindowActive;
            if (g_WindowActive == 0) {
              wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005edc50();
              (*g_SetThreadPriorityFunc)(hThread,-0xf);
              g_ApplicationActive = iVar4;
            }
            else {
              (*g_SetThreadPriorityFunc)(hThread,1);
              wincore_wddvmem_cpp_videoRestore_FUN_005edc80();
              if (g_PreviousActiveState != -1) {
                engine_2d_c_clearInputAndWait_FUN_00403260();
                g_ApplicationActive = 1;
              }
            }
          }
        }
      }
    }
    goto LAB_005f31de;
  }
  if (message < 0x21) {
    (*g_SetCursorFunc)((HCURSOR)0x0);
    return 1;
  }
  if (message < 0x102) {
    if (message < 0x100) goto LAB_005f31de;
    if (message < 0x101) {
LAB_005f32d1:
      uVar3 = lParam >> 0x10 & g_InputKeyMask;
      g_KeyboardState[uVar3] = '\x01';
      if (uVar3 == 0x3e) {
        return 0;
      }
      goto LAB_005f31de;
    }
  }
  else {
    if (message < 0x103) {
      if ((wParam & 0xff) != 0) {
        wincore_winrun_cpp_enqueueInput_FUN_005f2f30(wParam & 0xff);
      }
      goto LAB_005f31de;
    }
    if (message < 0x104) goto LAB_005f31de;
    if (message < 0x105) goto LAB_005f32d1;
    if (message != 0x105) goto LAB_005f31de;
  }
  g_MessageFlags[lParam >> 0x10 & g_InputKeyMask] = 1;
LAB_005f31de:
  LVar2 = (*g_DefWindowProcAFunc)(hWnd,message,wParam,lParam);
  return LVar2;
}
