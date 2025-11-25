// Name: crt_stdio.c_fprintf_FUN_006021c0
// Address: 006021c0
// Address Range: [[006021c0, 006021d9]]
// Convention: __cdecl
// Signature: void crt_stdio.c_fprintf_FUN_006021c0(FILE * stream, char * format, ...)
// Cross-references:
//   shape_superopt.cpp_logToFile_FUN_005c7910 (005c7910) at 005c7970 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_vfprintf_FUN_00604850

#include "nocturne.h"

void __cdecl crt_stdio_c_fprintf_FUN_006021c0(FILE *stream,char *format,...)

{
  va_list_t in_stack_0000000c;
  
  crt_stdio_c_vfprintf_FUN_00604850(stream,format,in_stack_0000000c);
  return;
}


// Assembly code:
// 006021c0: PUSH EBX
//   Label: crt_stdio.c_fprintf_FUN_006021c0
// 006021c1: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 006021c5: PUSH EDX
// 006021c6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 006021ca: PUSH EBX
// 006021cb: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 006021cf: PUSH ECX
// 006021d0: CALL crt_stdio.c_vfprintf_FUN_00604850
//   XREF to: 00604850 (UNCONDITIONAL_CALL)
// 006021d5: ADD ESP,0xc
// 006021d8: POP EBX
// 006021d9: RET
