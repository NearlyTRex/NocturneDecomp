// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0
// Address: 00489bb0
// Address Range: [[00489bb0, 00489c11]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0(CDrawSurface * this_ptr, int x, int y, char * format, ...)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0
          (CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffeff8;
  char **local_c;
  
  local_c = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y,(va_list_t *)&local_c);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
            ((CDrawSurface *)x,(int)&stack0xffffeff8,y,in_stack_ffffeff8);
  return;
}


// Assembly code:
// 00489bb0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0
// 00489bb1: PUSH ESI
// 00489bb2: SUB ESP,0x1004
// 00489bb8: LEA EAX,[ESP + 0x101c]
//   XREF to: Stack[0x10] (DATA)
// 00489bbf: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00489bc6: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0xc] (DATA)
// 00489bcd: PUSH EAX
// 00489bce: MOV EDX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 00489bd5: PUSH EDX
// 00489bd6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 00489bda: PUSH EAX
// 00489bdb: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00489be0: ADD ESP,0xc
// 00489be3: MOV EBX,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x8] (READ)
// 00489bea: PUSH EBX
// 00489beb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x100c] (DATA)
// 00489bef: PUSH EAX
// 00489bf0: MOV ESI,dword ptr [ESP + 0x1018]
//   XREF to: Stack[0x4] (READ)
// 00489bf7: XOR ECX,ECX
// 00489bf9: PUSH ESI
// 00489bfa: MOV dword ptr [ESP + 0x100c],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 00489c01: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
//   XREF to: 00489b60 (UNCONDITIONAL_CALL)
// 00489c06: ADD ESP,0xc
// 00489c09: ADD ESP,0x1004
// 00489c0f: POP ESI
// 00489c10: POP EBX
// 00489c11: RET
