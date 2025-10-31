// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
// Address: 00489450
// Address Range: [[00489450, 004894bb]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450(CDrawSurface * this_ptr, int x, int y, char * format, ...)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a1b0 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
          (CDrawSurface *this_ptr,int x,int y,char *format,...)

{
  BADSPACEBASE *in_ESP;
  undefined1 auStack_100c [4092];
  va_list_t local_10;
  
  local_10 = &stack0x00000014;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,format,&local_10);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
            ((CDrawSurface *)x,(int)auStack_100c,y,format);
  return;
}


// Assembly code:
// 00489450: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
// 00489451: PUSH ESI
// 00489452: PUSH EDI
// 00489453: SUB ESP,0x1004
// 00489459: LEA EAX,[ESP + 0x1024]
//   XREF to: Stack[0x14] (DATA)
// 00489460: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00489467: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x10] (DATA)
// 0048946e: PUSH EAX
// 0048946f: MOV EDX,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x10] (READ)
// 00489476: PUSH EDX
// 00489477: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 0048947b: PUSH EAX
// 0048947c: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00489481: ADD ESP,0xc
// 00489484: MOV EBX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 0048948b: PUSH EBX
// 0048948c: MOV ESI,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0x8] (READ)
// 00489493: PUSH ESI
// 00489494: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 00489498: PUSH EAX
// 00489499: MOV EDI,dword ptr [ESP + 0x1020]
//   XREF to: Stack[0x4] (READ)
// 004894a0: XOR ECX,ECX
// 004894a2: PUSH EDI
// 004894a3: MOV dword ptr [ESP + 0x1010],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 004894aa: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
//   XREF to: 004893f0 (UNCONDITIONAL_CALL)
// 004894af: ADD ESP,0x10
// 004894b2: ADD ESP,0x1004
// 004894b8: POP EDI
// 004894b9: POP ESI
// 004894ba: POP EBX
// 004894bb: RET
