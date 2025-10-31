// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
// Address: 004895f0
// Address Range: [[004895f0, 0048965b]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a1f5 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590
//   crt_stdio.c_vsprintf_FUN_005fdba8

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
          (CDrawSurface *this_ptr,int x,int y,int height,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_ffffeff4;
  char **local_10;
  
  local_10 = &format;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,(char *)height,(va_list_t *)&local_10);
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_00489590
            ((CDrawSurface *)x,(int)&stack0xffffeff4,y,height,in_stack_ffffeff4);
  return;
}


// Assembly code:
// 004895f0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
// 004895f1: PUSH ESI
// 004895f2: PUSH EDI
// 004895f3: SUB ESP,0x1004
// 004895f9: LEA EAX,[ESP + 0x1024]
//   XREF to: Stack[0x14] (DATA)
// 00489600: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00489607: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x10] (DATA)
// 0048960e: PUSH EAX
// 0048960f: MOV EDX,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x10] (READ)
// 00489616: PUSH EDX
// 00489617: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 0048961b: PUSH EAX
// 0048961c: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00489621: ADD ESP,0xc
// 00489624: MOV EBX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 0048962b: PUSH EBX
// 0048962c: MOV ESI,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0x8] (READ)
// 00489633: PUSH ESI
// 00489634: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 00489638: PUSH EAX
// 00489639: MOV EDI,dword ptr [ESP + 0x1020]
//   XREF to: Stack[0x4] (READ)
// 00489640: XOR ECX,ECX
// 00489642: PUSH EDI
// 00489643: MOV dword ptr [ESP + 0x1010],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 0048964a: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590
//   XREF to: 00489590 (UNCONDITIONAL_CALL)
// 0048964f: ADD ESP,0x10
// 00489652: ADD ESP,0x1004
// 00489658: POP EDI
// 00489659: POP ESI
// 0048965a: POP EBX
// 0048965b: RET
