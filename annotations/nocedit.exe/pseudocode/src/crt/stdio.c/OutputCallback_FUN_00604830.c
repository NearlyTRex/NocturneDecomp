// Name: crt_stdio.c_OutputCallback_FUN_00604830
// Address: 00604830
// Address Range: [[00604830, 0060484f]]
// Convention: __watcallStack
// Signature: void crt_stdio.c_OutputCallback_FUN_00604830(FORMAT_OUTPUT_CONTEXT * context, int character)
// Cross-references:
//   crt_stdio.c_vfprintf_FUN_00604850 (00604850) at 006048d0 [DATA]
// Function calls:
//   crt_stdio.c_fputc_FUN_006007a0

#include "nocturne.h"

void __watcallStack
crt_stdio_c_OutputCallback_FUN_00604830(FORMAT_OUTPUT_CONTEXT *context,int character)

{
  crt_stdio_c_fputc_FUN_006007a0(character,context->output_file);
  context->char_count = context->char_count + 1;
  return;
}


// Assembly code:
// 00604830: PUSH EBX
//   Label: crt_stdio.c_OutputCallback_FUN_00604830
// 00604831: PUSH ESI
// 00604832: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00604836: MOV EDX,dword ptr [EBX]
// 00604838: PUSH EDX
// 00604839: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060483d: PUSH ECX
// 0060483e: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00604843: MOV ESI,dword ptr [EBX + 0x10]
// 00604846: INC ESI
// 00604847: ADD ESP,0x8
// 0060484a: MOV dword ptr [EBX + 0x10],ESI
// 0060484d: POP ESI
// 0060484e: POP EBX
// 0060484f: RET
