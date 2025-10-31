// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
// Address: 00489940
// Address Range: [[00489940, 004899b5]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a2d1 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
          (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  undefined1 auStack_1010 [4092];
  va_list_t local_14;
  
  local_14 = &stack0x00000018;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffefec,format,&local_14);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
            ((CDrawSurface *)x,(int)auStack_1010,y,height,format);
  return;
}


// Assembly code:
// 00489940: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
// 00489941: PUSH ESI
// 00489942: PUSH EDI
// 00489943: PUSH EBP
// 00489944: SUB ESP,0x1004
// 0048994a: LEA EAX,[ESP + 0x102c]
//   XREF to: Stack[0x18] (DATA)
// 00489951: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00489958: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x14] (DATA)
// 0048995f: PUSH EAX
// 00489960: MOV EDX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x14] (READ)
// 00489967: PUSH EDX
// 00489968: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1014] (DATA)
// 0048996c: PUSH EAX
// 0048996d: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00489972: ADD ESP,0xc
// 00489975: MOV EBX,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x10] (READ)
// 0048997c: PUSH EBX
// 0048997d: MOV ESI,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0xc] (READ)
// 00489984: PUSH ESI
// 00489985: MOV EDI,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x8] (READ)
// 0048998c: PUSH EDI
// 0048998d: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1014] (DATA)
// 00489991: PUSH EAX
// 00489992: MOV EBP,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x4] (READ)
// 00489999: XOR ECX,ECX
// 0048999b: PUSH EBP
// 0048999c: MOV dword ptr [ESP + 0x1014],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004899a3: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
//   XREF to: 004898e0 (UNCONDITIONAL_CALL)
// 004899a8: ADD ESP,0x14
// 004899ab: ADD ESP,0x1004
// 004899b1: POP EBP
// 004899b2: POP EDI
// 004899b3: POP ESI
// 004899b4: POP EBX
// 004899b5: RET
