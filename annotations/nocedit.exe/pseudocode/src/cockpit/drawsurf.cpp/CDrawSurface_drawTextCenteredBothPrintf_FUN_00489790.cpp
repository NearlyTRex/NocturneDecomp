// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
// Address: 00489790
// Address Range: [[00489790, 004897fb]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a24a [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
          (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffeff4;
  char **local_10;
  
  local_10 = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,(char *)height,(va_list_t *)&local_10);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
            ((CDrawSurface *)x,(int)&stack0xffffeff4,y,height,in_stack_ffffeff4);
  return;
}


// Assembly code:
// 00489790: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
// 00489791: PUSH ESI
// 00489792: PUSH EDI
// 00489793: SUB ESP,0x1004
// 00489799: LEA EAX,[ESP + 0x1024]
//   XREF to: Stack[0x14] (DATA)
// 004897a0: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004897a7: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x10] (DATA)
// 004897ae: PUSH EAX
// 004897af: MOV EDX,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x10] (READ)
// 004897b6: PUSH EDX
// 004897b7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 004897bb: PUSH EAX
// 004897bc: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004897c1: ADD ESP,0xc
// 004897c4: MOV EBX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 004897cb: PUSH EBX
// 004897cc: MOV ESI,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0x8] (READ)
// 004897d3: PUSH ESI
// 004897d4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 004897d8: PUSH EAX
// 004897d9: MOV EDI,dword ptr [ESP + 0x1020]
//   XREF to: Stack[0x4] (READ)
// 004897e0: XOR ECX,ECX
// 004897e2: PUSH EDI
// 004897e3: MOV dword ptr [ESP + 0x1010],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 004897ea: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
//   XREF to: 00489730 (UNCONDITIONAL_CALL)
// 004897ef: ADD ESP,0x10
// 004897f2: ADD ESP,0x1004
// 004897f8: POP EDI
// 004897f9: POP ESI
// 004897fa: POP EBX
// 004897fb: RET
