// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
// Address: 00489860
// Address Range: [[00489860, 004898d5]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860(CDrawSurface * this_ptr, int x, int y, int width, int height, char * format, ...)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a291 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffeff0;
  char **local_14;
  
  local_14 = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffefec,(char *)height,(va_list_t *)&local_14);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
            ((CDrawSurface *)x,(int)&stack0xffffeff0,y,width,height,in_stack_ffffeff0);
  return;
}


// Assembly code:
// 00489860: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
// 00489861: PUSH ESI
// 00489862: PUSH EDI
// 00489863: PUSH EBP
// 00489864: SUB ESP,0x1004
// 0048986a: LEA EAX,[ESP + 0x102c]
//   XREF to: Stack[0x18] (DATA)
// 00489871: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00489878: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x14] (DATA)
// 0048987f: PUSH EAX
// 00489880: MOV EDX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x14] (READ)
// 00489887: PUSH EDX
// 00489888: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1014] (DATA)
// 0048988c: PUSH EAX
// 0048988d: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00489892: ADD ESP,0xc
// 00489895: MOV EBX,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x10] (READ)
// 0048989c: PUSH EBX
// 0048989d: MOV ESI,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0xc] (READ)
// 004898a4: PUSH ESI
// 004898a5: MOV EDI,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x8] (READ)
// 004898ac: PUSH EDI
// 004898ad: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1014] (DATA)
// 004898b1: PUSH EAX
// 004898b2: MOV EBP,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x4] (READ)
// 004898b9: XOR ECX,ECX
// 004898bb: PUSH EBP
// 004898bc: MOV dword ptr [ESP + 0x1014],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004898c3: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
//   XREF to: 00489800 (UNCONDITIONAL_CALL)
// 004898c8: ADD ESP,0x14
// 004898cb: ADD ESP,0x1004
// 004898d1: POP EBP
// 004898d2: POP EDI
// 004898d3: POP ESI
// 004898d4: POP EBX
// 004898d5: RET
