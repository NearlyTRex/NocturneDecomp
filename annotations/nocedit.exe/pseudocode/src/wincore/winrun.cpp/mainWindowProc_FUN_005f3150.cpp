// Name: wincore_winrun.cpp_mainWindowProc_FUN_005f3150
// Address: 005f3150
// Address Range: [[005f3150, 005f35d9]]
// Convention: __stdcall
// Signature: LRESULT wincore_winrun.cpp_mainWindowProc_FUN_005f3150(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
// Cross-references:
//   wincore_winrun.cpp_winMain_FUN_005f3680 (005f3680) at 005f37eb [DATA]
// Globals:
//   DefWindowProcA* PTR_DefWindowProcA_00611498 = 00211a8c
//   PostQuitMessage* PTR_PostQuitMessage_006114d4 = 00211b80
//   SetCursor* PTR_SetCursor_006114e4 = 00211bc8
//   GetCurrentProcess* GetCurrentProcess = 00211e5a
//   SetThreadPriority* SetThreadPriority = 002121f6
//   int g_InputKeyMask = 0x7f
//   int g_WindowActive = -0x1
//   int g_PreviousActiveState = -0x1
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   char[256] g_KeyboardState
//   byte g_LeftMousePressed
//   byte g_RightMousePressed
//   byte g_MiddleMousePressed
//   HWND g_MainWindowHandle
//   int g_InputDisabled
//   int g_ApplicationActive
//   undefined4 g_MessageFlags[1]
//   int g_LeftMouseReleased
//   int g_RightMouseReleased
//   int g_MiddleMouseReleased
//   int g_NumWindowMessageHandlers
//   WNDPROC[4] g_WindowMessageHandlers
//   undefined4 g_WindowMessageHandlers[1]
// Function calls:
//   DefWindowProcA
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   GetCurrentProcess
//   PostQuitMessage
//   SetCursor
//   SetThreadPriority
//   wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50
//   wincore_wddvmem.cpp_stubFunction_FUN_005edd80
//   wincore_wddvmem.cpp_videoRestore_FUN_005edc80
//   wincore_winrun.cpp_enqueueInput_FUN_005f2f30
//   wincore_winvideo.cpp_closeMovie_FUN_005f46b0

#include "nocturne.h"

