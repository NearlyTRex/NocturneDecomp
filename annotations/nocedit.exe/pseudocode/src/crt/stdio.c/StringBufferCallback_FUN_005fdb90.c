// Name: crt_stdio.c_StringBufferCallback_FUN_005fdb90
// Address: 005fdb90
// Address Range: [[005fdb90, 005fdba6]]
// Convention: __cdecl
// Signature: void crt_stdio.c_StringBufferCallback_FUN_005fdb90(StringOutputContext * context, char character)
// Cross-references:
//   crt_stdio.c_vsprintf_FUN_005fdba8 (005fdba8) at 005fdba9 [DATA]

#include "nocturne.h"

void __cdecl
crt_stdio_c_StringBufferCallback_FUN_005fdb90(StringOutputContext *context,char character)

{
  char *pcVar1;
  
  pcVar1 = context->buffer_ptr;
  context->buffer_ptr = pcVar1 + 1;
  *pcVar1 = character;
  context->chars_written = context->chars_written + 1;
  return;
}


// Assembly code:
// 005fdb90: PUSH EBX
//   Label: crt_stdio.c_StringBufferCallback_FUN_005fdb90
// 005fdb91: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fdb95: MOV EAX,dword ptr [EDX]
// 005fdb97: LEA EBX,[EAX + 0x1]
// 005fdb9a: MOV dword ptr [EDX],EBX
// 005fdb9c: MOV BL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005fdba0: MOV byte ptr [EAX],BL
// 005fdba2: INC dword ptr [EDX + 0x10]
// 005fdba5: POP EBX
// 005fdba6: RET
