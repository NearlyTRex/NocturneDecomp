// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
// Address: 00489c40
// Address Range: [[00489c40, 00489c95]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40(CDrawSurface * this_ptr, char * format, ...)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a31c [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
          (CDrawSurface *this_ptr,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1004 [4092];
  va_list_t local_8;
  
  local_8 = &stack0x0000000c;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff8,format,&local_8);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
            ((CDrawSurface *)format,acStack_1004);
  return;
}


// Assembly code:
// 00489c40: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
// 00489c41: SUB ESP,0x1004
// 00489c47: LEA EAX,[ESP + 0x1014]
//   XREF to: Stack[0xc] (DATA)
// 00489c4e: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00489c55: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x8] (DATA)
// 00489c5c: PUSH EAX
// 00489c5d: MOV EDX,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x8] (READ)
// 00489c64: PUSH EDX
// 00489c65: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1008] (DATA)
// 00489c69: PUSH EAX
// 00489c6a: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00489c6f: ADD ESP,0xc
// 00489c72: MOV EAX,ESP
// 00489c74: PUSH EAX
// 00489c75: MOV EBX,dword ptr [ESP + 0x1010]
//   XREF to: Stack[0x4] (READ)
// 00489c7c: XOR ECX,ECX
// 00489c7e: PUSH EBX
// 00489c7f: MOV dword ptr [ESP + 0x1008],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 00489c86: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
//   XREF to: 00489c20 (UNCONDITIONAL_CALL)
// 00489c8b: ADD ESP,0x8
// 00489c8e: ADD ESP,0x1004
// 00489c94: POP EBX
// 00489c95: RET
