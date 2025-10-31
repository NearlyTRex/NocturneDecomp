// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0
// Address: 00489af0
// Address Range: [[00489af0, 00489b51]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0(CDrawSurface * this_ptr, int y, int height, char * format, ...)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0
          (CDrawSurface *this_ptr,int y,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffeff8;
  char **local_c;
  
  local_c = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)height,(va_list_t *)&local_c);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
            ((CDrawSurface *)y,(int)&stack0xffffeff8,height,in_stack_ffffeff8);
  return;
}


// Assembly code:
// 00489af0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0
// 00489af1: PUSH ESI
// 00489af2: SUB ESP,0x1004
// 00489af8: LEA EAX,[ESP + 0x101c]
//   XREF to: Stack[0x10] (DATA)
// 00489aff: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00489b06: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0xc] (DATA)
// 00489b0d: PUSH EAX
// 00489b0e: MOV EDX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 00489b15: PUSH EDX
// 00489b16: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 00489b1a: PUSH EAX
// 00489b1b: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00489b20: ADD ESP,0xc
// 00489b23: MOV EBX,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x8] (READ)
// 00489b2a: PUSH EBX
// 00489b2b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x100c] (DATA)
// 00489b2f: PUSH EAX
// 00489b30: MOV ESI,dword ptr [ESP + 0x1018]
//   XREF to: Stack[0x4] (READ)
// 00489b37: XOR ECX,ECX
// 00489b39: PUSH ESI
// 00489b3a: MOV dword ptr [ESP + 0x100c],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 00489b41: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
//   XREF to: 00489ab0 (UNCONDITIONAL_CALL)
// 00489b46: ADD ESP,0xc
// 00489b49: ADD ESP,0x1004
// 00489b4f: POP ESI
// 00489b50: POP EBX
// 00489b51: RET
