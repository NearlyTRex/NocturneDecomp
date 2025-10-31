// Name: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005ec920
// Address: 005ec920
// Address Range: [[005ec920, 005ec978]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005ec920(void)
// Globals:
//   IDirectDrawSurface* g_DirectDrawSurface
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   IUnknown* g_DirectDrawUnknown

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005ec920(void)

{
  if (g_DirectDrawUnknown != (IUnknown *)0x0) {
    (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
    g_DirectDrawUnknown = (IUnknown *)0x0;
  }
  if (g_SoftwareRenderSurface != (IDirectDrawSurface *)0x0) {
    (*g_SoftwareRenderSurface->vtable->Release)((IUnknown *)g_SoftwareRenderSurface);
    g_SoftwareRenderSurface = (IDirectDrawSurface *)0x0;
  }
  if (g_DirectDrawSurface == (IDirectDrawSurface *)0x0) {
    return;
  }
  (*g_DirectDrawSurface->vtable->Release)((IUnknown *)g_DirectDrawSurface);
  g_DirectDrawSurface = (IDirectDrawSurface *)0x0;
  return;
}


// Assembly code:
// 005ec920: PUSH EBX
//   Label: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005ec920
// 005ec921: PUSH EDI
// 005ec922: PUSH EBP
// 005ec923: MOV EDX,dword ptr [0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005ec929: TEST EDX,EDX
// 005ec92b: JNZ 0x005ec955
//   XREF to: 005ec955 (CONDITIONAL_JUMP)
// 005ec92d: MOV EBX,dword ptr [0x03f95928]
//   Label: LAB_005ec92d
//   XREF to: 03f95928 (READ)
// 005ec933: TEST EBX,EBX
// 005ec935: JZ 0x005ec947
//   XREF to: 005ec947 (CONDITIONAL_JUMP)
// 005ec937: PUSH ESI
// 005ec938: PUSH EBX
// 005ec939: MOV EDX,dword ptr [EBX]
// 005ec93b: XOR ESI,ESI
// 005ec93d: CALL dword ptr [EDX + 0x8]
// 005ec940: MOV dword ptr [0x03f95928],ESI
//   XREF to: 03f95928 (WRITE)
// 005ec946: POP ESI
// 005ec947: MOV EDI,dword ptr [0x03f95924]
//   Label: LAB_005ec947
//   XREF to: 03f95924 (READ)
// 005ec94d: TEST EDI,EDI
// 005ec94f: JNZ 0x005ec967
//   XREF to: 005ec967 (CONDITIONAL_JUMP)
// 005ec951: POP EBP
// 005ec952: POP EDI
// 005ec953: POP EBX
// 005ec954: RET
// 005ec955: MOV EAX,EDX
//   Label: LAB_005ec955
// 005ec957: PUSH EAX
// 005ec958: MOV EDX,dword ptr [EDX]
// 005ec95a: CALL dword ptr [EDX + 0x8]
// 005ec95d: XOR ECX,ECX
// 005ec95f: MOV dword ptr [0x03f9592c],ECX
//   XREF to: 03f9592c (WRITE)
// 005ec965: JMP 0x005ec92d
//   XREF to: 005ec92d (UNCONDITIONAL_JUMP)
// 005ec967: PUSH EDI
//   Label: LAB_005ec967
// 005ec968: MOV EDX,dword ptr [EDI]
// 005ec96a: XOR EBP,EBP
// 005ec96c: CALL dword ptr [EDX + 0x8]
// 005ec96f: MOV dword ptr [0x03f95924],EBP
//   XREF to: 03f95924 (WRITE)
// 005ec975: POP EBP
// 005ec976: POP EDI
// 005ec977: POP EBX
// 005ec978: RET
