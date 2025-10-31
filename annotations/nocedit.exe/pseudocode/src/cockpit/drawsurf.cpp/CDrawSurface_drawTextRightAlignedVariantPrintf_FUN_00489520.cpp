// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
// Address: 00489520
// Address Range: [[00489520, 0048958b]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a1d4 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
          (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffeff4;
  char **local_10;
  
  local_10 = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,(char *)height,(va_list_t *)&local_10);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
            ((CDrawSurface *)x,(int)&stack0xffffeff4,y,height,in_stack_ffffeff4);
  return;
}


// Assembly code:
// 00489520: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
// 00489521: PUSH ESI
// 00489522: PUSH EDI
// 00489523: SUB ESP,0x1004
// 00489529: LEA EAX,[ESP + 0x1024]
//   XREF to: Stack[0x14] (DATA)
// 00489530: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00489537: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x10] (DATA)
// 0048953e: PUSH EAX
// 0048953f: MOV EDX,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x10] (READ)
// 00489546: PUSH EDX
// 00489547: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 0048954b: PUSH EAX
// 0048954c: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00489551: ADD ESP,0xc
// 00489554: MOV EBX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 0048955b: PUSH EBX
// 0048955c: MOV ESI,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0x8] (READ)
// 00489563: PUSH ESI
// 00489564: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 00489568: PUSH EAX
// 00489569: MOV EDI,dword ptr [ESP + 0x1020]
//   XREF to: Stack[0x4] (READ)
// 00489570: XOR ECX,ECX
// 00489572: PUSH EDI
// 00489573: MOV dword ptr [ESP + 0x1010],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 0048957a: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
//   XREF to: 004894c0 (UNCONDITIONAL_CALL)
// 0048957f: ADD ESP,0x10
// 00489582: ADD ESP,0x1004
// 00489588: POP EDI
// 00489589: POP ESI
// 0048958a: POP EBX
// 0048958b: RET
