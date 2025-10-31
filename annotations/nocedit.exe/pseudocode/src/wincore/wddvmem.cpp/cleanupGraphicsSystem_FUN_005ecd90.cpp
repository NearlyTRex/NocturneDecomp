// Name: wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ecd90
// Address: 005ecd90
// Address Range: [[005ecd90, 005ece5e]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ecd90(void)
// Cross-references:
//   engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90 (00401130) at 00401130 [UNCONDITIONAL_JUMP]
// Globals:
//   TerminatedCString s_wincore_wddvmem_cpp_00657764
//   TerminatedCString s_wincore_wddvmem_cpp_0065777b
//   void* g_BackBuffer
//   void* g_SoftwareZBuffer
//   IDirectDraw* g_DirectDrawObject
//   IDirectDrawSurface* g_DirectDrawSurface
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   IUnknown* g_DirectDrawUnknown
//   void* g_SoftwareFrameBuffer
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   wincore_windll.cpp_kill_FUN_005b71e0

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_005ecd90(void)

{
  undefined4 uStack00000004;
  
  if (g_BackBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackBuffer,"..\\wincore\\wddvmem.cpp",0xff);
    g_BackBuffer = (void *)0x0;
  }
  if (g_SoftwareFrameBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (g_SoftwareFrameBuffer,"..\\wincore\\wddvmem.cpp",0x107);
    g_SoftwareZBuffer = (void *)0x0;
  }
  wincore_windll_cpp_kill_FUN_005b71e0();
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
    return;
  }
  (*g_DirectDrawObject->vtable->RestoreDisplayMode)(g_DirectDrawObject);
  uStack00000004 = 0x5ece54;
  (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
  g_DirectDrawObject = (IDirectDraw *)0x0;
  return;
}


// Assembly code:
// 005ecd90: PUSH EBX
//   Label: wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ecd90
// 005ecd91: PUSH ESI
// 005ecd92: PUSH EBP
// 005ecd93: MOV EDX,dword ptr [0x00688010]
//   XREF to: 00688010 (READ)
// 005ecd99: TEST EDX,EDX
// 005ecd9b: JNZ 0x005ece22
//   XREF to: 005ece22 (CONDITIONAL_JUMP)
// 005ecda1: MOV ESI,dword ptr [0x03f95930]
//   Label: LAB_005ecda1
//   XREF to: 03f95930 (READ)
// 005ecda7: TEST ESI,ESI
// 005ecda9: JZ 0x005ecdc6
//   XREF to: 005ecdc6 (CONDITIONAL_JUMP)
// 005ecdab: PUSH 0x107
// 005ecdb0: PUSH 0x65777b
//   XREF to: 0065777b (DATA)
// 005ecdb5: PUSH ESI
// 005ecdb6: XOR EBP,EBP
// 005ecdb8: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005ecdbd: ADD ESP,0xc
// 005ecdc0: MOV dword ptr [0x0077262c],EBP
//   XREF to: 0077262c (WRITE)
// 005ecdc6: CALL wincore_windll.cpp_kill_FUN_005b71e0
//   Label: LAB_005ecdc6
//   XREF to: 005b71e0 (UNCONDITIONAL_CALL)
// 005ecdcb: MOV EAX,[0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005ecdd0: TEST EAX,EAX
// 005ecdd2: JZ 0x005ecde2
//   XREF to: 005ecde2 (CONDITIONAL_JUMP)
// 005ecdd4: PUSH EAX
// 005ecdd5: MOV EDX,dword ptr [EAX]
// 005ecdd7: CALL dword ptr [EDX + 0x8]
// 005ecdda: XOR EDX,EDX
// 005ecddc: MOV dword ptr [0x03f9592c],EDX
//   XREF to: 03f9592c (WRITE)
// 005ecde2: MOV ECX,dword ptr [0x03f95928]
//   Label: LAB_005ecde2
//   XREF to: 03f95928 (READ)
// 005ecde8: TEST ECX,ECX
// 005ecdea: JZ 0x005ecdfa
//   XREF to: 005ecdfa (CONDITIONAL_JUMP)
// 005ecdec: PUSH ECX
// 005ecded: MOV EDX,dword ptr [ECX]
// 005ecdef: XOR EBX,EBX
// 005ecdf1: CALL dword ptr [EDX + 0x8]
// 005ecdf4: MOV dword ptr [0x03f95928],EBX
//   XREF to: 03f95928 (WRITE)
// 005ecdfa: MOV ESI,dword ptr [0x03f95924]
//   Label: LAB_005ecdfa
//   XREF to: 03f95924 (READ)
// 005ece00: TEST ESI,ESI
// 005ece02: JZ 0x005ece14
//   XREF to: 005ece14 (CONDITIONAL_JUMP)
// 005ece04: PUSH EDI
// 005ece05: PUSH ESI
// 005ece06: MOV EDX,dword ptr [ESI]
// 005ece08: XOR EDI,EDI
// 005ece0a: CALL dword ptr [EDX + 0x8]
// 005ece0d: MOV dword ptr [0x03f95924],EDI
//   XREF to: 03f95924 (WRITE)
// 005ece13: POP EDI
// 005ece14: MOV EBP,dword ptr [0x03f95920]
//   Label: LAB_005ece14
//   XREF to: 03f95920 (READ)
// 005ece1a: TEST EBP,EBP
// 005ece1c: JNZ 0x005ece42
//   XREF to: 005ece42 (CONDITIONAL_JUMP)
// 005ece1e: POP EBP
// 005ece1f: POP ESI
// 005ece20: POP EBX
// 005ece21: RET
// 005ece22: PUSH 0xff
//   Label: LAB_005ece22
// 005ece27: PUSH 0x657764
//   XREF to: 00657764 (DATA)
// 005ece2c: PUSH EDX
// 005ece2d: XOR EBX,EBX
// 005ece2f: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005ece34: ADD ESP,0xc
// 005ece37: MOV dword ptr [0x00688010],EBX
//   XREF to: 00688010 (WRITE)
// 005ece3d: JMP 0x005ecda1
//   XREF to: 005ecda1 (UNCONDITIONAL_JUMP)
// 005ece42: PUSH EBP
//   Label: LAB_005ece42
// 005ece43: MOV EDX,dword ptr [EBP]
// 005ece46: CALL dword ptr [EDX + 0x4c]
// 005ece49: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ece4e: PUSH EAX
// 005ece4f: MOV EDX,dword ptr [EAX]
// 005ece51: CALL dword ptr [EDX + 0x8]
// 005ece54: XOR EAX,EAX
// 005ece56: MOV [0x03f95920],EAX
//   XREF to: 03f95920 (WRITE)
// 005ece5b: POP EBP
// 005ece5c: POP ESI
// 005ece5d: POP EBX
// 005ece5e: RET
