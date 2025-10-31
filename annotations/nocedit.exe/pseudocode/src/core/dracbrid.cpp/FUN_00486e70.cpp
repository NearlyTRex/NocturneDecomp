// Name: core_dracbrid.cpp_FUN_00486e70
// Address: 00486e70
// Address Range: [[00486e70, 00486e95]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00486e70()
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0

#include "nocturne.h"

CDrawSurface * core_dracbrid_cpp_FUN_00486e70(void)

{
  CDrawSurface *in_stack_00000004;
  
  cockpit_drawsurf_cpp_CDrawSurface_init_FUN_00486ee0
            (in_stack_00000004,0,0,g_WindowWidth + -1,g_WindowHeight + -1,(CDrawSurface *)0x0);
  return in_stack_00000004;
}


// Assembly code:
// 00486e70: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_00486e70
// 00486e71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00486e75: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00486e7a: PUSH 0x0
// 00486e7c: DEC EAX
// 00486e7d: PUSH EAX
// 00486e7e: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00486e83: DEC EAX
// 00486e84: PUSH EAX
// 00486e85: PUSH 0x0
// 00486e87: PUSH 0x0
// 00486e89: PUSH EBX
// 00486e8a: CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0
//   XREF to: 00486ee0 (UNCONDITIONAL_CALL)
// 00486e8f: ADD ESP,0x18
// 00486e92: MOV EAX,EBX
// 00486e94: POP EBX
// 00486e95: RET