LRESULT __stdcall
wincore_winrun_cpp_mainWindowProc_FUN_005f3150(HWND hWnd,UINT message,WPARAM wParam,LPARAM lParam)

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
      iVar1 = (**(code **)((int)g_WindowMessageHandlers + iVar5))();
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
            g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags | 1;
            g_LeftMousePressed = 1;
            return 0;
          }
          if (message < 0x203) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_LeftMouseReleased = 1;
            g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
            return 0;
          }
          if (message == 0x204) {
            g_MouseX = lParam & 0xffff;
            g_MouseY = uVar3;
            g_RightMousePressed = 1;
            g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags | 2;
            return 0;
          }
        }
      }
      else {
        if (message < 0x206) {
          g_MouseX = lParam & 0xffff;
          g_MouseY = uVar3;
          g_RightMouseReleased = 1;
          g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfd;
          return 0;
        }
        if (message < 0x30f) {
          if (0x206 < message) {
            if (message < 0x208) {
              g_MouseX = lParam & 0xffff;
              g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags | 4;
              g_MouseY = uVar3;
              g_MiddleMousePressed = 1;
              return 0;
            }
            if (message == 0x208) {
              g_MouseX = lParam & 0xffff;
              g_MouseY = uVar3;
              g_MiddleMouseReleased = 1;
              g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfb;
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
            if (hWnd == (HWND)wParam) goto LAB_005f31de;
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
        (*PTR_PostQuitMessage_006114d4)(0);
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
            hThread = (*GetCurrentProcess)();
            iVar4 = g_WindowActive;
            if (g_WindowActive == 0) {
              wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005edc50();
              (*SetThreadPriority)(hThread,-0xf);
              g_ApplicationActive = iVar4;
            }
            else {
              (*SetThreadPriority)(hThread,1);
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
    (*PTR_SetCursor_006114e4)((HCURSOR)0x0);
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
  g_MessageFlags[(lParam >> 0x10 & g_InputKeyMask) + 1] = 1;
LAB_005f31de:
  LVar2 = (*PTR_DefWindowProcA_00611498)(hWnd,message,wParam,lParam);
  return LVar2;
}


// Assembly code:
// 005f3150: PUSH EBX
//   Label: wincore_winrun.cpp_mainWindowProc_FUN_005f3150
// 005f3151: PUSH ESI
// 005f3152: PUSH EDI
// 005f3153: PUSH EBP
// 005f3154: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f3158: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005f315c: CMP EBP,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005f3162: JNZ 0x005f31f2
//   XREF to: 005f31f2 (CONDITIONAL_JUMP)
// 005f3168: MOV ECX,dword ptr [0x03f98ddc]
//   XREF to: 03f98ddc (READ)
// 005f316e: XOR EBX,EBX
// 005f3170: TEST ECX,ECX
// 005f3172: JLE 0x005f319e
//   XREF to: 005f319e (CONDITIONAL_JUMP)
// 005f3174: XOR ESI,ESI
// 005f3176: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_005f3176
//   XREF to: Stack[0x10] (READ)
// 005f317a: PUSH EDX
// 005f317b: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005f317f: PUSH ECX
// 005f3180: PUSH EDI
// 005f3181: MOV EAX,ESI
// 005f3183: PUSH EBP
// 005f3184: CALL dword ptr [EAX + 0x3f98de0]
//   XREF to: 03f98de0 (READ)
//   XREF to: 03f98de4 (READ)
// 005f318a: ADD ESP,0x10
// 005f318d: TEST EAX,EAX
// 005f318f: JNZ 0x005f31fe
//   XREF to: 005f31fe (CONDITIONAL_JUMP)
// 005f3191: MOV EAX,[0x03f98ddc]
//   XREF to: 03f98ddc (READ)
// 005f3196: INC EBX
// 005f3197: ADD ESI,0x4
// 005f319a: CMP EBX,EAX
// 005f319c: JL 0x005f3176
//   XREF to: 005f3176 (CONDITIONAL_JUMP)
// 005f319e: MOV EAX,EDI
//   Label: LAB_005f319e
// 005f31a0: CMP EDI,0x112
// 005f31a6: JNC 0x005f34a9
//   XREF to: 005f34a9 (CONDITIONAL_JUMP)
// 005f31ac: CMP EDI,0x20
// 005f31af: JNC 0x005f3559
//   XREF to: 005f3559 (CONDITIONAL_JUMP)
// 005f31b5: CMP EDI,0x2
// 005f31b8: JC 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f31ba: JA 0x005f35bd
//   XREF to: 005f35bd (CONDITIONAL_JUMP)
// 005f31c0: PUSH 0x0
// 005f31c2: MOV EBX,0x1
// 005f31c7: CALL dword ptr CS:[0x6114d4]
//   XREF to: EXTERNAL:00000041 (COMPUTED_CALL)
//   XREF to: 006114d4 (READ)
// 005f31ce: MOV dword ptr [0x03f9846c],EBX
//   XREF to: 03f9846c (WRITE)
// 005f31d4: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_005f31d4
// 005f31d8: PUSH ESI
// 005f31d9: MOV EAX,dword ptr [ESP + 0x20]
// 005f31dd: PUSH EAX
// 005f31de: PUSH EDI
//   Label: LAB_005f31de
// 005f31df: PUSH EBP
// 005f31e0: CALL dword ptr CS:[0x611498]
//   XREF to: EXTERNAL:00000032 (COMPUTED_CALL)
//   XREF to: 00611498 (READ)
// 005f31e7: MOV EDI,EAX
// 005f31e9: MOV EAX,EDI
// 005f31eb: POP EBP
// 005f31ec: POP EDI
// 005f31ed: POP ESI
// 005f31ee: POP EBX
// 005f31ef: RET 0x10
// 005f31f2: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_005f31f2
//   XREF to: Stack[0x10] (READ)
// 005f31f6: PUSH EBX
// 005f31f7: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005f31fb: PUSH ESI
// 005f31fc: JMP 0x005f31de
//   XREF to: 005f31de (UNCONDITIONAL_JUMP)
// 005f31fe: XOR EDI,EDI
//   Label: LAB_005f31fe
// 005f3200: MOV EAX,EDI
// 005f3202: POP EBP
// 005f3203: POP EDI
// 005f3204: POP ESI
// 005f3205: POP EBX
// 005f3206: RET 0x10
// 005f3209: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_005f3209
// 005f320d: CMP EAX,0xf140
// 005f3212: JC 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f3214: JBE 0x005f31fe
//   XREF to: 005f31fe (CONDITIONAL_JUMP)
// 005f3216: CMP EAX,0xf170
// 005f321b: JZ 0x005f31fe
//   XREF to: 005f31fe (CONDITIONAL_JUMP)
// 005f321d: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f321f: MOV EAX,[0x006849a4]
//   Label: LAB_005f321f
//   XREF to: 006849a4 (READ)
// 005f3224: MOV [0x006849ac],EAX
//   XREF to: 006849ac (WRITE)
// 005f3229: MOV EAX,dword ptr [ESP + 0x1c]
// 005f322d: MOV [0x006849a4],EAX
//   XREF to: 006849a4 (WRITE)
// 005f3232: MOV EAX,[0x006849ac]
//   XREF to: 006849ac (READ)
// 005f3237: CMP EAX,dword ptr [0x006849a4]
//   XREF to: 006849a4 (READ)
// 005f323d: JZ 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f323f: CALL dword ptr CS:[0x61157c]
//   XREF to: EXTERNAL:0000006a (COMPUTED_CALL)
//   XREF to: 0061157c (READ)
// 005f3246: MOV ESI,dword ptr [0x006849a4]
//   XREF to: 006849a4 (READ)
// 005f324c: MOV EBX,EAX
// 005f324e: TEST ESI,ESI
// 005f3250: JZ 0x005f3282
//   XREF to: 005f3282 (CONDITIONAL_JUMP)
// 005f3252: PUSH 0x1
// 005f3254: PUSH EAX
// 005f3255: CALL dword ptr CS:[0x61163c]
//   XREF to: EXTERNAL:0000009a (COMPUTED_CALL)
//   XREF to: 0061163c (READ)
// 005f325c: CALL wincore_wddvmem.cpp_videoRestore_FUN_005edc80
//   XREF to: 005edc80 (UNCONDITIONAL_CALL)
// 005f3261: CMP dword ptr [0x006849ac],-0x1
//   XREF to: 006849ac (READ)
// 005f3268: JZ 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f326e: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005f3273: MOV dword ptr [0x03f98470],0x1
//   XREF to: 03f98470 (WRITE)
// 005f327d: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f3282: CALL wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50
//   Label: LAB_005f3282
//   XREF to: 005edc50 (UNCONDITIONAL_CALL)
// 005f3287: PUSH -0xf
// 005f3289: PUSH EBX
// 005f328a: CALL dword ptr CS:[0x61163c]
//   XREF to: EXTERNAL:0000009a (COMPUTED_CALL)
//   XREF to: 0061163c (READ)
// 005f3291: MOV dword ptr [0x03f98470],ESI
//   XREF to: 03f98470 (WRITE)
// 005f3297: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f329c: PUSH 0x0
//   Label: LAB_005f329c
// 005f329e: MOV EDI,0x1
// 005f32a3: CALL dword ptr CS:[0x6114e4]
//   XREF to: EXTERNAL:00000045 (COMPUTED_CALL)
//   XREF to: 006114e4 (READ)
// 005f32aa: MOV EAX,EDI
// 005f32ac: POP EBP
// 005f32ad: POP EDI
// 005f32ae: POP ESI
// 005f32af: POP EBX
// 005f32b0: RET 0x10
// 005f32b3: CMP EBP,dword ptr [ESP + 0x1c]
//   Label: LAB_005f32b3
// 005f32b7: JZ 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f32bd: CALL wincore_wddvmem.cpp_stubFunction_FUN_005edd80
//   Label: LAB_005f32bd
//   XREF to: 005edd80 (UNCONDITIONAL_CALL)
// 005f32c2: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f32c7: CALL wincore_wddvmem.cpp_stubFunction_FUN_005edd80
//   Label: LAB_005f32c7
//   XREF to: 005edd80 (UNCONDITIONAL_CALL)
// 005f32cc: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f32d1: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005f32d1
// 005f32d5: MOV EDX,dword ptr [0x006793a8]
//   XREF to: 006793a8 (READ)
// 005f32db: SAR EAX,0x10
// 005f32de: AND EAX,EDX
// 005f32e0: MOV byte ptr [EAX + 0x2d03e98],0x1
//   XREF to: 02d03e98 (DATA)
// 005f32e7: CMP EAX,0x3e
// 005f32ea: JNZ 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f32f0: XOR EDI,EDI
// 005f32f2: MOV EAX,EDI
// 005f32f4: POP EBP
// 005f32f5: POP EDI
// 005f32f6: POP ESI
// 005f32f7: POP EBX
// 005f32f8: RET 0x10
// 005f32fb: XOR EAX,EDI
//   Label: LAB_005f32fb
// 005f32fd: MOV AL,byte ptr [ESP + 0x1c]
// 005f3301: TEST EAX,EAX
// 005f3303: JZ 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f3309: AND EAX,0xffff
// 005f330e: PUSH EAX
// 005f330f: CALL wincore_winrun.cpp_enqueueInput_FUN_005f2f30
//   XREF to: 005f2f30 (UNCONDITIONAL_CALL)
// 005f3314: ADD ESP,0x4
// 005f3317: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f331c: XOR EBX,EBX
//   Label: LAB_005f331c
// 005f331e: MOV BX,word ptr [ESP + 0x20]
// 005f3323: MOV dword ptr [0x02cf6a8c],EBX
//   XREF to: 02cf6a8c (WRITE)
// 005f3329: AND EAX,0xffff
// 005f332e: XOR EDI,EDI
// 005f3330: MOV [0x02cf6a90],EAX
//   XREF to: 02cf6a90 (WRITE)
// 005f3335: MOV EAX,EDI
// 005f3337: POP EBP
// 005f3338: POP EDI
// 005f3339: POP ESI
// 005f333a: POP EBX
// 005f333b: RET 0x10
// 005f333e: XOR EBX,EBX
//   Label: LAB_005f333e
// 005f3340: MOV BX,word ptr [ESP + 0x20]
// 005f3345: MOV dword ptr [0x02cf6a8c],EBX
//   XREF to: 02cf6a8c (WRITE)
// 005f334b: AND EAX,0xffff
// 005f3350: MOV [0x02cf6a90],EAX
//   XREF to: 02cf6a90 (WRITE)
// 005f3355: OR byte ptr [0x02cf6a94],0x1
//   XREF to: 02cf6a94 (READ_WRITE)
// 005f335c: MOV AH,0x1
// 005f335e: XOR EDI,EDI
// 005f3360: MOV byte ptr [0x02d04098],AH
//   XREF to: 02d04098 (WRITE)
// 005f3366: MOV EAX,EDI
// 005f3368: POP EBP
// 005f3369: POP EDI
// 005f336a: POP ESI
// 005f336b: POP EBX
// 005f336c: RET 0x10
// 005f336f: XOR EBX,EBX
//   Label: LAB_005f336f
// 005f3371: MOV BX,word ptr [ESP + 0x20]
// 005f3376: MOV dword ptr [0x02cf6a8c],EBX
//   XREF to: 02cf6a8c (WRITE)
// 005f337c: MOV EDI,0x1
// 005f3381: AND EAX,0xffff
// 005f3386: MOV CH,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 005f338c: MOV [0x02cf6a90],EAX
//   XREF to: 02cf6a90 (WRITE)
// 005f3391: AND CH,0xfe
// 005f3394: MOV dword ptr [0x03f98c7c],EDI
//   XREF to: 03f98c7c (WRITE)
// 005f339a: MOV byte ptr [0x02cf6a94],CH
//   XREF to: 02cf6a94 (WRITE)
// 005f33a0: XOR EDI,EDI
// 005f33a2: MOV EAX,EDI
// 005f33a4: POP EBP
// 005f33a5: POP EDI
// 005f33a6: POP ESI
// 005f33a7: POP EBX
// 005f33a8: RET 0x10
// 005f33ab: XOR EBX,EBX
//   Label: LAB_005f33ab
// 005f33ad: MOV BX,word ptr [ESP + 0x20]
// 005f33b2: MOV dword ptr [0x02cf6a8c],EBX
//   XREF to: 02cf6a8c (WRITE)
// 005f33b8: MOV CL,0x1
// 005f33ba: MOV BH,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 005f33c0: AND EAX,0xffff
// 005f33c5: XOR EDI,EDI
// 005f33c7: MOV [0x02cf6a90],EAX
//   XREF to: 02cf6a90 (WRITE)
// 005f33cc: OR BH,0x2
// 005f33cf: MOV byte ptr [0x02d04099],CL
//   XREF to: 02d04099 (WRITE)
// 005f33d5: MOV byte ptr [0x02cf6a94],BH
//   XREF to: 02cf6a94 (WRITE)
// 005f33db: MOV EAX,EDI
// 005f33dd: POP EBP
// 005f33de: POP EDI
// 005f33df: POP ESI
// 005f33e0: POP EBX
// 005f33e1: RET 0x10
// 005f33e4: XOR EBX,EBX
//   Label: LAB_005f33e4
// 005f33e6: MOV BX,word ptr [ESP + 0x20]
// 005f33eb: MOV dword ptr [0x02cf6a8c],EBX
//   XREF to: 02cf6a8c (WRITE)
// 005f33f1: MOV ESI,0x1
// 005f33f6: MOV BL,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 005f33fc: AND EAX,0xffff
// 005f3401: XOR EDI,EDI
// 005f3403: MOV [0x02cf6a90],EAX
//   XREF to: 02cf6a90 (WRITE)
// 005f3408: AND BL,0xfd
// 005f340b: MOV dword ptr [0x03f98c80],ESI
//   XREF to: 03f98c80 (WRITE)
// 005f3411: MOV byte ptr [0x02cf6a94],BL
//   XREF to: 02cf6a94 (WRITE)
// 005f3417: MOV EAX,EDI
// 005f3419: POP EBP
// 005f341a: POP EDI
// 005f341b: POP ESI
// 005f341c: POP EBX
// 005f341d: RET 0x10
// 005f3420: XOR EBX,EBX
//   Label: LAB_005f3420
// 005f3422: MOV BX,word ptr [ESP + 0x20]
// 005f3427: MOV dword ptr [0x02cf6a8c],EBX
//   XREF to: 02cf6a8c (WRITE)
// 005f342d: MOV DL,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 005f3433: AND EAX,0xffff
// 005f3438: OR DL,0x4
// 005f343b: XOR EDI,EDI
// 005f343d: MOV byte ptr [0x02cf6a94],DL
//   XREF to: 02cf6a94 (WRITE)
// 005f3443: MOV DH,0x1
// 005f3445: MOV [0x02cf6a90],EAX
//   XREF to: 02cf6a90 (WRITE)
// 005f344a: MOV byte ptr [0x02d040a4],DH
//   XREF to: 02d040a4 (WRITE)
// 005f3450: MOV EAX,EDI
// 005f3452: POP EBP
// 005f3453: POP EDI
// 005f3454: POP ESI
// 005f3455: POP EBX
// 005f3456: RET 0x10
// 005f3459: XOR EBX,EBX
//   Label: LAB_005f3459
// 005f345b: MOV BX,word ptr [ESP + 0x20]
// 005f3460: MOV dword ptr [0x02cf6a8c],EBX
//   XREF to: 02cf6a8c (WRITE)
// 005f3466: AND EAX,0xffff
// 005f346b: MOV EBX,0x1
// 005f3470: MOV [0x02cf6a90],EAX
//   XREF to: 02cf6a90 (WRITE)
// 005f3475: MOV AH,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 005f347b: XOR EDI,EDI
// 005f347d: AND AH,0xfb
// 005f3480: MOV dword ptr [0x03f98cac],EBX
//   XREF to: 03f98cac (WRITE)
// 005f3486: MOV byte ptr [0x02cf6a94],AH
//   XREF to: 02cf6a94 (WRITE)
// 005f348c: MOV EAX,EDI
// 005f348e: POP EBP
// 005f348f: POP EDI
// 005f3490: POP ESI
// 005f3491: POP EBX
// 005f3492: RET 0x10
// 005f3495: MOV EDX,dword ptr [0x03f98468]
//   Label: LAB_005f3495
//   XREF to: 03f98468 (READ)
// 005f349b: PUSH EDX
// 005f349c: CALL wincore_winvideo.cpp_closeMovie_FUN_005f46b0
//   XREF to: 005f46b0 (UNCONDITIONAL_CALL)
// 005f34a1: ADD ESP,0x4
// 005f34a4: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f34a9: JBE 0x005f3209
//   Label: LAB_005f34a9
//   XREF to: 005f3209 (CONDITIONAL_JUMP)
// 005f34af: MOV EAX,dword ptr [ESP + 0x20]
// 005f34b3: SHR EAX,0x10
// 005f34b6: AND EAX,0xffff
// 005f34bb: CMP EDI,0x205
// 005f34c1: JNC 0x005f34dc
//   XREF to: 005f34dc (CONDITIONAL_JUMP)
// 005f34c3: CMP EDI,0x201
// 005f34c9: JNC 0x005f3536
//   XREF to: 005f3536 (CONDITIONAL_JUMP)
// 005f34cb: CMP EDI,0x200
// 005f34d1: JZ 0x005f331c
//   XREF to: 005f331c (CONDITIONAL_JUMP)
// 005f34d7: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f34dc: JBE 0x005f33e4
//   Label: LAB_005f34dc
//   XREF to: 005f33e4 (CONDITIONAL_JUMP)
// 005f34e2: CMP EDI,0x30f
// 005f34e8: JNC 0x005f350d
//   XREF to: 005f350d (CONDITIONAL_JUMP)
// 005f34ea: CMP EDI,0x207
// 005f34f0: JC 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f34f6: JBE 0x005f3420
//   XREF to: 005f3420 (CONDITIONAL_JUMP)
// 005f34fc: CMP EDI,0x208
// 005f3502: JZ 0x005f3459
//   XREF to: 005f3459 (CONDITIONAL_JUMP)
// 005f3508: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f350d: JBE 0x005f32bd
//   Label: LAB_005f350d
//   XREF to: 005f32bd (CONDITIONAL_JUMP)
// 005f3513: CMP EDI,0x311
// 005f3519: JC 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f351f: JBE 0x005f32b3
//   XREF to: 005f32b3 (CONDITIONAL_JUMP)
// 005f3525: CMP EDI,0x3b9
// 005f352b: JZ 0x005f3495
//   XREF to: 005f3495 (CONDITIONAL_JUMP)
// 005f3531: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f3536: JBE 0x005f333e
//   Label: LAB_005f3536
//   XREF to: 005f333e (CONDITIONAL_JUMP)
// 005f353c: CMP EDI,0x202
// 005f3542: JBE 0x005f336f
//   XREF to: 005f336f (CONDITIONAL_JUMP)
// 005f3548: CMP EDI,0x204
// 005f354e: JZ 0x005f33ab
//   XREF to: 005f33ab (CONDITIONAL_JUMP)
// 005f3554: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f3559: JBE 0x005f329c
//   Label: LAB_005f3559
//   XREF to: 005f329c (CONDITIONAL_JUMP)
// 005f355f: CMP EDI,0x102
// 005f3565: JNC 0x005f3598
//   XREF to: 005f3598 (CONDITIONAL_JUMP)
// 005f3567: CMP EDI,0x100
// 005f356d: JC 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f3573: JBE 0x005f32d1
//   XREF to: 005f32d1 (CONDITIONAL_JUMP)
// 005f3579: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005f3579
// 005f357d: MOV EBX,dword ptr [0x006793a8]
//   XREF to: 006793a8 (READ)
// 005f3583: SAR EAX,0x10
// 005f3586: AND EAX,EBX
// 005f3588: MOV dword ptr [EAX*0x4 + 0x3f9847c],0x1
//   XREF to: 03f9847c (DATA)
// 005f3593: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f3598: JBE 0x005f32fb
//   Label: LAB_005f3598
//   XREF to: 005f32fb (CONDITIONAL_JUMP)
// 005f359e: CMP EDI,0x104
// 005f35a4: JC 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f35aa: JBE 0x005f32d1
//   XREF to: 005f32d1 (CONDITIONAL_JUMP)
// 005f35b0: CMP EDI,0x105
// 005f35b6: JZ 0x005f3579
//   XREF to: 005f3579 (CONDITIONAL_JUMP)
// 005f35b8: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
// 005f35bd: CMP EDI,0xf
//   Label: LAB_005f35bd
// 005f35c0: JC 0x005f31d4
//   XREF to: 005f31d4 (CONDITIONAL_JUMP)
// 005f35c6: JBE 0x005f32c7
//   XREF to: 005f32c7 (CONDITIONAL_JUMP)
// 005f35cc: CMP EDI,0x1c
// 005f35cf: JZ 0x005f321f
//   XREF to: 005f321f (CONDITIONAL_JUMP)
// 005f35d5: JMP 0x005f31d4
//   XREF to: 005f31d4 (UNCONDITIONAL_JUMP)
