// Name: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0
// Address: 005ed4b0
// Address Range: [[005ed4b0, 005ed57d]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0(void)
// Cross-references:
//   engine_2d.c_reinitializeGraphicsSystem_FUN_005ed4b0 (00402a80) at 00402a80 [UNCONDITIONAL_JUMP]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   int g_FullscreenMode
//   IDirectDraw* g_DirectDrawObject
//   IDirectDrawSurface* g_DirectDrawSurface
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   IUnknown* g_DirectDrawUnknown
//   int g_GraphicsResetFlag
//   HWND g_MainWindowHandle
// Function calls:
//   crt_ddraw.c_DirectDrawCreate
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   wincore_windll.cpp_restoreVideoMode_FUN_005b75b0

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_reinitializeGraphicsSystem_FUN_005ed4b0(void)

{
  HRESULT HVar1;
  undefined4 uStack0000000c;
  
  g_GraphicsResetFlag = 0;
  if (g_FullscreenMode == 0) {
    return;
  }
  wincore_windll_cpp_restoreVideoMode_FUN_005b75b0();
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
  HVar1 = crt_ddraw_c_DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (*g_DirectDrawObject->vtable->SetCooperativeLevel)(g_DirectDrawObject,g_MainWindowHandle,0x11);
  }
  uStack0000000c = 0x5ed576;
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
  return;
}


// Assembly code:
// 005ed4b0: PUSH EBP
//   Label: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0
// 005ed4b1: XOR EDX,EDX
// 005ed4b3: MOV ECX,dword ptr [0x03f6b878]
//   XREF to: 03f6b878 (READ)
// 005ed4b9: MOV dword ptr [0x03f95938],EDX
//   XREF to: 03f95938 (WRITE)
// 005ed4bf: TEST ECX,ECX
// 005ed4c1: JNZ 0x005ed4c5
//   XREF to: 005ed4c5 (CONDITIONAL_JUMP)
// 005ed4c3: POP EBP
// 005ed4c4: RET
// 005ed4c5: PUSH EDI
//   Label: LAB_005ed4c5
// 005ed4c6: PUSH ESI
// 005ed4c7: PUSH EBX
// 005ed4c8: CALL wincore_windll.cpp_restoreVideoMode_FUN_005b75b0
//   XREF to: 005b75b0 (UNCONDITIONAL_CALL)
// 005ed4cd: MOV EBX,dword ptr [0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005ed4d3: TEST EBX,EBX
// 005ed4d5: JZ 0x005ed4e5
//   XREF to: 005ed4e5 (CONDITIONAL_JUMP)
// 005ed4d7: PUSH EBX
// 005ed4d8: MOV EDX,dword ptr [EBX]
// 005ed4da: XOR ESI,ESI
// 005ed4dc: CALL dword ptr [EDX + 0x8]
// 005ed4df: MOV dword ptr [0x03f9592c],ESI
//   XREF to: 03f9592c (WRITE)
// 005ed4e5: MOV EDI,dword ptr [0x03f95928]
//   Label: LAB_005ed4e5
//   XREF to: 03f95928 (READ)
// 005ed4eb: TEST EDI,EDI
// 005ed4ed: JZ 0x005ed4fd
//   XREF to: 005ed4fd (CONDITIONAL_JUMP)
// 005ed4ef: PUSH EDI
// 005ed4f0: MOV EDX,dword ptr [EDI]
// 005ed4f2: XOR EBP,EBP
// 005ed4f4: CALL dword ptr [EDX + 0x8]
// 005ed4f7: MOV dword ptr [0x03f95928],EBP
//   XREF to: 03f95928 (WRITE)
// 005ed4fd: MOV EAX,[0x03f95924]
//   Label: LAB_005ed4fd
//   XREF to: 03f95924 (READ)
// 005ed502: TEST EAX,EAX
// 005ed504: JZ 0x005ed514
//   XREF to: 005ed514 (CONDITIONAL_JUMP)
// 005ed506: PUSH EAX
// 005ed507: MOV EDX,dword ptr [EAX]
// 005ed509: CALL dword ptr [EDX + 0x8]
// 005ed50c: XOR EDX,EDX
// 005ed50e: MOV dword ptr [0x03f95924],EDX
//   XREF to: 03f95924 (WRITE)
// 005ed514: MOV ECX,dword ptr [0x03f95920]
//   Label: LAB_005ed514
//   XREF to: 03f95920 (READ)
// 005ed51a: TEST ECX,ECX
// 005ed51c: JZ 0x005ed537
//   XREF to: 005ed537 (CONDITIONAL_JUMP)
// 005ed51e: PUSH ECX
// 005ed51f: MOV EDX,dword ptr [ECX]
// 005ed521: CALL dword ptr [EDX + 0x4c]
// 005ed524: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed529: PUSH EAX
// 005ed52a: MOV EDX,dword ptr [EAX]
// 005ed52c: XOR EBX,EBX
// 005ed52e: CALL dword ptr [EDX + 0x8]
// 005ed531: MOV dword ptr [0x03f95920],EBX
//   XREF to: 03f95920 (WRITE)
// 005ed537: PUSH 0x0
//   Label: LAB_005ed537
// 005ed539: PUSH 0x3f95920
//   XREF to: 03f95920 (DATA)
// 005ed53e: PUSH 0x0
// 005ed540: CALL crt_ddraw.c_DirectDrawCreate
//   XREF to: 00610ece (UNCONDITIONAL_CALL)
// 005ed545: TEST EAX,EAX
// 005ed547: JNZ 0x005ed55d
//   XREF to: 005ed55d (CONDITIONAL_JUMP)
// 005ed549: PUSH 0x11
// 005ed54b: MOV ESI,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005ed551: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed556: PUSH ESI
// 005ed557: MOV EDX,dword ptr [EAX]
// 005ed559: PUSH EAX
// 005ed55a: CALL dword ptr [EDX + 0x50]
// 005ed55d: MOV EDI,dword ptr [0x0067939c]
//   Label: LAB_005ed55d
//   XREF to: 0067939c (READ)
// 005ed563: PUSH EDI
// 005ed564: MOV EBP,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ed56a: PUSH EBP
// 005ed56b: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005ed570: PUSH EAX
// 005ed571: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 005ed576: ADD ESP,0xc
// 005ed579: POP EBX
// 005ed57a: POP ESI
// 005ed57b: POP EDI
// 005ed57c: POP EBP
// 005ed57d: RET
