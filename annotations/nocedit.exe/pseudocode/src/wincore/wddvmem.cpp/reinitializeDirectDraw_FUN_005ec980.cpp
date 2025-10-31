// Name: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005ec980
// Address: 005ec980
// Address Range: [[005ec980, 005eca2b]]
// Convention: __cdecl
// Signature: int wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005ec980(void)
// Globals:
//   IDirectDraw* g_DirectDrawObject
//   IDirectDrawSurface* g_DirectDrawSurface
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   IUnknown* g_DirectDrawUnknown
//   HWND g_MainWindowHandle
// Function calls:
//   crt_ddraw.c_DirectDrawCreate

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_005ec980(void)

{
  HRESULT HVar1;
  
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
    HVar1 = (*g_DirectDrawObject->vtable->SetCooperativeLevel)
                      (g_DirectDrawObject,g_MainWindowHandle,0x11);
    if (HVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 005ec980: PUSH EBX
//   Label: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_005ec980
// 005ec981: PUSH EDI
// 005ec982: PUSH EBP
// 005ec983: MOV EDX,dword ptr [0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005ec989: TEST EDX,EDX
// 005ec98b: JNZ 0x005ec9f9
//   XREF to: 005ec9f9 (CONDITIONAL_JUMP)
// 005ec98d: MOV EBX,dword ptr [0x03f95928]
//   Label: LAB_005ec98d
//   XREF to: 03f95928 (READ)
// 005ec993: TEST EBX,EBX
// 005ec995: JZ 0x005ec9a7
//   XREF to: 005ec9a7 (CONDITIONAL_JUMP)
// 005ec997: PUSH ESI
// 005ec998: PUSH EBX
// 005ec999: MOV EDX,dword ptr [EBX]
// 005ec99b: XOR ESI,ESI
// 005ec99d: CALL dword ptr [EDX + 0x8]
// 005ec9a0: MOV dword ptr [0x03f95928],ESI
//   XREF to: 03f95928 (WRITE)
// 005ec9a6: POP ESI
// 005ec9a7: MOV EDI,dword ptr [0x03f95924]
//   Label: LAB_005ec9a7
//   XREF to: 03f95924 (READ)
// 005ec9ad: TEST EDI,EDI
// 005ec9af: JZ 0x005ec9bf
//   XREF to: 005ec9bf (CONDITIONAL_JUMP)
// 005ec9b1: PUSH EDI
// 005ec9b2: MOV EDX,dword ptr [EDI]
// 005ec9b4: XOR EBP,EBP
// 005ec9b6: CALL dword ptr [EDX + 0x8]
// 005ec9b9: MOV dword ptr [0x03f95924],EBP
//   XREF to: 03f95924 (WRITE)
// 005ec9bf: MOV EAX,[0x03f95920]
//   Label: LAB_005ec9bf
//   XREF to: 03f95920 (READ)
// 005ec9c4: TEST EAX,EAX
// 005ec9c6: JZ 0x005ec9e1
//   XREF to: 005ec9e1 (CONDITIONAL_JUMP)
// 005ec9c8: PUSH EAX
// 005ec9c9: MOV EDX,dword ptr [EAX]
// 005ec9cb: CALL dword ptr [EDX + 0x4c]
// 005ec9ce: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ec9d3: PUSH EAX
// 005ec9d4: MOV EDX,dword ptr [EAX]
// 005ec9d6: CALL dword ptr [EDX + 0x8]
// 005ec9d9: XOR EDX,EDX
// 005ec9db: MOV dword ptr [0x03f95920],EDX
//   XREF to: 03f95920 (WRITE)
// 005ec9e1: PUSH 0x0
//   Label: LAB_005ec9e1
// 005ec9e3: PUSH 0x3f95920
//   XREF to: 03f95920 (DATA)
// 005ec9e8: PUSH 0x0
// 005ec9ea: CALL crt_ddraw.c_DirectDrawCreate
//   XREF to: 00610ece (UNCONDITIONAL_CALL)
// 005ec9ef: TEST EAX,EAX
// 005ec9f1: JZ 0x005eca0b
//   XREF to: 005eca0b (CONDITIONAL_JUMP)
// 005ec9f3: XOR EAX,EAX
//   Label: LAB_005ec9f3
// 005ec9f5: POP EBP
// 005ec9f6: POP EDI
// 005ec9f7: POP EBX
// 005ec9f8: RET
// 005ec9f9: MOV EAX,EDX
//   Label: LAB_005ec9f9
// 005ec9fb: PUSH EAX
// 005ec9fc: MOV EDX,dword ptr [EDX]
// 005ec9fe: CALL dword ptr [EDX + 0x8]
// 005eca01: XOR ECX,ECX
// 005eca03: MOV dword ptr [0x03f9592c],ECX
//   XREF to: 03f9592c (WRITE)
// 005eca09: JMP 0x005ec98d
//   XREF to: 005ec98d (UNCONDITIONAL_JUMP)
// 005eca0b: PUSH 0x11
//   Label: LAB_005eca0b
// 005eca0d: MOV ECX,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005eca13: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005eca18: PUSH ECX
// 005eca19: MOV EDX,dword ptr [EAX]
// 005eca1b: PUSH EAX
// 005eca1c: CALL dword ptr [EDX + 0x50]
// 005eca1f: TEST EAX,EAX
// 005eca21: JNZ 0x005ec9f3
//   XREF to: 005ec9f3 (CONDITIONAL_JUMP)
// 005eca23: MOV EAX,0x1
// 005eca28: POP EBP
// 005eca29: POP EDI
// 005eca2a: POP EBX
// 005eca2b: RET
