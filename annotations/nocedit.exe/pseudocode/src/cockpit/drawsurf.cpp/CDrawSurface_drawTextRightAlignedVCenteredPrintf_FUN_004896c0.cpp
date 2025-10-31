// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
// Address: 004896c0
// Address Range: [[004896c0, 0048972b]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a218 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
          (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffeff4;
  char **local_10;
  
  local_10 = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,(char *)height,(va_list_t *)&local_10);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
            ((CDrawSurface *)x,(int)&stack0xffffeff4,y,height,in_stack_ffffeff4);
  return;
}


// Assembly code:
// 004896c0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
// 004896c1: PUSH ESI
// 004896c2: PUSH EDI
// 004896c3: SUB ESP,0x1004
// 004896c9: LEA EAX,[ESP + 0x1024]
//   XREF to: Stack[0x14] (DATA)
// 004896d0: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004896d7: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x10] (DATA)
// 004896de: PUSH EAX
// 004896df: MOV EDX,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x10] (READ)
// 004896e6: PUSH EDX
// 004896e7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 004896eb: PUSH EAX
// 004896ec: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004896f1: ADD ESP,0xc
// 004896f4: MOV EBX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 004896fb: PUSH EBX
// 004896fc: MOV ESI,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0x8] (READ)
// 00489703: PUSH ESI
// 00489704: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 00489708: PUSH EAX
// 00489709: MOV EDI,dword ptr [ESP + 0x1020]
//   XREF to: Stack[0x4] (READ)
// 00489710: XOR ECX,ECX
// 00489712: PUSH EDI
// 00489713: MOV dword ptr [ESP + 0x1010],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 0048971a: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
//   XREF to: 00489660 (UNCONDITIONAL_CALL)
// 0048971f: ADD ESP,0x10
// 00489722: ADD ESP,0x1004
// 00489728: POP EDI
// 00489729: POP ESI
// 0048972a: POP EBX
// 0048972b: RET
