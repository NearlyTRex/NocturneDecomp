// Name: wincore_wddvmem.cpp_videoRestore_FUN_005edc80
// Address: 005edc80
// Address Range: [[005edc80, 005edd7f] [005edd81, 005eddf1]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_videoRestore_FUN_005edc80(void)
// Cross-references:
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 (005eda20) at 005edaed [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_mainWindowProc_FUN_005f3150 (005f3150) at 005f325c [UNCONDITIONAL_CALL]
// Globals:
//   SetFocus* PTR_SetFocus_006114e8 = 00211bd4
//   TerminatedCString s_wincore_wddvmem_cpp_00657a60
//   TerminatedCString s_videoRestore_Unable_to_s_00657a77
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_FullscreenMode
//   IDirectDraw* g_DirectDrawObject
//   IDirectDrawSurface* g_DirectDrawSurface
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   IUnknown* g_DirectDrawUnknown
//   int g_GraphicsResetFlag
//   HWND g_MainWindowHandle
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_ddraw.c_DirectDrawCreate
//   SetFocus
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005edc80(void)

{
  int iVar1;
  HRESULT HVar2;
  IDirectDrawSurface *pIVar3;
  IUnknown *pIVar4;
  
  if ((g_FullscreenMode == 0) || (g_GraphicsResetFlag == 0)) {
    if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
      (*g_DirectDrawSurface->vtable->Restore)(g_DirectDrawSurface);
      (*g_SoftwareRenderSurface->vtable->Restore)(g_SoftwareRenderSurface);
      if (g_DirectDrawUnknown != (IUnknown *)0x0) {
        pIVar3 = g_DirectDrawSurface;
        pIVar4 = g_DirectDrawUnknown;
        iVar1 = (*(code *)g_DirectDrawSurface->vtable->SetPalette)();
        if (iVar1 != 0) {
          g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
          g_CurrentLineNumber = 999;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("videoRestore - Unable to set front buffer palette",pIVar3,pIVar4);
          return;
        }
      }
    }
  }
  else {
    iVar1 = wincore_windll_cpp_setResolutionAndColorTable_FUN_005b7460
                      (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    if (iVar1 == 0) {
      g_FullscreenMode = iVar1;
      if (g_DirectDrawUnknown != (IUnknown *)0x0) {
        (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
        g_DirectDrawUnknown = (IUnknown *)0x0;
      }
      if (g_SoftwareRenderSurface != (IDirectDrawSurface *)0x0) {
        (*g_SoftwareRenderSurface->vtable->Release)((IUnknown *)g_SoftwareRenderSurface);
        g_SoftwareRenderSurface = (IDirectDrawSurface *)0x0;
      }
      if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
        (*g_DirectDrawSurface->vtable->Release)((IUnknown *)g_DirectDrawSurface);
        g_DirectDrawSurface = (IDirectDrawSurface *)0x0;
      }
      if (g_DirectDrawObject != (IDirectDraw *)0x0) {
        (*g_DirectDrawObject->vtable->RestoreDisplayMode)(g_DirectDrawObject);
        (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
        g_DirectDrawObject = (IDirectDraw *)0x0;
      }
      HVar2 = crt_ddraw_c_DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
      if (HVar2 == 0) {
        (*g_DirectDrawObject->vtable->SetCooperativeLevel)
                  (g_DirectDrawObject,g_MainWindowHandle,0x11);
      }
      wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
                (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    }
    (*PTR_SetFocus_006114e8)(g_MainWindowHandle);
  }
  return;
}


// Assembly code:
// 005edc80: PUSH EBX
//   Label: wincore_wddvmem.cpp_videoRestore_FUN_005edc80
// 005edc81: PUSH ESI
// 005edc82: PUSH EBP
// 005edc83: CMP dword ptr [0x03f6b878],0x0
//   XREF to: 03f6b878 (READ)
// 005edc8a: JZ 0x005edd97
//   XREF to: 005edd97 (CONDITIONAL_JUMP)
// 005edc90: CMP dword ptr [0x03f95938],0x0
//   XREF to: 03f95938 (READ)
// 005edc97: JZ 0x005edd97
//   XREF to: 005edd97 (CONDITIONAL_JUMP)
// 005edc9d: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005edca3: PUSH EDX
// 005edca4: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005edcaa: PUSH ECX
// 005edcab: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005edcb1: PUSH EBX
// 005edcb2: CALL wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
//   XREF to: 005b7460 (UNCONDITIONAL_CALL)
// 005edcb7: ADD ESP,0xc
// 005edcba: TEST EAX,EAX
// 005edcbc: JNZ 0x005edd61
//   XREF to: 005edd61 (CONDITIONAL_JUMP)
// 005edcc2: PUSH EDI
// 005edcc3: MOV EDI,dword ptr [0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005edcc9: MOV [0x03f6b878],EAX
//   XREF to: 03f6b878 (WRITE)
// 005edcce: TEST EDI,EDI
// 005edcd0: JZ 0x005edce0
//   XREF to: 005edce0 (CONDITIONAL_JUMP)
// 005edcd2: PUSH EDI
// 005edcd3: MOV EDX,dword ptr [EDI]
// 005edcd5: XOR EBP,EBP
// 005edcd7: CALL dword ptr [EDX + 0x8]
// 005edcda: MOV dword ptr [0x03f9592c],EBP
//   XREF to: 03f9592c (WRITE)
// 005edce0: MOV EAX,[0x03f95928]
//   Label: LAB_005edce0
//   XREF to: 03f95928 (READ)
// 005edce5: TEST EAX,EAX
// 005edce7: JZ 0x005edcf7
//   XREF to: 005edcf7 (CONDITIONAL_JUMP)
// 005edce9: PUSH EAX
// 005edcea: MOV EDX,dword ptr [EAX]
// 005edcec: CALL dword ptr [EDX + 0x8]
// 005edcef: XOR EDX,EDX
// 005edcf1: MOV dword ptr [0x03f95928],EDX
//   XREF to: 03f95928 (WRITE)
// 005edcf7: MOV ECX,dword ptr [0x03f95924]
//   Label: LAB_005edcf7
//   XREF to: 03f95924 (READ)
// 005edcfd: TEST ECX,ECX
// 005edcff: JZ 0x005edd0f
//   XREF to: 005edd0f (CONDITIONAL_JUMP)
// 005edd01: PUSH ECX
// 005edd02: MOV EDX,dword ptr [ECX]
// 005edd04: XOR EBX,EBX
// 005edd06: CALL dword ptr [EDX + 0x8]
// 005edd09: MOV dword ptr [0x03f95924],EBX
//   XREF to: 03f95924 (WRITE)
// 005edd0f: MOV ESI,dword ptr [0x03f95920]
//   Label: LAB_005edd0f
//   XREF to: 03f95920 (READ)
// 005edd15: TEST ESI,ESI
// 005edd17: JZ 0x005edd32
//   XREF to: 005edd32 (CONDITIONAL_JUMP)
// 005edd19: PUSH ESI
// 005edd1a: MOV EDX,dword ptr [ESI]
// 005edd1c: CALL dword ptr [EDX + 0x4c]
// 005edd1f: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005edd24: PUSH EAX
// 005edd25: MOV EDX,dword ptr [EAX]
// 005edd27: XOR EDI,EDI
// 005edd29: CALL dword ptr [EDX + 0x8]
// 005edd2c: MOV dword ptr [0x03f95920],EDI
//   XREF to: 03f95920 (WRITE)
// 005edd32: PUSH 0x0
//   Label: LAB_005edd32
// 005edd34: PUSH 0x3f95920
//   XREF to: 03f95920 (DATA)
// 005edd39: PUSH 0x0
// 005edd3b: CALL crt_ddraw.c_DirectDrawCreate
//   XREF to: 00610ece (UNCONDITIONAL_CALL)
// 005edd40: TEST EAX,EAX
// 005edd42: JZ 0x005edd81
//   XREF to: 005edd81 (CONDITIONAL_JUMP)
// 005edd44: MOV EAX,[0x0067939c]
//   Label: LAB_005edd44
//   XREF to: 0067939c (READ)
// 005edd49: PUSH EAX
// 005edd4a: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005edd50: PUSH EDX
// 005edd51: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005edd57: PUSH ECX
// 005edd58: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 005edd5d: ADD ESP,0xc
// 005edd60: POP EDI
// 005edd61: MOV EBX,dword ptr [0x03f98468]
//   Label: LAB_005edd61
//   XREF to: 03f98468 (READ)
// 005edd67: PUSH EBX
// 005edd68: CALL dword ptr CS:[0x6114e8]
//   XREF to: EXTERNAL:00000046 (COMPUTED_CALL)
//   XREF to: 006114e8 (READ)
// 005edd6f: POP EBP
//   Label: LAB_005edd6f
// 005edd70: POP ESI
// 005edd71: POP EBX
// 005edd72: LEA EAX,[EAX]
// 005edd78: LEA EDX,[EDX]
// 005edd7e: MOV EAX,EAX
// 005edd81: PUSH 0x11
//   Label: LAB_005edd81
// 005edd83: MOV EBP,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005edd89: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005edd8e: PUSH EBP
// 005edd8f: MOV EDX,dword ptr [EAX]
// 005edd91: PUSH EAX
// 005edd92: CALL dword ptr [EDX + 0x50]
// 005edd95: JMP 0x005edd44
//   XREF to: 005edd44 (UNCONDITIONAL_JUMP)
// 005edd97: MOV EBX,dword ptr [0x03f95924]
//   Label: LAB_005edd97
//   XREF to: 03f95924 (READ)
// 005edd9d: TEST EBX,EBX
// 005edd9f: JZ 0x005edd6f
//   XREF to: 005edd6f (CONDITIONAL_JUMP)
// 005edda1: PUSH EBX
// 005edda2: MOV EDX,dword ptr [EBX]
// 005edda4: CALL dword ptr [EDX + 0x6c]
// 005edda7: MOV EAX,[0x03f95928]
//   XREF to: 03f95928 (READ)
// 005eddac: PUSH EAX
// 005eddad: MOV EDX,dword ptr [EAX]
// 005eddaf: CALL dword ptr [EDX + 0x6c]
// 005eddb2: MOV ESI,dword ptr [0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005eddb8: TEST ESI,ESI
// 005eddba: JZ 0x005edd6f
//   XREF to: 005edd6f (CONDITIONAL_JUMP)
// 005eddbc: PUSH ESI
// 005eddbd: MOV EAX,[0x03f95924]
//   XREF to: 03f95924 (READ)
// 005eddc2: PUSH EAX
// 005eddc3: MOV EDX,dword ptr [EAX]
// 005eddc5: CALL dword ptr [EDX + 0x7c]
// 005eddc8: TEST EAX,EAX
// 005eddca: JZ 0x005edd6f
//   XREF to: 005edd6f (CONDITIONAL_JUMP)
// 005eddcc: MOV EBP,0x657a60
//   XREF to: 00657a60 (DATA)
// 005eddd1: MOV EAX,0x3e7
// 005eddd6: PUSH 0x657a77
//   XREF to: 00657a77 (DATA)
// 005edddb: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005edde1: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005edde6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005eddeb: ADD ESP,0x4
// 005eddee: POP EBP
// 005eddef: POP ESI
// 005eddf0: POP EBX
// 005eddf1: RET
