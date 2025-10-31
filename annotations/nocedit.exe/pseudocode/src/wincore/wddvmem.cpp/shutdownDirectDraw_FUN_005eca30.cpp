// Name: wincore_wddvmem.cpp_shutdownDirectDraw_FUN_005eca30
// Address: 005eca30
// Address Range: [[005eca30, 005ecab4]]
// Convention: __cdecl
// Signature: int wincore_wddvmem.cpp_shutdownDirectDraw_FUN_005eca30(void)
// Globals:
//   IDirectDraw* g_DirectDrawObject
//   IDirectDrawSurface* g_DirectDrawSurface
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   IUnknown* g_DirectDrawUnknown

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_shutdownDirectDraw_FUN_005eca30(void)

{
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
  if (g_DirectDrawObject == (IDirectDraw *)0x0) {
    return 1;
  }
  (*g_DirectDrawObject->vtable->RestoreDisplayMode)(g_DirectDrawObject);
  (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
  g_DirectDrawObject = (IDirectDraw *)0x0;
  return 1;
}


// Assembly code:
// 005eca30: PUSH EBX
//   Label: wincore_wddvmem.cpp_shutdownDirectDraw_FUN_005eca30
// 005eca31: PUSH EDI
// 005eca32: PUSH EBP
// 005eca33: MOV EDX,dword ptr [0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005eca39: TEST EDX,EDX
// 005eca3b: JNZ 0x005eca81
//   XREF to: 005eca81 (CONDITIONAL_JUMP)
// 005eca3d: MOV EBX,dword ptr [0x03f95928]
//   Label: LAB_005eca3d
//   XREF to: 03f95928 (READ)
// 005eca43: TEST EBX,EBX
// 005eca45: JZ 0x005eca57
//   XREF to: 005eca57 (CONDITIONAL_JUMP)
// 005eca47: PUSH ESI
// 005eca48: PUSH EBX
// 005eca49: MOV EDX,dword ptr [EBX]
// 005eca4b: XOR ESI,ESI
// 005eca4d: CALL dword ptr [EDX + 0x8]
// 005eca50: MOV dword ptr [0x03f95928],ESI
//   XREF to: 03f95928 (WRITE)
// 005eca56: POP ESI
// 005eca57: MOV EDI,dword ptr [0x03f95924]
//   Label: LAB_005eca57
//   XREF to: 03f95924 (READ)
// 005eca5d: TEST EDI,EDI
// 005eca5f: JZ 0x005eca6f
//   XREF to: 005eca6f (CONDITIONAL_JUMP)
// 005eca61: PUSH EDI
// 005eca62: MOV EDX,dword ptr [EDI]
// 005eca64: XOR EBP,EBP
// 005eca66: CALL dword ptr [EDX + 0x8]
// 005eca69: MOV dword ptr [0x03f95924],EBP
//   XREF to: 03f95924 (WRITE)
// 005eca6f: MOV EAX,[0x03f95920]
//   Label: LAB_005eca6f
//   XREF to: 03f95920 (READ)
// 005eca74: TEST EAX,EAX
// 005eca76: JNZ 0x005eca93
//   XREF to: 005eca93 (CONDITIONAL_JUMP)
// 005eca78: MOV EAX,0x1
// 005eca7d: POP EBP
// 005eca7e: POP EDI
// 005eca7f: POP EBX
// 005eca80: RET
// 005eca81: MOV EAX,EDX
//   Label: LAB_005eca81
// 005eca83: PUSH EAX
// 005eca84: MOV EDX,dword ptr [EDX]
// 005eca86: CALL dword ptr [EDX + 0x8]
// 005eca89: XOR ECX,ECX
// 005eca8b: MOV dword ptr [0x03f9592c],ECX
//   XREF to: 03f9592c (WRITE)
// 005eca91: JMP 0x005eca3d
//   XREF to: 005eca3d (UNCONDITIONAL_JUMP)
// 005eca93: PUSH EAX
//   Label: LAB_005eca93
// 005eca94: MOV EDX,dword ptr [EAX]
// 005eca96: CALL dword ptr [EDX + 0x4c]
// 005eca99: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005eca9e: PUSH EAX
// 005eca9f: MOV EDX,dword ptr [EAX]
// 005ecaa1: CALL dword ptr [EDX + 0x8]
// 005ecaa4: XOR EDX,EDX
// 005ecaa6: MOV dword ptr [0x03f95920],EDX
//   XREF to: 03f95920 (WRITE)
// 005ecaac: MOV EAX,0x1
// 005ecab1: POP EBP
// 005ecab2: POP EDI
// 005ecab3: POP EBX
// 005ecab4: RET
