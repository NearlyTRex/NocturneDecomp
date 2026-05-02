// Name: wincore_winrun.cpp_mainWindowProc_FUN_005f3150
// Address: 005f3150
// MANUAL RECONSTRUCTION
// Main window procedure. Dispatches registered message handlers, then
// processes Win32 messages for mouse, keyboard, activation, and video.

#include "nocturne.h"

LRESULT __stdcall wincore_winrun_cpp_mainWindowProc_FUN_005f3150(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    int iVar1;
    LRESULT LVar2;
    uint uVar3;
    int iVar4;
    HANDLE hThread;

    if (hWnd != g_MainWindowHandle) goto LAB_default;

    // Dispatch registered message handlers
    for (int i = 0; i < g_NumWindowMessageHandlers; i++) {
        iVar1 = g_WindowMessageHandlers[i](hWnd, message, wParam, lParam);
        if (iVar1 != 0) {
            return 0;
        }
    }

    iVar4 = g_WindowActive;

    if (0x111 < message) {
        if (message < 0x113) {
            // WM_SYSCOMMAND range: block SC_SCREENSAVE, SC_MONITORPOWER
            if ((0xf13f < wParam) && ((wParam < 0xf141 || (wParam == 0xf170)))) {
                return 0;
            }
        }
        else {
            uVar3 = (uint)lParam >> 0x10;
            if (message < 0x205) {
                if (message < 0x201) {
                    if (message == 0x200) {
                        // WM_MOUSEMOVE
                        g_MouseX = lParam & 0xffff;
                        g_MouseY = uVar3;
                        return 0;
                    }
                }
                else {
                    if (message < 0x202) {
                        // WM_LBUTTONDOWN
                        g_MouseX = lParam & 0xffff;
                        g_MouseY = uVar3;
                        g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 1;
                        g_KeyboardState[0x200] = '\x01';
                        return 0;
                    }
                    if (message < 0x203) {
                        // WM_LBUTTONUP
                        g_MouseX = lParam & 0xffff;
                        g_MouseY = uVar3;
                        g_MessageFlags[512] = 1;
                        g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
                        return 0;
                    }
                    if (message == 0x204) {
                        // WM_RBUTTONDOWN
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
                    // WM_RBUTTONUP
                    g_MouseX = lParam & 0xffff;
                    g_MouseY = uVar3;
                    g_MessageFlags[513] = 1;
                    g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfd;
                    return 0;
                }
                if (message < 0x30f) {
                    if (0x206 < message) {
                        if (message < 0x208) {
                            // WM_MBUTTONDOWN
                            g_MouseX = lParam & 0xffff;
                            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] | 4;
                            g_MouseY = uVar3;
                            g_KeyboardState[0x20c] = '\x01';
                            return 0;
                        }
                        if (message == 0x208) {
                            // WM_MBUTTONUP
                            g_MouseX = lParam & 0xffff;
                            g_MouseY = uVar3;
                            g_MessageFlags[524] = 1;
                            g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfb;
                            return 0;
                        }
                    }
                }
                else {
                    if (0x30f < message) {
                        // WM_QUERYNEWPALETTE / WM_PALETTECHANGED
                        if (message < 0x311) goto LAB_default;
                        if (0x311 < message) {
                            if (message == 0x3b9) {
                                // Custom message: movie finished
                                wincore_winvideo_cpp_closeMovie_FUN_005f46b0(g_MainWindowHandle);
                            }
                            goto LAB_default;
                        }
                        // WM_PALETTECHANGED: ignore if we caused it
                        if (hWnd == (HWND)wParam) goto LAB_default;
                    }
                    // Palette change: reinit graphics
                    wincore_wddvmem_cpp_stubFunction_FUN_005edd80();
                }
            }
        }
        goto LAB_default;
    }

    if (message < 0x20) {
        if (1 < message) {
            if (message < 3) {
                // WM_DESTROY
                (*g_PostQuitMessageFunc)(0);
                g_InputDisabled = 1;
            }
            else if (0xe < message) {
                if (message < 0x10) {
                    // WM_PAINT
                    wincore_wddvmem_cpp_stubFunction_FUN_005edd80();
                }
                else if (message == 0x1c) {
                    // WM_ACTIVATEAPP
                    g_PreviousActiveState = g_WindowActive;
                    g_WindowActive = wParam;
                    if (iVar4 != wParam) {
                        hThread = (*g_GetCurrentProcessFunc)();
                        iVar4 = g_WindowActive;
                        if (g_WindowActive == 0) {
#if NOCTURNE_AUTHENTIC_WINDOWS
                            wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005edc50();
                            (*g_SetThreadPriorityFunc)(hThread, -0xf);
#endif
                            g_ApplicationActive = iVar4;
                        }
                        else {
#if NOCTURNE_AUTHENTIC_WINDOWS
                            (*g_SetThreadPriorityFunc)(hThread, 1);
                            wincore_wddvmem_cpp_videoRestore_FUN_005edc80();
#endif
                            if (g_PreviousActiveState != -1) {
                                engine_2d_c_clearInputAndWait_FUN_00403260();
                                g_ApplicationActive = 1;
                            }
                        }
                    }
                }
            }
        }
        goto LAB_default;
    }

    if (message < 0x21) {
        // WM_SETCURSOR
        (*g_SetCursorFunc)((HCURSOR)0x0);
        return 1;
    }

    if (message < 0x102) {
        if (message < 0x100) goto LAB_default;
        if (message < 0x101) {
LAB_keydown:
            // WM_KEYDOWN / WM_SYSKEYDOWN
            uVar3 = lParam >> 0x10 & g_InputKeyMask;
            g_KeyboardState[uVar3] = '\x01';
            if (uVar3 == 0x3e) {
                return 0;
            }
            goto LAB_default;
        }
    }
    else {
        if (message < 0x103) {
            // WM_CHAR
            if ((wParam & 0xff) != 0) {
                wincore_winrun_cpp_enqueueInput_FUN_005f2f30(wParam & 0xff);
            }
            goto LAB_default;
        }
        if (message < 0x104) goto LAB_default;
        if (message < 0x105) goto LAB_keydown;
        if (message != 0x105) goto LAB_default;
    }

    // WM_KEYUP / WM_SYSKEYUP
    g_MessageFlags[lParam >> 0x10 & g_InputKeyMask] = 1;

LAB_default:
    LVar2 = (*g_DefWindowProcAFunc)(hWnd, message, wParam, lParam);
    return LVar2;
}
