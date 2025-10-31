// Name: engine_2d.c_getStringWidthFormatted_FUN_004027a0
// Address: 004027a0
// Address Range: [[004027a0, 004027eb]]
// Convention: __cdecl
// Signature: int engine_2d.c_getStringWidthFormatted_FUN_004027a0(char * format_string, ...)
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

int __cdecl engine_2d_c_getStringWidthFormatted_FUN_004027a0(char *format_string,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_1000 [4092];
  va_list_t local_4;
  
  local_4 = &stack0x00000008;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeffc,format_string,&local_4);
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(acStack_1000);
  return iVar1;
}


// Assembly code:
// 004027a0: SUB ESP,0x1004
//   Label: engine_2d.c_getStringWidthFormatted_FUN_004027a0
// 004027a6: LEA EAX,[ESP + 0x100c]
//   XREF to: Stack[0x8] (DATA)
// 004027ad: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 004027b4: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x4] (DATA)
// 004027bb: PUSH EAX
// 004027bc: MOV EDX,dword ptr [ESP + 0x100c]
//   XREF to: Stack[0x4] (READ)
// 004027c3: PUSH EDX
// 004027c4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1004] (DATA)
// 004027c8: PUSH EAX
// 004027c9: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004027ce: ADD ESP,0xc
// 004027d1: MOV EAX,ESP
// 004027d3: XOR ECX,ECX
// 004027d5: PUSH EAX
// 004027d6: MOV dword ptr [ESP + 0x1004],ECX
//   XREF to: Stack[-0x4] (WRITE)
// 004027dd: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 004027e2: ADD ESP,0x4
// 004027e5: ADD ESP,0x1004
// 004027eb: RET
